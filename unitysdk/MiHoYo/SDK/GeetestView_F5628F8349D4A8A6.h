#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6_A081A2E0BE26DB7F_OFFSET UNITYSDK_OFFSET(0x3953170)
#define MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39551B0)
#define MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int GeetestView_F5628F8349D4A8A6_TypeDefinitionIndex = 12404;

	class GeetestView_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::GeetestView_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::GeetestView_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::GeetestView*>** StaticGet_E4AE7C6234D30C14()
		{
			return (::System::Action_1<::MiHoYo::SDK::GeetestView*>**)Il2CppClass::FromTypeDefinitionIndex(GeetestView_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A081A2E0BE26DB7F(::MiHoYo::SDK::GeetestView* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_GEETESTVIEW_F5628F8349D4A8A6_A081A2E0BE26DB7F_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
