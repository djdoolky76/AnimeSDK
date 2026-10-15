#pragma once
#include "unitysdk/unitysdk.h"
class LCJPDOOLBEC;
namespace RPG::GameCore { class ElationActionBarAbilityChange; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define AABBKJDNEAK_ABIKKPEJLAL_OFFSET UNITYSDK_OFFSET(0xB0BF850)
#define AABBKJDNEAK_AIACIKLKHPK_OFFSET UNITYSDK_OFFSET(0xB0BF7A0)
#define AABBKJDNEAK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0BF690)
#define AABBKJDNEAK_FGOEGLEDNCJ_OFFSET UNITYSDK_OFFSET(0xB0BF7E0)
#define AABBKJDNEAK_INMAMAEFECM_OFFSET UNITYSDK_OFFSET(0xB0BF760)
#define AABBKJDNEAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB0BF6C0)

inline static constexpr unsigned int AABBKJDNEAK_TypeDefinitionIndex = 55007;

	class AABBKJDNEAK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElationActionBarAbilityChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElationActionBarAbilityChange*))((::PBYTE)hIl2Cpp + AABBKJDNEAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABBKJDNEAK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void INMAMAEFECM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABBKJDNEAK_INMAMAEFECM_OFFSET))(this);
		}

		::System::Void AIACIKLKHPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABBKJDNEAK_AIACIKLKHPK_OFFSET))(this);
		}

		::RPG::GameCore::TurnBasedGameMode* FGOEGLEDNCJ()
		{
			return ((::RPG::GameCore::TurnBasedGameMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABBKJDNEAK_FGOEGLEDNCJ_OFFSET))(this);
		}

		::LCJPDOOLBEC* ABIKKPEJLAL()
		{
			return ((::LCJPDOOLBEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AABBKJDNEAK_ABIKKPEJLAL_OFFSET))(this);
		}

	};
