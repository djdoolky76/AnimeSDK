#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinServantType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GFEEGCPKEJB;

#define GFEEGCPKEJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE3B9D0)
#define GFEEGCPKEJB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE3B9E0)
#define GFEEGCPKEJB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE3B9A0)

inline static constexpr unsigned int GFEEGCPKEJB_TypeDefinitionIndex = 19935;

	class GFEEGCPKEJB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::FateRinServantType KJDGJHAAMNJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEEGCPKEJB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GFEEGCPKEJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFEEGCPKEJB*))((::PBYTE)hIl2Cpp + GFEEGCPKEJB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GFEEGCPKEJB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GFEEGCPKEJB*))((::PBYTE)hIl2Cpp + GFEEGCPKEJB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
