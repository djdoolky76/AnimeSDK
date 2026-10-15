#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::AstraFX { class AstraFXDataManager; }
namespace RPG::Client::AstraFX { class AstraFXDataNode; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xC69BAE0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xC69B3C0)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0xC69B490)
#define RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xC69B950)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFXDataManager_TypeDefinitionIndex = 73682;

	class AstraFXDataManager
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::AstraFX::AstraFXDataNode*>* Providers; // 0x30
		::System::Collections::Generic::HashSet_1<::RPG::Client::AstraFX::AstraFXDataNode*>* Receivers; // 0x38
		static ::RPG::Client::AstraFX::AstraFXDataManager** StaticGet_FLMODBLFAGD()
		{
			return (::RPG::Client::AstraFX::AstraFXDataManager**)UnitySDK::FromName("RPG.Client.AstraFX", "AstraFXDataManager")->GetStaticField(0x476E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AstraFX::AstraFXDataManager* get_Instance()
		{
			return ((::RPG::Client::AstraFX::AstraFXDataManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void Register(::RPG::Client::AstraFX::AstraFXDataNode* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AstraFX::AstraFXDataNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_REGISTER_OFFSET))(a1);
		}

		static ::System::Void Unregister(::RPG::Client::AstraFX::AstraFXDataNode* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AstraFX::AstraFXDataNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFXDATAMANAGER_UNREGISTER_OFFSET))(a1);
		}

	};
}
