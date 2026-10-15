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

#define EMEJJBKGBHI_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x1C4438D0)
#define EMEJJBKGBHI_BFJJOJKKLGG_OFFSET UNITYSDK_OFFSET(0x1C4436F0)
#define EMEJJBKGBHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C444EF0)
#define EMEJJBKGBHI_GBGNIEFBPGO_OFFSET UNITYSDK_OFFSET(0x1C443B60)
#define EMEJJBKGBHI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C443AB0)
#define EMEJJBKGBHI_IGKNLLGCDHM_OFFSET UNITYSDK_OFFSET(0x1C443D30)
#define EMEJJBKGBHI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C443F00)
#define EMEJJBKGBHI_JPDGKAMCNII_OFFSET UNITYSDK_OFFSET(0x1C443320)

inline static constexpr unsigned int EMEJJBKGBHI_TypeDefinitionIndex = 41586;

	class EMEJJBKGBHI : public ::System::Object
	{
	public:
		static ::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::System::Object*>** StaticGet_MFMMAOCDJEH()
		{
			return (::RPG::Client::MHashLinkedList_2<::NFCPIKFFCNA*, ::System::Object*>**)UnitySDK::FromName("", "EMEJJBKGBHI")->GetStaticField(0x15FB0);
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
