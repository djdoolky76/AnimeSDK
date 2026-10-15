#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByStatusProbability; }
namespace RPG::GameCore { class TaskContext; }

#define ADCHNJFGKNF_CTOR_OFFSET UNITYSDK_OFFSET(0xB133B60)
#define ADCHNJFGKNF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB133C40)

inline static constexpr unsigned int ADCHNJFGKNF_TypeDefinitionIndex = 55472;

	class ADCHNJFGKNF
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStatusProbability* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStatusProbability*))((::PBYTE)hIl2Cpp + ADCHNJFGKNF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADCHNJFGKNF_ONTASKBEGIN_OFFSET))(this);
		}

	};
