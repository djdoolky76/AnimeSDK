#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCustomLocationConfig; }
namespace RPG::GameCore { class TaskContext; }

#define FMDFGHHPBHF_CTOR_OFFSET UNITYSDK_OFFSET(0x17EF4170)
#define FMDFGHHPBHF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EF41A0)

inline static constexpr unsigned int FMDFGHHPBHF_TypeDefinitionIndex = 57619;

	class FMDFGHHPBHF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCustomLocationConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCustomLocationConfig*))((::PBYTE)hIl2Cpp + FMDFGHHPBHF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDFGHHPBHF_ONTASKBEGIN_OFFSET))(this);
		}

	};
