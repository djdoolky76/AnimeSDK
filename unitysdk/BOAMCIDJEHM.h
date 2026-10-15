#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropInitFastDeliverPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define BOAMCIDJEHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBDE33D0)
#define BOAMCIDJEHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDE3400)

inline static constexpr unsigned int BOAMCIDJEHM_TypeDefinitionIndex = 58329;

	class BOAMCIDJEHM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropInitFastDeliverPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitFastDeliverPuzzle*))((::PBYTE)hIl2Cpp + BOAMCIDJEHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOAMCIDJEHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
