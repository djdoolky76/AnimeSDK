#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
class MCPOJOODEGO;

#define MCPOJOODEGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D113DB0)
#define MCPOJOODEGO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D113DC0)
#define MCPOJOODEGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D113D60)

inline static constexpr unsigned int MCPOJOODEGO_TypeDefinitionIndex = 16854;

	class MCPOJOODEGO : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCPOJOODEGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MCPOJOODEGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCPOJOODEGO*))((::PBYTE)hIl2Cpp + MCPOJOODEGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MCPOJOODEGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MCPOJOODEGO*))((::PBYTE)hIl2Cpp + MCPOJOODEGO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
