#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class BJHMBGLPOLB;
class DLLHPMAFJLA;
class NICKEDCDPBF;
class OOCCBMLAELL;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define NDAFKPJBGCE_CBHEACHJKPB_OFFSET UNITYSDK_OFFSET(0xBB1E6C0)
#define NDAFKPJBGCE_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1E290)
#define NDAFKPJBGCE_DAMAELNBNKF_OFFSET UNITYSDK_OFFSET(0xBB1E320)
#define NDAFKPJBGCE_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBB1E810)

inline static constexpr unsigned int NDAFKPJBGCE_TypeDefinitionIndex = 61034;

	class NDAFKPJBGCE : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x10
		::DLLHPMAFJLA* AOJOFMPOBBB; // 0x18
		::DLLHPMAFJLA* JPFDDCLHOEE; // 0x20
		::OOCCBMLAELL* LICMIKIFMJN; // 0x28
		::NICKEDCDPBF* FDMONEOFDPH; // 0x30
		::System::Void _ctor(::NICKEDCDPBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NICKEDCDPBF*))((::PBYTE)hIl2Cpp + NDAFKPJBGCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void DAMAELNBNKF(::BJHMBGLPOLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJHMBGLPOLB*))((::PBYTE)hIl2Cpp + NDAFKPJBGCE_DAMAELNBNKF_OFFSET))(this, a1);
		}

		::System::Void CBHEACHJKPB(::RPG::GameCore::TurnState a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnState, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + NDAFKPJBGCE_CBHEACHJKPB_OFFSET))(this, a1, a2);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NDAFKPJBGCE_DFFCHNLKELO_OFFSET))(this, a1);
		}

	};
