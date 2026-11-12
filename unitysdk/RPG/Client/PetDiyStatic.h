#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PETDIYSTATIC_CCTOR_OFFSET UNITYSDK_OFFSET(0xE525820)

namespace RPG::Client
{
	inline static constexpr unsigned int PetDiyStatic_TypeDefinitionIndex = 68350;

	class PetDiyStatic : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_ContentID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "PetDiyStatic")->GetStaticField(0x4F20);
		}

		static ::System::UInt32* StaticGet_UnlockTrainDiySubMissionID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "PetDiyStatic")->GetStaticField(0x4F24);
		}

		static ::System::UInt32* StaticGet_PreMissionID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "PetDiyStatic")->GetStaticField(0x4F28);
		}

		static ::System::UInt32* StaticGet_PreMissionGotoID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "PetDiyStatic")->GetStaticField(0x4F2C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETDIYSTATIC_CCTOR_OFFSET))();
		}

	};
}
