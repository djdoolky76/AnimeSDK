#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFACHPPOANI_CTOR_OFFSET UNITYSDK_OFFSET(0x15C67100)
#define HFACHPPOANI_DNDDLHHOIEO_OFFSET UNITYSDK_OFFSET(0x15C67080)
#define HFACHPPOANI_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x15C67000)
#define HFACHPPOANI_ONENTEREND_OFFSET UNITYSDK_OFFSET(0x15C67040)
#define HFACHPPOANI_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x15C66F80)
#define HFACHPPOANI_ONEXITEND_OFFSET UNITYSDK_OFFSET(0x15C66FC0)
#define HFACHPPOANI_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x15C670C0)

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
