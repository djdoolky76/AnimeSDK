#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNFBJNFDAFC;
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define ICBGIKEMGPE_BFAGOGLIOGI_OFFSET UNITYSDK_OFFSET(0x15E4A410)
#define ICBGIKEMGPE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4A050)
#define ICBGIKEMGPE_DLPJABADHDE_OFFSET UNITYSDK_OFFSET(0x15E4A0D0)
#define ICBGIKEMGPE_GHOEHMALIHM_OFFSET UNITYSDK_OFFSET(0x15E4A390)
#define ICBGIKEMGPE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E4A4A0)
#define ICBGIKEMGPE_NMJMJELPOBE_OFFSET UNITYSDK_OFFSET(0x15E4A160)
#define ICBGIKEMGPE_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0x15E4A2F0)

inline static constexpr unsigned int ICBGIKEMGPE_TypeDefinitionIndex = 76625;

	class ICBGIKEMGPE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::PNFBJNFDAFC*>* HAPEFBKFFOA; // 0x10
		::System::UInt32 CKGKPENIHCP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_CTOR_OFFSET))(this);
		}

		::System::Void DLPJABADHDE(::PNFBJNFDAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNFBJNFDAFC*))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_DLPJABADHDE_OFFSET))(this, a1);
		}

		::System::Boolean NMJMJELPOBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_NMJMJELPOBE_OFFSET))(this);
		}

		::PNFBJNFDAFC* GHOEHMALIHM()
		{
			return ((::PNFBJNFDAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_GHOEHMALIHM_OFFSET))(this);
		}

		::PNFBJNFDAFC* BFAGOGLIOGI()
		{
			return ((::PNFBJNFDAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_BFAGOGLIOGI_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* OICGPNAMNAI()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBGIKEMGPE_OICGPNAMNAI_OFFSET))(this);
		}

	};
