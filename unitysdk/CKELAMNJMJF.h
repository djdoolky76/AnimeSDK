#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetGraphDynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CKELAMNJMJF_CTOR_OFFSET UNITYSDK_OFFSET(0xD7587E0)
#define CKELAMNJMJF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD758810)

	class CKELAMNJMJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetGraphDynamicFloat*))((::PBYTE)hIl2Cpp + CKELAMNJMJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKELAMNJMJF_ONTASKBEGIN_OFFSET))(this);
		}

	};
