#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLCANOMBLNG;
class NPHJFBGENAO;
namespace RPG::Client { class BattleUITeamBlockItemViewData; }
namespace UnityEngine { class Transform; }

#define MLCANOMBLNG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1B914BB0)
#define MLCANOMBLNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B914C40)
#define MLCANOMBLNG_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x1B914C50)
#define MLCANOMBLNG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1B914CB0)

inline static constexpr unsigned int MLCANOMBLNG_TypeDefinitionIndex = 73165;

	class MLCANOMBLNG : public ::System::Object
	{
	public:
		::NPHJFBGENAO* CNHBIOJOFDK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCANOMBLNG_CTOR_OFFSET))(this);
		}

		static ::MLCANOMBLNG* BPLPBPMEODA(::UnityEngine::Transform* a1)
		{
			return ((::MLCANOMBLNG*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MLCANOMBLNG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLCANOMBLNG_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::RPG::Client::BattleUITeamBlockItemViewData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleUITeamBlockItemViewData*))((::PBYTE)hIl2Cpp + MLCANOMBLNG_NKPPGDENJAE_OFFSET))(this, a1);
		}

	};
