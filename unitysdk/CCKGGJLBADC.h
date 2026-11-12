#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ConstructBodyPart; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CCKGGJLBADC_CTOR_OFFSET UNITYSDK_OFFSET(0xD0B5060)
#define CCKGGJLBADC_IMKCBHPOBEF_OFFSET UNITYSDK_OFFSET(0xD0B5670)
#define CCKGGJLBADC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD0B5090)

inline static constexpr unsigned int CCKGGJLBADC_TypeDefinitionIndex = 56149;

	class CCKGGJLBADC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConstructBodyPart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConstructBodyPart*))((::PBYTE)hIl2Cpp + CCKGGJLBADC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKGGJLBADC_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* IMKCBHPOBEF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CCKGGJLBADC_IMKCBHPOBEF_OFFSET))(this, a1, a2);
		}

	};
