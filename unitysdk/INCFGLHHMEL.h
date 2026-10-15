#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMMNJAMJJCN.h"
namespace RPG::GameCore { class GridFightWaitDragConsumable; }
namespace RPG::GameCore { class TaskContext; }

#define INCFGLHHMEL_BLBGBLLHDAB_OFFSET UNITYSDK_OFFSET(0x164D9220)
#define INCFGLHHMEL_CTOR_OFFSET UNITYSDK_OFFSET(0x164D8B80)
#define INCFGLHHMEL_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x164D8B90)
#define INCFGLHHMEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164D8CB0)
#define INCFGLHHMEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164D9180)

inline static constexpr unsigned int INCFGLHHMEL_TypeDefinitionIndex = 53590;

	class INCFGLHHMEL : public ::CMMNJAMJJCN
	{
	public:
		::RPG::GameCore::GridFightWaitDragConsumable* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GridFightWaitDragConsumable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GridFightWaitDragConsumable*))((::PBYTE)hIl2Cpp + INCFGLHHMEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCFGLHHMEL_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCFGLHHMEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCFGLHHMEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void BLBGBLLHDAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCFGLHHMEL_BLBGBLLHDAB_OFFSET))(this, a1);
		}

	};
