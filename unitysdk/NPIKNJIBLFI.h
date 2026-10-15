#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class HipplenGameTriggerEvent; }
namespace RPG::GameCore { class TaskContext; }

#define NPIKNJIBLFI_CTOR_OFFSET UNITYSDK_OFFSET(0xBCF7880)
#define NPIKNJIBLFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCF78B0)

inline static constexpr unsigned int NPIKNJIBLFI_TypeDefinitionIndex = 52274;

	class NPIKNJIBLFI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HipplenGameTriggerEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HipplenGameTriggerEvent*))((::PBYTE)hIl2Cpp + NPIKNJIBLFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIKNJIBLFI_ONTASKBEGIN_OFFSET))(this);
		}

	};
