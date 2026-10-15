#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN;
namespace RPG::Client { class IAssetOperation; }
namespace System { class String; }
namespace UnityEngine::Timeline { class TimelineAsset; }

#define HIIFJAIAHJN_MPBNCGKHOOD_BIHGLMGIGPL_OFFSET UNITYSDK_OFFSET(0x15CDD000)
#define HIIFJAIAHJN_MPBNCGKHOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD94A0)
#define HIIFJAIAHJN_MPBNCGKHOOD_DDOGMPLDEJP_OFFSET UNITYSDK_OFFSET(0x15CDCFF0)
#define HIIFJAIAHJN_MPBNCGKHOOD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CDA320)
#define HIIFJAIAHJN_MPBNCGKHOOD_DNLBJCEIIKD_OFFSET UNITYSDK_OFFSET(0x15CDD140)
#define HIIFJAIAHJN_MPBNCGKHOOD_EGKNKHEANAN_OFFSET UNITYSDK_OFFSET(0x15CDB540)
#define HIIFJAIAHJN_MPBNCGKHOOD_HNLHPGKIAIC_OFFSET UNITYSDK_OFFSET(0x15CD9E90)
#define HIIFJAIAHJN_MPBNCGKHOOD_IKHJMENJMHJ_OFFSET UNITYSDK_OFFSET(0x15CDD1A0)

inline static constexpr unsigned int HIIFJAIAHJN_MPBNCGKHOOD_TypeDefinitionIndex = 59680;

	class HIIFJAIAHJN_MPBNCGKHOOD : public ::System::Object
	{
	public:
		::RPG::Client::IAssetOperation* JMLPCOLIILA; // 0x10
		::HIIFJAIAHJN* CFKHNPGEAJA; // 0x18
		::System::String* DOEIHCMGBDL; // 0x20
		::UnityEngine::Timeline::TimelineAsset* JONEOBGMIPH; // 0x28
		::System::Void _ctor(::HIIFJAIAHJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIFJAIAHJN*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_CTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::TimelineAsset* DDOGMPLDEJP()
		{
			return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_DDOGMPLDEJP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_DISPOSE_OFFSET))(this);
		}

		::System::Void BIHGLMGIGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_BIHGLMGIGPL_OFFSET))(this);
		}

		::System::Void DNLBJCEIIKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_DNLBJCEIIKD_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineAsset* HNLHPGKIAIC()
		{
			return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_HNLHPGKIAIC_OFFSET))(this);
		}

		::System::Void EGKNKHEANAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_EGKNKHEANAN_OFFSET))(this);
		}

		::System::Boolean IKHJMENJMHJ(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + HIIFJAIAHJN_MPBNCGKHOOD_IKHJMENJMHJ_OFFSET))(this, a1);
		}

	};
