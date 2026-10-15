#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifySPNew; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }

#define DLFDDJKLINL_ANAGAHONMKO_OFFSET UNITYSDK_OFFSET(0xF89C670)
#define DLFDDJKLINL_CTOR_OFFSET UNITYSDK_OFFSET(0xF89BBA0)
#define DLFDDJKLINL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF89BBD0)

	class DLFDDJKLINL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifySPNew* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifySPNew*))((::PBYTE)hIl2Cpp + DLFDDJKLINL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFDDJKLINL_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* ANAGAHONMKO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLFDDJKLINL_ANAGAHONMKO_OFFSET))(this, a1);
		}

	};
