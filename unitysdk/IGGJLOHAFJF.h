#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvGameplayCounterRecover; }
namespace RPG::GameCore { class TaskContext; }

#define IGGJLOHAFJF_CTOR_OFFSET UNITYSDK_OFFSET(0x163FFEF0)
#define IGGJLOHAFJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163FFF20)

inline static constexpr unsigned int IGGJLOHAFJF_TypeDefinitionIndex = 52377;

	class IGGJLOHAFJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvGameplayCounterRecover* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvGameplayCounterRecover*))((::PBYTE)hIl2Cpp + IGGJLOHAFJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGGJLOHAFJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
