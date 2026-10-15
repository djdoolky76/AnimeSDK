#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NGJAHLKPAIM_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5CD2C0)
#define RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NGJAHLKPAIM_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialPropertyAnimBehavior_NGJAHLKPAIM_TypeDefinitionIndex = 70720;

	class MaterialPropertyAnimBehavior_NGJAHLKPAIM : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_OAAJIAGFKGM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "NGJAHLKPAIM")->GetStaticField(0x10130);
		}

		static ::System::Int32* StaticGet_LLOEKNDKDMM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "NGJAHLKPAIM")->GetStaticField(0x10134);
		}

		static ::System::Int32* StaticGet_BJCLFKCBAOG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "NGJAHLKPAIM")->GetStaticField(0x10138);
		}

		static ::System::Int32* StaticGet_MGLJALDJHMH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "NGJAHLKPAIM")->GetStaticField(0x1013C);
		}

		static ::System::Int32* StaticGet_FDGHNJABJGG()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "NGJAHLKPAIM")->GetStaticField(0x10140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NGJAHLKPAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALPROPERTYANIMBEHAVIOR_NGJAHLKPAIM_CCTOR_OFFSET))();
		}

	};
}
