#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodTemplate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodTemplate; }

#define RPG_GAMECORE_ENTITYLODTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D64B3D0)
#define RPG_GAMECORE_ENTITYLODTEMPLATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D64B3E0)
#define RPG_GAMECORE_ENTITYLODTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D64B3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityLodTemplate_TypeDefinitionIndex = 19210;

	class EntityLodTemplate : public ::RPG::GameCore::LodTemplate
	{
	public:
		::System::Boolean MeshLod; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityLodTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityLodTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYLODTEMPLATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
