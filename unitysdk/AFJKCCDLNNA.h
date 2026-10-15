#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class PuzzleSetAnimatorParams; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define AFJKCCDLNNA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF0E110)
#define AFJKCCDLNNA_JDKDPMGIABH_OFFSET UNITYSDK_OFFSET(0xCF0E420)
#define AFJKCCDLNNA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF0E140)

inline static constexpr unsigned int AFJKCCDLNNA_TypeDefinitionIndex = 53189;

	class AFJKCCDLNNA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PuzzleSetAnimatorParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PuzzleSetAnimatorParams*))((::PBYTE)hIl2Cpp + AFJKCCDLNNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJKCCDLNNA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JDKDPMGIABH(::RPG::Client::MockAnimator* a1, ::RPG::GameCore::AnimatorParameterType a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*, ::RPG::GameCore::AnimatorParameterType, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AFJKCCDLNNA_JDKDPMGIABH_OFFSET))(this, a1, a2, a3, a4);
		}

	};
