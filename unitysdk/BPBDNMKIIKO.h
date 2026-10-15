#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardTeamType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BPBDNMKIIKO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define BPBDNMKIIKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C9860)
#define BPBDNMKIIKO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9C9870)
#define BPBDNMKIIKO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9C9830)

inline static constexpr unsigned int BPBDNMKIIKO_TypeDefinitionIndex = 19930;

	class BPBDNMKIIKO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* OOPCPMANCBO; // 0x18
		::RPG::GameCore::FateRinCaseBoardTeamType JCDIEKGKCPP; // 0x20
		::System::Single NEMDKBKDFDN; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBDNMKIIKO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BPBDNMKIIKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPBDNMKIIKO*))((::PBYTE)hIl2Cpp + BPBDNMKIIKO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BPBDNMKIIKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BPBDNMKIIKO*))((::PBYTE)hIl2Cpp + BPBDNMKIIKO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
