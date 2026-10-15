#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class ST_Parkour_ByCompareLapCount; }
namespace RPG::GameCore { class TaskContext; }

#define AMLHLPNKANO_CTOR_OFFSET UNITYSDK_OFFSET(0x155794A0)
#define AMLHLPNKANO_EVALUATE_OFFSET UNITYSDK_OFFSET(0x155794D0)

inline static constexpr unsigned int AMLHLPNKANO_TypeDefinitionIndex = 52131;

	class AMLHLPNKANO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + AMLHLPNKANO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMLHLPNKANO_EVALUATE_OFFSET))(this);
		}

	};
