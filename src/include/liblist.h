#pragma once

// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
#ifdef __cplusplus
extern "C" {
#endif

	typedef struct node {
		int data;
		struct node* next;
	}node;

	// p�̑O��data�̒l�����m�[�h��ǉ�����
	node* add_node(node* p, int data);
	
	// p�Ŏn�܂郊�X�g�̃m�[�h�̃��������m�ۂ���
	void delete_all(node* p);


// C++ ��C�̃��C�u�������g���Ƃ��̂��܂��Ȃ�
#ifdef __cplusplus
} // extern "C"
#endif