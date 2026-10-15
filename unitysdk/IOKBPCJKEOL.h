#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetEffectFrameCaptureMatTex; }
namespace RPG::GameCore { class TaskContext; }

#define IOKBPCJKEOL_CTOR_OFFSET UNITYSDK_OFFSET(0x16507350)
#define IOKBPCJKEOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16507380)

inline static constexpr unsigned int IOKBPCJKEOL_TypeDefinitionIndex = 55493;

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
