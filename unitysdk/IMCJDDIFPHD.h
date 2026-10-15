#pragma once
#include "unitysdk/unitysdk.h"
class FOIBLOANLCJ;
namespace RPG::GameCore { class TaskContext; }

#define IMCJDDIFPHD_CTOR_OFFSET UNITYSDK_OFFSET(0x164CF530)
#define IMCJDDIFPHD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164CF560)

inline static constexpr unsigned int IMCJDDIFPHD_TypeDefinitionIndex = 56436;

	class IMCJDDIFPHD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FOIBLOANLCJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FOIBLOANLCJ*))((::PBYTE)hIl2Cpp + IMCJDDIFPHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCJDDIFPHD_ONTASKBEGIN_OFFSET))(this);
		}

	};
