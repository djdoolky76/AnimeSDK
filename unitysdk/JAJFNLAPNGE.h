#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TimeRewindSetSpecularMat; }

#define JAJFNLAPNGE_CTOR_OFFSET UNITYSDK_OFFSET(0x16553FF0)
#define JAJFNLAPNGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16554020)

inline static constexpr unsigned int JAJFNLAPNGE_TypeDefinitionIndex = 53405;

	class JAJFNLAPNGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TimeRewindSetSpecularMat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TimeRewindSetSpecularMat*))((::PBYTE)hIl2Cpp + JAJFNLAPNGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFNLAPNGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
