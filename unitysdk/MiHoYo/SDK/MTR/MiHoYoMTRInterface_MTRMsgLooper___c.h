#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xAFC09F0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xAFC0A30)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0xAFC0A40)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET UNITYSDK_OFFSET(0xAFC0A80)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET UNITYSDK_OFFSET(0xAFC0AC0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex = 46686;

	class MiHoYoMTRInterface_MTRMsgLooper___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__5_2()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x2A410);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x2A418);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x2A420);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>c")->GetStaticField(0x2A428);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__5_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _Update_b__5_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET))(this, a1);
		}

		::System::Void _Update_b__5_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET))(this, a1);
		}

	};
}
