#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectFrameCaptureMatTex; }
namespace RPG::GameCore { class TaskContext; }

#define IOKBPCJKEOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB83BC40)
#define IOKBPCJKEOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB83BC70)

inline static constexpr unsigned int IOKBPCJKEOL_TypeDefinitionIndex = 56681;

	class IOKBPCJKEOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetEffectFrameCaptureMatTex* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetEffectFrameCaptureMatTex*))((::PBYTE)hIl2Cpp + IOKBPCJKEOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKBPCJKEOL_ONTASKBEGIN_OFFSET))(this);
		}

	};
