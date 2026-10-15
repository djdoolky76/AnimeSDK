#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KMONGMMGNPO;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define KMONGMMGNPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B5630)
#define KMONGMMGNPO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0B5640)
#define KMONGMMGNPO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0B5600)

inline static constexpr unsigned int KMONGMMGNPO_TypeDefinitionIndex = 19923;

	class KMONGMMGNPO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* OOPCPMANCBO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMONGMMGNPO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KMONGMMGNPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMONGMMGNPO*))((::PBYTE)hIl2Cpp + KMONGMMGNPO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KMONGMMGNPO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMONGMMGNPO*))((::PBYTE)hIl2Cpp + KMONGMMGNPO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
