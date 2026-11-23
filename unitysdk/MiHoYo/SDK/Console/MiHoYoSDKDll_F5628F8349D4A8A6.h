#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6_F2F1CFB063FC652B_OFFSET UNITYSDK_OFFSET(0x3ADF610)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3AE0220)
#define MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int MiHoYoSDKDll_F5628F8349D4A8A6_TypeDefinitionIndex = 12175;

	class MiHoYoSDKDll_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Console::MiHoYoSDKDll_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::Console::MiHoYoSDKDll_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet_B3A8AFF65974F2A8()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKDll_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F2F1CFB063FC652B(::MiHoYo::SDK::NetworkResponseModel* A6CAE7339066B0FB)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_MIHOYOSDKDLL_F5628F8349D4A8A6_F2F1CFB063FC652B_OFFSET))(this, A6CAE7339066B0FB);
		}
	};
}
