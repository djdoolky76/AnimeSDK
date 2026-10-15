#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropLodTemplate; }

#define RPG_GAMECORE_PROPLODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94F030)
#define RPG_GAMECORE_PROPLODTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94F040)
#define RPG_GAMECORE_PROPLODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94F000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropLodTemplate_TypeDefinitionIndex = 19114;

	class PropLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPLODTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
