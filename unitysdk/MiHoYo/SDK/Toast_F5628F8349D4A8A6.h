#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_TOAST_F5628F8349D4A8A6_E6023526F4D5664A_OFFSET UNITYSDK_OFFSET(0x3A7EAA0)
#define MIHOYO_SDK_TOAST_F5628F8349D4A8A6_F9A31A3A365EC8CC_OFFSET UNITYSDK_OFFSET(0x3A7E940)
#define MIHOYO_SDK_TOAST_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A80EC0)
#define MIHOYO_SDK_TOAST_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Toast_F5628F8349D4A8A6_TypeDefinitionIndex = 11949;

	class Toast_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Toast_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Toast_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(Toast_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_A11D69BF37F0CD6C()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Toast_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_E24FFC86744F9F1C()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Toast_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F9A31A3A365EC8CC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F5628F8349D4A8A6_F9A31A3A365EC8CC_OFFSET))(this);
		}

		::System::Void E6023526F4D5664A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TOAST_F5628F8349D4A8A6_E6023526F4D5664A_OFFSET))(this);
		}
	};
}
