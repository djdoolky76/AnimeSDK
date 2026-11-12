#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ClearAllEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FAOANFFMIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1659BB60)
#define FAOANFFMIKF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1659BB90)

inline static constexpr unsigned int FAOANFFMIKF_TypeDefinitionIndex = 56132;

	class FAOANFFMIKF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ClearAllEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ClearAllEffect*))((::PBYTE)hIl2Cpp + FAOANFFMIKF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOANFFMIKF_ONTASKBEGIN_OFFSET))(this);
		}

	};
