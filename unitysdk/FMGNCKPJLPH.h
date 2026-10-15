#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableSelectionProp; }
namespace RPG::GameCore { class TaskContext; }

#define FMGNCKPJLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x15856440)
#define FMGNCKPJLPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15856470)

inline static constexpr unsigned int FMGNCKPJLPH_TypeDefinitionIndex = 58111;

	class FMGNCKPJLPH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableSelectionProp* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableSelectionProp*))((::PBYTE)hIl2Cpp + FMGNCKPJLPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMGNCKPJLPH_ONTASKBEGIN_OFFSET))(this);
		}

	};
