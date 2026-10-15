#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPGDJAAKBFA;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }

#define JLLEGKDHCIE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CBA30B0)
#define JLLEGKDHCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA3290)
#define JLLEGKDHCIE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CBA3170)
#define JLLEGKDHCIE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CBA3250)

	class JLLEGKDHCIE : public ::System::Object
	{
	public:
		::System::Action* HGOJNFKDIMA; // 0x10
		::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x18
		::MPGDJAAKBFA* FKIBGPJNCIJ; // 0x20
		::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x28
		::System::Boolean LKNGNNABKOA; // 0x30
		::System::Boolean IPKICAFDKEP; // 0x31
		::System::Boolean JOGPCCBNBHI; // 0x32
		::System::Boolean OHJLAOMDJKE; // 0x33
		::System::Single IGHMGFAEGJN; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLEGKDHCIE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLEGKDHCIE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLEGKDHCIE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLEGKDHCIE_ONRECYCLE_OFFSET))(this);
		}

	};
