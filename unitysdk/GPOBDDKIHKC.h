#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFACHPPOANI.h"
namespace RPG::Client { class UIController; }

#define GPOBDDKIHKC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B58B30)
#define GPOBDDKIHKC_DNDDLHHOIEO_OFFSET UNITYSDK_OFFSET(0x15B58DC0)
#define GPOBDDKIHKC_ONENTERBEGIN_OFFSET UNITYSDK_OFFSET(0x15B58C80)
#define GPOBDDKIHKC_ONEXITBEGIN_OFFSET UNITYSDK_OFFSET(0x15B58B40)
#define GPOBDDKIHKC_ONTRANSITIONEND_OFFSET UNITYSDK_OFFSET(0x15B58E40)

inline static constexpr unsigned int GPOBDDKIHKC_TypeDefinitionIndex = 73121;

	class GPOBDDKIHKC : public ::HFACHPPOANI
	{
	public:
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x10
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x18
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + GPOBDDKIHKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnExitBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBDDKIHKC_ONEXITBEGIN_OFFSET))(this);
		}

		::System::Void OnEnterBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBDDKIHKC_ONENTERBEGIN_OFFSET))(this);
		}

		::System::Void DNDDLHHOIEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBDDKIHKC_DNDDLHHOIEO_OFFSET))(this);
		}

		::System::Void OnTransitionEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBDDKIHKC_ONTRANSITIONEND_OFFSET))(this);
		}

	};
