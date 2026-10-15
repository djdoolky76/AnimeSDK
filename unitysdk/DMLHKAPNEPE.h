#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DMLHKAPNEPE;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateRinCaseBoardMoveBaseInfo; }

#define DMLHKAPNEPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD19250)
#define DMLHKAPNEPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD19260)
#define DMLHKAPNEPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD19220)

inline static constexpr unsigned int DMLHKAPNEPE_TypeDefinitionIndex = 19931;

	class DMLHKAPNEPE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinCaseBoardMoveBaseInfo* OOPCPMANCBO; // 0x18
		::System::Single NEMDKBKDFDN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLHKAPNEPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMLHKAPNEPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMLHKAPNEPE*))((::PBYTE)hIl2Cpp + DMLHKAPNEPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DMLHKAPNEPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMLHKAPNEPE*))((::PBYTE)hIl2Cpp + DMLHKAPNEPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
