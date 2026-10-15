#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetForceStreamingThisFrame; }
namespace RPG::GameCore { class TaskContext; }

#define KKEEIPACPCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B43C0)
#define KKEEIPACPCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4B43F0)

inline static constexpr unsigned int KKEEIPACPCC_TypeDefinitionIndex = 55895;

	class KKEEIPACPCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetForceStreamingThisFrame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetForceStreamingThisFrame*))((::PBYTE)hIl2Cpp + KKEEIPACPCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEEIPACPCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
