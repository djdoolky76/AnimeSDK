#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class ArtNPCPedestrianEntityConfig_EntityInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6936C0)
#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_GKGBNLAOFLE_OFFSET UNITYSDK_OFFSET(0xC693050)
#define RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xC692C00)

namespace RPG::Client
{
	inline static constexpr unsigned int ArtNPCPedestrianEntityConfig_TypeDefinitionIndex = 69234;

	class ArtNPCPedestrianEntityConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::String* IndependentQuality; // 0x18
		::Il2CppArray<::System::Object*>* EntityInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _EntityMap; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo* PAABEMLAHOL(::System::String* a1)
		{
			return ((::RPG::Client::ArtNPCPedestrianEntityConfig_EntityInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_PAABEMLAHOL_OFFSET))(this, a1);
		}

		::System::Void GKGBNLAOFLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARTNPCPEDESTRIANENTITYCONFIG_GKGBNLAOFLE_OFFSET))(this);
		}

	};
}
