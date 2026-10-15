#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournBuildRefReportMarkType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDKGOANJEKH_PMKDENEDJLK.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IDKGOANJEKH_BELOCBJLAPI_1_OFFSET UNITYSDK_OFFSET(0x15ED9370)
#define IDKGOANJEKH_BELOCBJLAPI_OFFSET UNITYSDK_OFFSET(0x15ED8790)
#define IDKGOANJEKH_EGDJAMFHDIP_OFFSET UNITYSDK_OFFSET(0x15ED71F0)
#define IDKGOANJEKH_GLODECDBPKL_1_OFFSET UNITYSDK_OFFSET(0x15ED8280)
#define IDKGOANJEKH_GLODECDBPKL_OFFSET UNITYSDK_OFFSET(0x15ED76A0)

inline static constexpr unsigned int IDKGOANJEKH_TypeDefinitionIndex = 67808;

	class IDKGOANJEKH : public ::System::Object
	{
	public:
		static ::IDKGOANJEKH_PMKDENEDJLK EGDJAMFHDIP()
		{
			return ((::IDKGOANJEKH_PMKDENEDJLK(*)())((::PBYTE)hIl2Cpp + IDKGOANJEKH_EGDJAMFHDIP_OFFSET))();
		}

		static ::RPG::Client::RogueTournBuildRefReportMarkType GLODECDBPKL(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournBuildRefReportMarkType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IDKGOANJEKH_GLODECDBPKL_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefReportMarkType GLODECDBPKL_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefReportMarkType(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IDKGOANJEKH_GLODECDBPKL_1_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefReportMarkType BELOCBJLAPI(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournBuildRefReportMarkType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IDKGOANJEKH_BELOCBJLAPI_OFFSET))(a1);
		}

		static ::RPG::Client::RogueTournBuildRefReportMarkType BELOCBJLAPI_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefReportMarkType(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IDKGOANJEKH_BELOCBJLAPI_1_OFFSET))(a1);
		}

	};
