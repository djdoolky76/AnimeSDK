#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6_A19A81B775970E01_OFFSET UNITYSDK_OFFSET(0x39CCA60)
#define MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6_FD356506BBA32DD1_OFFSET UNITYSDK_OFFSET(0x39CCB70)
#define MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39CDDE0)
#define MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Confirm_F5628F8349D4A8A6_TypeDefinitionIndex = 12602;

	class Confirm_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Confirm_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Confirm_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(Confirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_AE3AB14A40E0CB06()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Action** StaticGet_E59D3D96EDFC10CF()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Confirm_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A19A81B775970E01()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6_A19A81B775970E01_OFFSET))(this);
		}

		::System::Void FD356506BBA32DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONFIRM_F5628F8349D4A8A6_FD356506BBA32DD1_OFFSET))(this);
		}
	};
}
