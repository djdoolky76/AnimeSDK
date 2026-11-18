#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF442C0)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF44300)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EF44310)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET UNITYSDK_OFFSET(0x1EF44640)
#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET UNITYSDK_OFFSET(0x1EF44660)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex = 35713;

	class MiHoYoMTRInterface_MTRMsgLooper___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x2A840);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x2A848);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__5_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x2A850);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__5_2()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoMTRInterface_MTRMsgLooper___c_TypeDefinitionIndex)->GetStaticField(0x2A858);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__5_0(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_0_OFFSET))(this, item);
		}

		::System::Void _Update_b__5_1(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_1_OFFSET))(this, item);
		}

		::System::Void _Update_b__5_2(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_MTRMSGLOOPER___C__UPDATE_B__5_2_OFFSET))(this, item);
		}
	};
}
