#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KELFJFLNAFI;
namespace RPG::Client { class MatchThreeV2StarTargetData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KELFJFLNAFI_BDOLHFFFBIB_OFFSET UNITYSDK_OFFSET(0xB37D750)
#define KELFJFLNAFI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB37D440)
#define KELFJFLNAFI_CTOR_OFFSET UNITYSDK_OFFSET(0xB37D4A0)
#define KELFJFLNAFI_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB37D4B0)

	class KELFJFLNAFI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2StarTargetData*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFJFLNAFI_CTOR_OFFSET))(this);
		}

		static ::KELFJFLNAFI* BPLPBPMEODA()
		{
			return ((::KELFJFLNAFI*(*)())((::PBYTE)hIl2Cpp + KELFJFLNAFI_BPLPBPMEODA_OFFSET))();
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KELFJFLNAFI_DIOEAJEHHND_OFFSET))(this);
		}

		::RPG::Client::MatchThreeV2StarTargetData* BDOLHFFFBIB(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2StarTargetData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KELFJFLNAFI_BDOLHFFFBIB_OFFSET))(this, a1);
		}

	};
