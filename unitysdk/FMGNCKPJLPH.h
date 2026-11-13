#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EnableSelectionProp; }
namespace RPG::GameCore { class TaskContext; }

#define FMGNCKPJLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x17EFBB40)
#define FMGNCKPJLPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EFBB70)

inline static constexpr unsigned int FMGNCKPJLPH_TypeDefinitionIndex = 59350;

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
