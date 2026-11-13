#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOCEFFDMFPM;
class NFCPIKFFCNA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { template <typename T1, typename T2> class MHashLinkedList_2; }
namespace RPG::Client::AssetSystem { class AssetObjectOptProxy; }
namespace RPG::Client::AssetSystem { class InstanceLoader; }
namespace System { class Object; }

#define EMEJJBKGBHI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x15B03DD0)
#define EMEJJBKGBHI_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0x15B03BF0)
#define EMEJJBKGBHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B05260)
#define EMEJJBKGBHI_GBGNIEFBPGO_OFFSET UNITYSDK_OFFSET(0x15B04000)
#define EMEJJBKGBHI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15B03F80)
#define EMEJJBKGBHI_IGKNLLGCDHM_OFFSET UNITYSDK_OFFSET(0x15B04180)
#define EMEJJBKGBHI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15B04300)
#define EMEJJBKGBHI_JPDGKAMCNII_OFFSET UNITYSDK_OFFSET(0x15B038C0)

inline static constexpr unsigned int EMEJJBKGBHI_TypeDefinitionIndex = 42561;

	class EMEJJBKGBHI : public ::System::Object
	{
	public:
		static ::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::System::Object*>** StaticGet_MFMMAOCDJEH()
		{
			return (::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::System::Object*>**)UnitySDK::FromName("", "EMEJJBKGBHI")->GetStaticField(0x711C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEJJBKGBHI_CCTOR_OFFSET))();
		}

		static ::System::Void JPDGKAMCNII(::RPG::Client::AssetSystem::AssetObjectOptProxy* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AssetSystem::AssetObjectOptProxy*))((::PBYTE)hIl2Cpp + EMEJJBKGBHI_JPDGKAMCNII_OFFSET))(a1);
		}

		static ::System::Boolean BFJJOJKKLGG(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + EMEJJBKGBHI_BFJJOJKKLGG_OFFSET))(a1);
		}

		static ::System::Void AALCFBOGFKP(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + EMEJJBKGBHI_AALCFBOGFKP_OFFSET))(a1);
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEJJBKGBHI_HADOHLNHHGB_OFFSET))();
		}

		static ::System::Void GBGNIEFBPGO(::RPG::Client::AssetSystem::InstanceLoader* a1)
		{
			return ((::System::Void(*)(::RPG::Client::AssetSystem::InstanceLoader*))((::PBYTE)hIl2Cpp + EMEJJBKGBHI_GBGNIEFBPGO_OFFSET))(a1);
		}

		static ::System::Void IGKNLLGCDHM(::BOCEFFDMFPM* a1)
		{
			return ((::System::Void(*)(::BOCEFFDMFPM*))((::PBYTE)hIl2Cpp + EMEJJBKGBHI_IGKNLLGCDHM_OFFSET))(a1);
		}

		static ::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEJJBKGBHI_JLANKNHFKCN_OFFSET))();
		}

	};
