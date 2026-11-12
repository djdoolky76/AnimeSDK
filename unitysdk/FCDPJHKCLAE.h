#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPGDJAAKBFA;

#define FCDPJHKCLAE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DC29CB0)
#define FCDPJHKCLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC29DB0)
#define FCDPJHKCLAE_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DC29D30)
#define FCDPJHKCLAE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DC29D70)

inline static constexpr unsigned int FCDPJHKCLAE_TypeDefinitionIndex = 44476;

	class FCDPJHKCLAE : public ::System::Object
	{
	public:
		::MPGDJAAKBFA* FKIBGPJNCIJ; // 0x10
		::System::Boolean IPKICAFDKEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDPJHKCLAE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDPJHKCLAE_CLEAR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDPJHKCLAE_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCDPJHKCLAE_ONRECYCLE_OFFSET))(this);
		}

	};
