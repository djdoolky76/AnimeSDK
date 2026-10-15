#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNewsForumOperationType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MCFJIFLMBCE;

#define MCFJIFLMBCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10BCE0)
#define MCFJIFLMBCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10BCF0)
#define MCFJIFLMBCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10BCB0)

inline static constexpr unsigned int MCFJIFLMBCE_TypeDefinitionIndex = 10232;

	class MCFJIFLMBCE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DGLJLJEHNNB; // 0x18
		::RPG::Client::LimaoNewsForumOperationType PLPPPCEPBDO; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFJIFLMBCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCFJIFLMBCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCFJIFLMBCE*))((::PBYTE)hIl2Cpp + MCFJIFLMBCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MCFJIFLMBCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCFJIFLMBCE*))((::PBYTE)hIl2Cpp + MCFJIFLMBCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
