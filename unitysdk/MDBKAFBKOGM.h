#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define MDBKAFBKOGM_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB8966A0)
#define MDBKAFBKOGM_ADAOEGOPEPD_OFFSET UNITYSDK_OFFSET(0xB896960)
#define MDBKAFBKOGM_BEFAJLBDAOL_OFFSET UNITYSDK_OFFSET(0xB8964B0)
#define MDBKAFBKOGM_BJOAHIEMAHC_OFFSET UNITYSDK_OFFSET(0xB896A20)
#define MDBKAFBKOGM_BONNOINGKOO_OFFSET UNITYSDK_OFFSET(0xB897580)
#define MDBKAFBKOGM_CGLLGEPKKJD_OFFSET UNITYSDK_OFFSET(0xB8974A0)
#define MDBKAFBKOGM_CKNHCDDGPDI_OFFSET UNITYSDK_OFFSET(0xB896AC0)
#define MDBKAFBKOGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB896290)
#define MDBKAFBKOGM_CTOR_OFFSET UNITYSDK_OFFSET(0xB8961B0)
#define MDBKAFBKOGM_GCEMNEOGMNN_OFFSET UNITYSDK_OFFSET(0xB897530)
#define MDBKAFBKOGM_HBFGFCNCEEA_OFFSET UNITYSDK_OFFSET(0xB896390)
#define MDBKAFBKOGM_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0xB897410)
#define MDBKAFBKOGM_IBCIHIPCLOC_OFFSET UNITYSDK_OFFSET(0xB8969B0)
#define MDBKAFBKOGM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB896B20)
#define MDBKAFBKOGM_KPILLFEDLAF_OFFSET UNITYSDK_OFFSET(0xB896560)
#define MDBKAFBKOGM_LCKNMDEKIPA_OFFSET UNITYSDK_OFFSET(0xB896650)
#define MDBKAFBKOGM_OBPDBPLDDHG_OFFSET UNITYSDK_OFFSET(0xB896460)
#define MDBKAFBKOGM_PLGBOGODHPF_OFFSET UNITYSDK_OFFSET(0xB896850)

inline static constexpr unsigned int MDBKAFBKOGM_TypeDefinitionIndex = 57809;

	class MDBKAFBKOGM : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* GLFCGDLDLCO; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*>* GIPEEJCLACO; // 0x18
		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* JBIPKAENAMO; // 0x20
		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* LMCCPIDGDBC; // 0x28
		::System::UInt32 OLEIDKBKEOE; // 0x30
		::System::UInt32 EKACELHACDK; // 0x34
		::System::Boolean JFECBEOOFCH; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 BDKNDKADDOD; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void HBFGFCNCEEA(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_HBFGFCNCEEA_OFFSET))(this, a1);
		}

		::System::Void BEFAJLBDAOL(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_BEFAJLBDAOL_OFFSET))(this, a1);
		}

		::System::Void KPILLFEDLAF(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_KPILLFEDLAF_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Void PLGBOGODHPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_PLGBOGODHPF_OFFSET))(this);
		}

		::System::Void ADAOEGOPEPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_ADAOEGOPEPD_OFFSET))(this);
		}

		::System::Void IBCIHIPCLOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_IBCIHIPCLOC_OFFSET))(this);
		}

		::System::Void BJOAHIEMAHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_BJOAHIEMAHC_OFFSET))(this);
		}

		::System::Void CKNHCDDGPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_CKNHCDDGPDI_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::RPG::GameCore::GameWorld* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GCEMNEOGMNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_GCEMNEOGMNN_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* CGLLGEPKKJD()
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_CGLLGEPKKJD_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* BONNOINGKOO()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_BONNOINGKOO_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* OBPDBPLDDHG()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_OBPDBPLDDHG_OFFSET))(this);
		}

		::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>* LCKNMDEKIPA()
		{
			return ((::System::Collections::Generic::LinkedList_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDBKAFBKOGM_LCKNMDEKIPA_OFFSET))(this);
		}

	};
