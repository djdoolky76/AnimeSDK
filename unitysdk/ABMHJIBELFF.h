#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ResetHeadLookAt; }
namespace RPG::GameCore { class TaskContext; }

#define ABMHJIBELFF_CTOR_OFFSET UNITYSDK_OFFSET(0xB109D40)
#define ABMHJIBELFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB109D70)

inline static constexpr unsigned int ABMHJIBELFF_TypeDefinitionIndex = 55884;

	class ABMHJIBELFF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ResetHeadLookAt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ResetHeadLookAt*))((::PBYTE)hIl2Cpp + ABMHJIBELFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABMHJIBELFF_ONTASKBEGIN_OFFSET))(this);
		}

	};
