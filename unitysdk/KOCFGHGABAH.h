#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class StopBlendShapesEmotion; }
namespace RPG::GameCore { class TaskContext; }

#define KOCFGHGABAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB589DD0)
#define KOCFGHGABAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB589E00)

inline static constexpr unsigned int KOCFGHGABAH_TypeDefinitionIndex = 55901;

	class KOCFGHGABAH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopBlendShapesEmotion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopBlendShapesEmotion*))((::PBYTE)hIl2Cpp + KOCFGHGABAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCFGHGABAH_ONTASKBEGIN_OFFSET))(this);
		}

	};
