#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PausePropMoveTo; }
namespace RPG::GameCore { class TaskContext; }

#define COGDOCGJIOG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB01E0)
#define COGDOCGJIOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCB0210)

inline static constexpr unsigned int COGDOCGJIOG_TypeDefinitionIndex = 53060;

	class COGDOCGJIOG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PausePropMoveTo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PausePropMoveTo*))((::PBYTE)hIl2Cpp + COGDOCGJIOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGDOCGJIOG_ONTASKBEGIN_OFFSET))(this);
		}

	};
