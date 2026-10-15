#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCameraXAxisByPlayerTargetAxis; }
namespace RPG::GameCore { class TaskContext; }

#define JNGNCEJMIAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB27FAF0)
#define JNGNCEJMIAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB27FB20)

inline static constexpr unsigned int JNGNCEJMIAO_TypeDefinitionIndex = 58531;

	class JNGNCEJMIAO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraXAxisByPlayerTargetAxis*))((::PBYTE)hIl2Cpp + JNGNCEJMIAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGNCEJMIAO_ONTASKBEGIN_OFFSET))(this);
		}

	};
