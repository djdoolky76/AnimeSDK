#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class DefineDynamicValue; }
namespace RPG::GameCore { class TaskContext; }

#define OAABKOFDOOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB514A0)
#define OAABKOFDOOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AB514D0)

inline static constexpr unsigned int OAABKOFDOOB_TypeDefinitionIndex = 56173;

	class OAABKOFDOOB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DefineDynamicValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DefineDynamicValue*))((::PBYTE)hIl2Cpp + OAABKOFDOOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAABKOFDOOB_ONTASKBEGIN_OFFSET))(this);
		}

	};
