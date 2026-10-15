#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class RtTriggerAbility; }
namespace RPG::GameCore { class TaskContext; }

#define EHNIPPFPOHN_CTOR_OFFSET UNITYSDK_OFFSET(0x154AC380)
#define EHNIPPFPOHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154ACEB0)
#define EHNIPPFPOHN_NAGBMNBECCI_OFFSET UNITYSDK_OFFSET(0x154ACAE0)
#define EHNIPPFPOHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x154AC440)

inline static constexpr unsigned int EHNIPPFPOHN_TypeDefinitionIndex = 53880;

	class EHNIPPFPOHN
	{
	public:
		::GELIALJDFBL* BBODFIBDPCG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtTriggerAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtTriggerAbility*))((::PBYTE)hIl2Cpp + EHNIPPFPOHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNIPPFPOHN_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* NAGBMNBECCI()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNIPPFPOHN_NAGBMNBECCI_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHNIPPFPOHN_DISPOSE_OFFSET))(this);
		}

	};
