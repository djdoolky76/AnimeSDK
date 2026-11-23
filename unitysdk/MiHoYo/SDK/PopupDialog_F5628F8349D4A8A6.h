#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6_F7725A524894773D_OFFSET UNITYSDK_OFFSET(0x3A5B180)
#define MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A5D5F0)
#define MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PopupDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 13012;

	class PopupDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PopupDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::PopupDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_AB4B14C820928616()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PopupDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F7725A524894773D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_POPUPDIALOG_F5628F8349D4A8A6_F7725A524894773D_OFFSET))(this);
		}
	};
}
