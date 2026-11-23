#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/F9874422644484EC_E2D1BAD6F90EB2D9.h"

class FF1237522147A967;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_A16D72E55032A2A9_OFFSET UNITYSDK_OFFSET(0x29FF7B0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_A9615CFB8E4C0778_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_AF37544428AB7072_OFFSET UNITYSDK_OFFSET(0x29FF6C0)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2A00690)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_F5628F8349D4A8A6_TypeDefinitionIndex = 15812;

	class MiHoYoSDKServer_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKServer_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::MiHoYo::SDK::MiHoYoSDKServer_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action** StaticGet_EB0986F4A705A2F5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_2<::FF1237522147A967*, ::System::Object*>** StaticGet_A3920F4D7C3B39FA()
		{
			return (::System::Func_2<::FF1237522147A967*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Func_2<::System::String*, ::System::Object*>** StaticGet_AC3A597DDC6F9726()
		{
			return (::System::Func_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKServer_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void A9615CFB8E4C0778()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_A9615CFB8E4C0778_OFFSET))(this);
		}

		::F9874422644484EC_E2D1BAD6F90EB2D9 AF37544428AB7072(::FF1237522147A967* BF3A584683910405)
		{
			return ((::F9874422644484EC_E2D1BAD6F90EB2D9(*)(::PVOID, ::FF1237522147A967*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_AF37544428AB7072_OFFSET))(this, BF3A584683910405);
		}

		::F9874422644484EC_E2D1BAD6F90EB2D9 A16D72E55032A2A9(::System::String* F061D2971F916C4D)
		{
			return ((::F9874422644484EC_E2D1BAD6F90EB2D9(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F5628F8349D4A8A6_A16D72E55032A2A9_OFFSET))(this, F061D2971F916C4D);
		}
	};
}
