#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class ForceFiveDimLoadModel; }

#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB350)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6BB360)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceFiveDimLoadModel_TypeDefinitionIndex = 21054;

	class ForceFiveDimLoadModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
