#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DestroyCurvePropGroupPuzzle; }
namespace RPG::GameCore { class TaskContext; }

#define CKEMABPIKFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3A670)
#define CKEMABPIKFB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AD3A6A0)

inline static constexpr unsigned int CKEMABPIKFB_TypeDefinitionIndex = 59313;

	class CKEMABPIKFB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + CKEMABPIKFB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEMABPIKFB_ONTASKBEGIN_OFFSET))(this);
		}

	};
