#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTowersAIParamType.h"
class FCOEMCEDLNL;
class GBNMAFLAHED;

#define GBNMAFLAHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE28310)
#define GBNMAFLAHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE28320)
#define GBNMAFLAHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE282E0)

inline static constexpr unsigned int GBNMAFLAHED_TypeDefinitionIndex = 21564;

	class GBNMAFLAHED : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::Int32>* PBLPLDJKPEI; // 0x18
		::RPG::GameCore::TeamTowersAIParamType JBPNBECLGKN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBNMAFLAHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GBNMAFLAHED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNMAFLAHED*))((::PBYTE)hIl2Cpp + GBNMAFLAHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GBNMAFLAHED* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GBNMAFLAHED*))((::PBYTE)hIl2Cpp + GBNMAFLAHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
