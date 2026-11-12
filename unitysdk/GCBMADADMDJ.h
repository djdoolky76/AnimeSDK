#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AIActionType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GCBMADADMDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16895D10)
#define GCBMADADMDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16895D20)
#define GCBMADADMDJ_FPFPPFDFDEP_OFFSET UNITYSDK_OFFSET(0x16895D60)

inline static constexpr unsigned int GCBMADADMDJ_TypeDefinitionIndex = 53365;

	class GCBMADADMDJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AIActionType BCMKMNHPPPK; // 0x28
		::System::Boolean MEPJIFHMCJF; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GCBMADADMDJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBMADADMDJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean FPFPPFDFDEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCBMADADMDJ_FPFPPFDFDEP_OFFSET))(this);
		}

	};
