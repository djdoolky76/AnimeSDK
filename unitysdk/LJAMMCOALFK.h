#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AddReShaReactProp; }
namespace RPG::GameCore { class TaskContext; }

#define LJAMMCOALFK_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D94A0)
#define LJAMMCOALFK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6D94D0)

inline static constexpr unsigned int LJAMMCOALFK_TypeDefinitionIndex = 52327;

	class LJAMMCOALFK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddReShaReactProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddReShaReactProp*))((::PBYTE)hIl2Cpp + LJAMMCOALFK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAMMCOALFK_ONTASKBEGIN_OFFSET))(this);
		}

	};
