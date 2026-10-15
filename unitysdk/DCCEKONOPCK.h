#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define DCCEKONOPCK_CTOR_OFFSET UNITYSDK_OFFSET(0xE23AD40)
#define DCCEKONOPCK_GET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC00)
#define DCCEKONOPCK_GET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0xE23AC60)
#define DCCEKONOPCK_GET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0xE23ACC0)
#define DCCEKONOPCK_GET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC40)
#define DCCEKONOPCK_GET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE23ACA0)
#define DCCEKONOPCK_GET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC20)
#define DCCEKONOPCK_GET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0xE23AC80)
#define DCCEKONOPCK_PPJNBGNNGLJ_OFFSET UNITYSDK_OFFSET(0xE23ACE0)
#define DCCEKONOPCK_SET_CURRENTHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC10)
#define DCCEKONOPCK_SET_CURRENTSHIELD_OFFSET UNITYSDK_OFFSET(0xE23AC70)
#define DCCEKONOPCK_SET_ENABLEPREVIEW_OFFSET UNITYSDK_OFFSET(0xE23ACD0)
#define DCCEKONOPCK_SET_MAXHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC50)
#define DCCEKONOPCK_SET_PREVIEWEVERMAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE23ACB0)
#define DCCEKONOPCK_SET_PREVIEWHEALTH_OFFSET UNITYSDK_OFFSET(0xE23AC30)
#define DCCEKONOPCK_SET_PREVIEWSHIELD_OFFSET UNITYSDK_OFFSET(0xE23AC90)

inline static constexpr unsigned int DCCEKONOPCK_TypeDefinitionIndex = 80823;

	class DCCEKONOPCK : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _PreviewEverMaxShield_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _PreviewShield_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _MaxHealth_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CurrentShield_k__BackingField; // 0x28
		::System::Boolean _EnablePreview_k__BackingField; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::FixPoint _PreviewHealth_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _CurrentHealth_k__BackingField; // 0x40
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
