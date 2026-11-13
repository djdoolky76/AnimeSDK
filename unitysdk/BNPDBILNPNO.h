#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AudienceAssetConfig; }
namespace RPG::Client::CrowdAnimator { class CrowdAssetsPathConfig; }

#define BNPDBILNPNO_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x1A77BEB0)
#define BNPDBILNPNO_IPNLEKNNLHM_OFFSET UNITYSDK_OFFSET(0x1A77BE90)
#define BNPDBILNPNO_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1A77BF60)
#define BNPDBILNPNO_PIAFAICPMLN_OFFSET UNITYSDK_OFFSET(0x1A77BEA0)

inline static constexpr unsigned int BNPDBILNPNO_TypeDefinitionIndex = 71081;

	class BNPDBILNPNO : public ::System::Object
	{
	public:
		static ::RPG::Client::AudienceAssetConfig** StaticGet_DMPEKPLLCPL()
		{
			return (::RPG::Client::AudienceAssetConfig**)UnitySDK::FromName("", "BNPDBILNPNO")->GetStaticField(0x59290);
		}

		static ::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig** StaticGet_NCDCMMAELHE()
		{
			return (::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig**)UnitySDK::FromName("", "BNPDBILNPNO")->GetStaticField(0x59298);
		}

		static ::System::Boolean* StaticGet_AICGMPKPDMP()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "BNPDBILNPNO")->GetStaticField(0x13010);
		}

		static ::RPG::Client::AudienceAssetConfig* IPNLEKNNLHM()
		{
			return ((::RPG::Client::AudienceAssetConfig*(*)())((::PBYTE)hIl2Cpp + BNPDBILNPNO_IPNLEKNNLHM_OFFSET))();
		}

		static ::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig* PIAFAICPMLN()
		{
			return ((::RPG::Client::CrowdAnimator::CrowdAssetsPathConfig*(*)())((::PBYTE)hIl2Cpp + BNPDBILNPNO_PIAFAICPMLN_OFFSET))();
		}

		static ::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNPDBILNPNO_HKEPJLDBGIG_OFFSET))();
		}

		static ::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNPDBILNPNO_PEECNCABGFD_OFFSET))();
		}

	};
