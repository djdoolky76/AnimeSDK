#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TickLodTemplate; }

#define RPG_GAMECORE_TICKLODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB574C0)
#define RPG_GAMECORE_TICKLODTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB574D0)
#define RPG_GAMECORE_TICKLODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB57490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodTemplate_TypeDefinitionIndex = 19217;

	class TickLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
