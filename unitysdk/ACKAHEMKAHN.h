#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableFieldEffectSoftZOffset; }
namespace RPG::GameCore { class TaskContext; }

#define ACKAHEMKAHN_CTOR_OFFSET UNITYSDK_OFFSET(0xB122550)
#define ACKAHEMKAHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB122580)

inline static constexpr unsigned int ACKAHEMKAHN_TypeDefinitionIndex = 55014;

	class ACKAHEMKAHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableFieldEffectSoftZOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableFieldEffectSoftZOffset*))((::PBYTE)hIl2Cpp + ACKAHEMKAHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACKAHEMKAHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
