#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class ByGridFightCompareRoleExtInfo; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class TaskContext; }

#define GLNGIMDCEJA_BADPECNPHIM_OFFSET UNITYSDK_OFFSET(0x16A406A0)
#define GLNGIMDCEJA_CTOR_OFFSET UNITYSDK_OFFSET(0x16A403C0)
#define GLNGIMDCEJA_EGGGHHIAHAB_OFFSET UNITYSDK_OFFSET(0x16A40590)
#define GLNGIMDCEJA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16A403F0)

inline static constexpr unsigned int GLNGIMDCEJA_TypeDefinitionIndex = 55771;

	class GLNGIMDCEJA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByGridFightCompareRoleExtInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByGridFightCompareRoleExtInfo*))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_EVALUATE_OFFSET))(this);
		}

		::System::UInt32 EGGGHHIAHAB(::RPG::GameCore::BattleGridFightAvatarData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_EGGGHHIAHAB_OFFSET))(this, a1);
		}

		::System::UInt32 BADPECNPHIM(::RPG::GameCore::GridFightManager* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GridFightManager*))((::PBYTE)hIl2Cpp + GLNGIMDCEJA_BADPECNPHIM_OFFSET))(this, a1);
		}

	};
