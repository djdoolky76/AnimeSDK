#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ArtNPCPedestrianAssetConfig_FeatureData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC699A40)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC6992E0)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xC699960)
#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_PNJGKDFAACN_OFFSET UNITYSDK_OFFSET(0xC699920)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_IdentityData_TypeDefinitionIndex = 69229;

	class ArtNPCPedestrianAssetConfig_IdentityData : public ::System::Object
	{
	public:
		::System::String* IdentityID; // 0x10
		::Il2CppArray<::System::Object*>* FeatureDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _FeatureMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_CTOR_OFFSET))(this);
		}

		::System::String* PNJGKDFAACN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_PNJGKDFAACN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_KPJGDHLENIP_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData* PAABEMLAHOL(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianAssetConfig_FeatureData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_IDENTITYDATA_PAABEMLAHOL_OFFSET))(this, a1);
		}

	};
}
