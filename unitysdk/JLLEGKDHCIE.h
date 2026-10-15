#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPGDJAAKBFA;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class Action; }

#define JLLEGKDHCIE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB74D70)
#define JLLEGKDHCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB74F50)
#define JLLEGKDHCIE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CB74E30)
#define JLLEGKDHCIE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CB74F10)

inline static constexpr unsigned int JLLEGKDHCIE_TypeDefinitionIndex = 43497;

	class JLLEGKDHCIE : public ::System::Object
	{
	public:
		::RPG::PoolHashSet_1<::System::Int32>* CFBAAMFMIJE; // 0x10
		::System::Action* HGOJNFKDIMA; // 0x18
		::RPG::PoolHashSet_1<::System::Int32>* JDBNDOAKIDC; // 0x20
		::MPGDJAAKBFA* FKIBGPJNCIJ; // 0x28
		::System::Single IGHMGFAEGJN; // 0x30
		::System::Boolean IPKICAFDKEP; // 0x34
		::System::Boolean LKNGNNABKOA; // 0x35
		::System::Boolean JOGPCCBNBHI; // 0x36
		::System::Boolean OHJLAOMDJKE; // 0x37
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
