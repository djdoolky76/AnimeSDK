#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropPuzzleViewEventSender; }
namespace RPG::GameCore { class TaskContext; }

#define LOLIIJCCAHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB8063A0)
#define LOLIIJCCAHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8063D0)

inline static constexpr unsigned int LOLIIJCCAHH_TypeDefinitionIndex = 58340;

	class LOLIIJCCAHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleViewEventSender* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleViewEventSender*))((::PBYTE)hIl2Cpp + LOLIIJCCAHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLIIJCCAHH_ONTASKBEGIN_OFFSET))(this);
		}

	};
