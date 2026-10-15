#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RemoveBpFeature; }
namespace RPG::GameCore { class TaskContext; }

#define NHOCNMHKMKI_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD47C0)
#define NHOCNMHKMKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBD47F0)

inline static constexpr unsigned int NHOCNMHKMKI_TypeDefinitionIndex = 55301;

	class NHOCNMHKMKI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveBpFeature* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveBpFeature*))((::PBYTE)hIl2Cpp + NHOCNMHKMKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHOCNMHKMKI_ONTASKBEGIN_OFFSET))(this);
		}

	};
