#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFACHPPOANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A211200)
#define HFACHPPOANI_DNDDLHHOIEO_OFFSET UNITYSDK_OFFSET(0x1A211180)
#define HFACHPPOANI_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x1A211100)
#define HFACHPPOANI_ONENTEREND_OFFSET UNITYSDK_OFFSET(0x1A211140)
#define HFACHPPOANI_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x1A211080)
#define HFACHPPOANI_ONEXITEND_OFFSET UNITYSDK_OFFSET(0x1A2110C0)
#define HFACHPPOANI_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x1A2111C0)

inline static constexpr unsigned int HFACHPPOANI_TypeDefinitionIndex = 75234;

	class HFACHPPOANI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_CTOR_OFFSET))(this);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnExitEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_ONEXITEND_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_ONENTEREND_OFFSET))(this);
		}

		::System::Void DNDDLHHOIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_DNDDLHHOIEO_OFFSET))(this);
		}

		::System::Void OnTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFACHPPOANI_ONTRANSITIONEND_OFFSET))(this);
		}

	};
