#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PS { class PSReactivateDialog; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6_FA0E3DE99CD2CAB3_OFFSET UNITYSDK_OFFSET(0x3908E90)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39090E0)
#define MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSReactivateDialog_F5628F8349D4A8A6_TypeDefinitionIndex = 12287;

	class PSReactivateDialog_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PS::PSReactivateDialog_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::PS::PSReactivateDialog_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::PS::PSReactivateDialog*>** StaticGet_B2B462D767EFBA79()
		{
			return (::System::Action_1<::MiHoYo::SDK::PS::PSReactivateDialog*>**)Il2CppClass::FromTypeDefinitionIndex(PSReactivateDialog_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void FA0E3DE99CD2CAB3(::MiHoYo::SDK::PS::PSReactivateDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSReactivateDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSREACTIVATEDIALOG_F5628F8349D4A8A6_FA0E3DE99CD2CAB3_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
