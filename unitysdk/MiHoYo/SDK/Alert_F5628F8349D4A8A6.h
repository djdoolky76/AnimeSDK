#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_ALERT_F5628F8349D4A8A6_B7A6A6226F3693F4_OFFSET UNITYSDK_OFFSET(0x3A29D60)
#define MIHOYO_SDK_ALERT_F5628F8349D4A8A6_ECD0DFA69FFAD462_OFFSET UNITYSDK_OFFSET(0x3A29B40)
#define MIHOYO_SDK_ALERT_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A2BAC0)
#define MIHOYO_SDK_ALERT_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Alert_F5628F8349D4A8A6_TypeDefinitionIndex = 12871;

	class Alert_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Alert_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Alert_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(Alert_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_B677FA9692FF991A()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_F3FF8872618B91D3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Alert_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void ECD0DFA69FFAD462()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F5628F8349D4A8A6_ECD0DFA69FFAD462_OFFSET))(this);
		}

		::System::Void B7A6A6226F3693F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ALERT_F5628F8349D4A8A6_B7A6A6226F3693F4_OFFSET))(this);
		}
	};
}
