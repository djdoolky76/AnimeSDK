#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFFPDEHBJJE_COMPARE_OFFSET UNITYSDK_OFFSET(0xB662B90)
#define LFFPDEHBJJE_CTOR_OFFSET UNITYSDK_OFFSET(0xB6627E0)
#define LFFPDEHBJJE_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xB662800)
#define LFFPDEHBJJE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB6628D0)

inline static constexpr unsigned int LFFPDEHBJJE_TypeDefinitionIndex = 59178;

	class LFFPDEHBJJE
	{
	public:
		::RPG::GameCore::GridFightManager* LKIGACIFAAA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightPower* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + LFFPDEHBJJE_CTOR_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + LFFPDEHBJJE_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LFFPDEHBJJE_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LFFPDEHBJJE_COMPARE_OFFSET))(this, a1, a2);
		}

	};
