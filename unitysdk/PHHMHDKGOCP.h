#pragma once
#include "unitysdk/unitysdk.h"
class ECLEGOCKEHD;
namespace RPG::GameCore { class TaskContext; }

#define PHHMHDKGOCP_CTOR_OFFSET UNITYSDK_OFFSET(0xC24BEA0)
#define PHHMHDKGOCP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC24BED0)

inline static constexpr unsigned int PHHMHDKGOCP_TypeDefinitionIndex = 52812;

	class PHHMHDKGOCP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ECLEGOCKEHD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ECLEGOCKEHD*))((::PBYTE)hIl2Cpp + PHHMHDKGOCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHHMHDKGOCP_ONTASKBEGIN_OFFSET))(this);
		}

	};
