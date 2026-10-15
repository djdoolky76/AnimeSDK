#pragma once
#include "unitysdk/unitysdk.h"
class MDBKAFBKOGM;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }

#define GHDABJFOHJL_AIEHMLPBHCG_OFFSET UNITYSDK_OFFSET(0x2E7B780)
#define GHDABJFOHJL_ANDEIIDIJNE_OFFSET UNITYSDK_OFFSET(0x2E7B730)
#define GHDABJFOHJL_FEADNMNABOL_OFFSET UNITYSDK_OFFSET(0x2E7B7E0)
#define GHDABJFOHJL_NEHKLHNLJPM_OFFSET UNITYSDK_OFFSET(0x2E7B6D0)

inline static constexpr unsigned int GHDABJFOHJL_TypeDefinitionIndex = 57808;

	struct alignas(8) GHDABJFOHJL
	{
		::MDBKAFBKOGM* NDJEAPFGBOD; // 0x10
		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* LKFELOKEOIG; // 0x18
		::System::Boolean NEHKLHNLJPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDABJFOHJL_NEHKLHNLJPM_OFFSET))(this);
		}

		::System::Boolean ANDEIIDIJNE(::MDBKAFBKOGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MDBKAFBKOGM*))((::PBYTE)hIl2Cpp + GHDABJFOHJL_ANDEIIDIJNE_OFFSET))(this, a1);
		}

		::System::Void AIEHMLPBHCG(::MDBKAFBKOGM* a1, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDBKAFBKOGM*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GHDABJFOHJL_AIEHMLPBHCG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>* FEADNMNABOL()
		{
			return ((::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDABJFOHJL_FEADNMNABOL_OFFSET))(this);
		}

	};
