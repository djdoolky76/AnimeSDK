#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectAnimatorState; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define IFIKEFOCFHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0CD00)
#define IFIKEFOCFHP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F0CD30)
#define IFIKEFOCFHP_FLIOAFDEMCN_OFFSET UNITYSDK_OFFSET(0x15F0CEC0)
#define IFIKEFOCFHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15F0CD70)

inline static constexpr unsigned int IFIKEFOCFHP_TypeDefinitionIndex = 55488;

	class IFIKEFOCFHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectAnimatorState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectAnimatorState*))((::PBYTE)hIl2Cpp + IFIKEFOCFHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIKEFOCFHP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIKEFOCFHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void FLIOAFDEMCN(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + IFIKEFOCFHP_FLIOAFDEMCN_OFFSET))(this, a1);
		}

	};
