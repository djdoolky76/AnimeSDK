#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCCEPNCBEE_CancelReason.h"
#include "unitysdk/JJDFGMMMCMI.h"
#include "unitysdk/RPG/Client/GridFightUpdateSummarizer.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpotLightTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define APCCEPNCBEE_CTOR_OFFSET UNITYSDK_OFFSET(0x169F6410)
#define APCCEPNCBEE_FHONJDBHJGC_OFFSET UNITYSDK_OFFSET(0x169F5B60)
#define APCCEPNCBEE_IIFPGNCJCDG_OFFSET UNITYSDK_OFFSET(0x169F6010)
#define APCCEPNCBEE_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x169F5620)
#define APCCEPNCBEE_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x169F4D60)

inline static constexpr unsigned int APCCEPNCBEE_TypeDefinitionIndex = 66991;

	class APCCEPNCBEE : public ::RPG::Client::GridFightUpdateSummarizer
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* LLIAEIFPLAE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* PNOFGIMOLGC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCEPNCBEE_CTOR_OFFSET))(this);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + APCCEPNCBEE_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + APCCEPNCBEE_UPDATEAFTER_OFFSET))(this, a1);
		}

		::System::Void FHONJDBHJGC(::RPG::Client::GridFightSpotLightTrack* a1, ::APCCEPNCBEE_CancelReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightSpotLightTrack*, ::APCCEPNCBEE_CancelReason))((::PBYTE)hIl2Cpp + APCCEPNCBEE_FHONJDBHJGC_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IIFPGNCJCDG(::RPG::Client::GridFightSpotLightTrack* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightSpotLightTrack*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + APCCEPNCBEE_IIFPGNCJCDG_OFFSET))(a1, a2);
		}

	};
