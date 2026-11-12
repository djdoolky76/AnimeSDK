#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SimpleTalkTargetBehaviorInfo; }
namespace RPG::GameCore { class SimpleTalkTargetBehavior; }

#define LOGHKDIJJGG_CTOR_OFFSET UNITYSDK_OFFSET(0xC0628B0)
#define LOGHKDIJJGG_EJMGECHNFNL_OFFSET UNITYSDK_OFFSET(0xC061F70)
#define LOGHKDIJJGG_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xC0624D0)
#define LOGHKDIJJGG_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xC062070)
#define LOGHKDIJJGG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC0627F0)
#define LOGHKDIJJGG_KECDJEOKGCM_OFFSET UNITYSDK_OFFSET(0xC0620F0)
#define LOGHKDIJJGG_LHIDCMACLDH_OFFSET UNITYSDK_OFFSET(0xC062530)

inline static constexpr unsigned int LOGHKDIJJGG_TypeDefinitionIndex = 62134;

	class LOGHKDIJJGG : public ::System::Object
	{
	public:
		::RPG::GameCore::SimpleTalkTargetBehavior* IGHAHBNLIJA; // 0x10
		::System::Boolean HDKMCJLGOFI; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ELCDNICEPAO; // 0x1C
		::System::UInt32 JDLPMOKEBPD; // 0x20
		::System::Single PGMIOKKLHIE; // 0x24
		::System::Int32 POMODDMAILE; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_CTOR_OFFSET))(this);
		}

		::System::Void EJMGECHNFNL(::RPG::Client::SimpleTalkTargetBehaviorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SimpleTalkTargetBehaviorInfo*))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_EJMGECHNFNL_OFFSET))(this, a1);
		}

		::System::Void JDAGFHEPMHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_JDAGFHEPMHF_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KECDJEOKGCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_KECDJEOKGCM_OFFSET))(this, a1);
		}

		::System::Void LHIDCMACLDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGHKDIJJGG_LHIDCMACLDH_OFFSET))(this);
		}

	};
