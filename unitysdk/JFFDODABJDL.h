#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdventureByMoveInputTowardsTarget; }
namespace RPG::GameCore { class TaskContext; }

#define JFFDODABJDL_CTOR_OFFSET UNITYSDK_OFFSET(0x166358F0)
#define JFFDODABJDL_EVALUATE_OFFSET UNITYSDK_OFFSET(0x16635920)

inline static constexpr unsigned int JFFDODABJDL_TypeDefinitionIndex = 53124;

	class JFFDODABJDL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureByMoveInputTowardsTarget* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureByMoveInputTowardsTarget*))((::PBYTE)hIl2Cpp + JFFDODABJDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFDODABJDL_EVALUATE_OFFSET))(this);
		}

	};
