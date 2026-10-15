#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define FNJFKHMDPDJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA71AF0)
#define FNJFKHMDPDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA71B70)
#define FNJFKHMDPDJ_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA71A10)
#define FNJFKHMDPDJ_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA71AB0)

inline static constexpr unsigned int FNJFKHMDPDJ_TypeDefinitionIndex = 43500;

	class FNJFKHMDPDJ : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::String*>* OPNCNAGOGPI; // 0x10
		::RPG::PoolList_1<::System::Int32>* PECDILDCFKF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJFKHMDPDJ_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJFKHMDPDJ_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJFKHMDPDJ_ONRECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNJFKHMDPDJ_CLEAR_OFFSET))(this);
		}

	};
