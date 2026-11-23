#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6_F2F1CFB063FC652B_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2946E10)
#define MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDK_F5628F8349D4A8A6_TypeDefinitionIndex = 15379;

	class MiHoYoSDK_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDK_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::MiHoYoSDK_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_B3A8AFF65974F2A8()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDK_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F2F1CFB063FC652B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDK_F5628F8349D4A8A6_F2F1CFB063FC652B_OFFSET))(this);
		}
	};
}
