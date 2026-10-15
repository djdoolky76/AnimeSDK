#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FDDGFLBHAHE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define FDDGFLBHAHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAC7F0)
#define FDDGFLBHAHE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDAC880)
#define FDDGFLBHAHE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDAC740)

inline static constexpr unsigned int FDDGFLBHAHE_TypeDefinitionIndex = 22808;

	class FDDGFLBHAHE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* OKCDNKKJFOB; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDGFLBHAHE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FDDGFLBHAHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FDDGFLBHAHE*))((::PBYTE)hIl2Cpp + FDDGFLBHAHE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FDDGFLBHAHE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FDDGFLBHAHE*))((::PBYTE)hIl2Cpp + FDDGFLBHAHE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
