#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearFormationFaceDeltaRecord; }
namespace RPG::GameCore { class TaskContext; }

#define CKFNMDIOACH_CTOR_OFFSET UNITYSDK_OFFSET(0xD759F90)
#define CKFNMDIOACH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD759FC0)

	class CKFNMDIOACH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearFormationFaceDeltaRecord* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearFormationFaceDeltaRecord*))((::PBYTE)hIl2Cpp + CKFNMDIOACH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFNMDIOACH_ONTASKBEGIN_OFFSET))(this);
		}

	};
