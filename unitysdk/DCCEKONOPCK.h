#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define DCCEKONOPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE233530)
#define DCCEKONOPCK_GET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0xE2333F0)
#define DCCEKONOPCK_GET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0xE233450)
#define DCCEKONOPCK_GET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0xE2334B0)
#define DCCEKONOPCK_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0xE233430)
#define DCCEKONOPCK_GET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE233490)
#define DCCEKONOPCK_GET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0xE233410)
#define DCCEKONOPCK_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0xE233470)
#define DCCEKONOPCK_PPJNBGNNGLJ_OFFSET UNITYSDK_OFFSET(0xE2334D0)
#define DCCEKONOPCK_SET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0xE233400)
#define DCCEKONOPCK_SET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0xE233460)
#define DCCEKONOPCK_SET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0xE2334C0)
#define DCCEKONOPCK_SET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0xE233440)
#define DCCEKONOPCK_SET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE2334A0)
#define DCCEKONOPCK_SET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0xE233420)
#define DCCEKONOPCK_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0xE233480)

inline static constexpr unsigned int DCCEKONOPCK_TypeDefinitionIndex = 80822;

	class DCCEKONOPCK : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _PreviewEverMaxShield_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _PreviewHealth_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _CurrentHealth_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _MaxHealth_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _CurrentShield_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x38
		::System::Boolean _EnablePreview_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_CurrentHealth()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_CURRENTHEALTH_OFFSET))(this);
		}

		::System::Void set_CurrentHealth(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_CURRENTHEALTH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewHealth()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_PREVIEWHEALTH_OFFSET))(this);
		}

		::System::Void set_PreviewHealth(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_PREVIEWHEALTH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxHealth()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_MAXHEALTH_OFFSET))(this);
		}

		::System::Void set_MaxHealth(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_MAXHEALTH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_CURRENTSHIELD_OFFSET))(this);
		}

		::System::Void set_CurrentShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_CURRENTSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_PREVIEWSHIELD_OFFSET))(this);
		}

		::System::Void set_PreviewShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_PREVIEWSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewEverMaxShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_PREVIEWEVERMAXSHIELD_OFFSET))(this);
		}

		::System::Void set_PreviewEverMaxShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_PREVIEWEVERMAXSHIELD_OFFSET))(this, a1);
		}

		::System::Boolean get_EnablePreview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_GET_ENABLEPREVIEW_OFFSET))(this);
		}

		::System::Void set_EnablePreview(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCCEKONOPCK_SET_ENABLEPREVIEW_OFFSET))(this, a1);
		}

		::System::Void PPJNBGNNGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCEKONOPCK_PPJNBGNNGLJ_OFFSET))(this);
		}

	};
