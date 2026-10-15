#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationTimeAtmosphereType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HHHOGHLFIOH_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCD9D0)
#define HHHOGHLFIOH_ECFLFDGEALH_OFFSET UNITYSDK_OFFSET(0x15CCD990)
#define HHHOGHLFIOH_FLJNFJFIHOI_OFFSET UNITYSDK_OFFSET(0x15CCD860)
#define HHHOGHLFIOH_HOBKJMHIJHC_OFFSET UNITYSDK_OFFSET(0x15CCD940)
#define HHHOGHLFIOH_LFPNIPDMOOM_OFFSET UNITYSDK_OFFSET(0x15CCD8F0)
#define HHHOGHLFIOH_MNLPJLBAJKJ_OFFSET UNITYSDK_OFFSET(0x15CCD8A0)

	class HHHOGHLFIOH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ElationTimeAtmosphereType FLJNFJFIHOI()
		{
			return ((::RPG::GameCore::ElationTimeAtmosphereType(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_FLJNFJFIHOI_OFFSET))(this);
		}

		::System::String* MNLPJLBAJKJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_MNLPJLBAJKJ_OFFSET))(this);
		}

		::System::String* LFPNIPDMOOM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_LFPNIPDMOOM_OFFSET))(this);
		}

		::System::String* HOBKJMHIJHC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_HOBKJMHIJHC_OFFSET))(this);
		}

		::System::Boolean ECFLFDGEALH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHOGHLFIOH_ECFLFDGEALH_OFFSET))(this);
		}

	};
