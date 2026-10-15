#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_FEATUREDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC693500)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianAssetConfig_FeatureData_TypeDefinitionIndex = 69230;

	class ArtNPCPedestrianAssetConfig_FeatureData : public ::System::Object
	{
	public:
		::System::String* FeatureID; // 0x10
		::System::String* NPCName; // 0x18
		::Il2CppArray<::System::Object*>* ArtVariants; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANASSETCONFIG_FEATUREDATA_CTOR_OFFSET))(this);
		}

	};
}
