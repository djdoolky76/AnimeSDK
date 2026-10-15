#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenFarmRelic; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }

#define FHEOJPAOOEP_CTOR_OFFSET UNITYSDK_OFFSET(0x157789C0)
#define FHEOJPAOOEP_JFMHMKKOBIC_OFFSET UNITYSDK_OFFSET(0x15778C50)
#define FHEOJPAOOEP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15778AD0)

inline static constexpr unsigned int FHEOJPAOOEP_TypeDefinitionIndex = 58241;

	class FHEOJPAOOEP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFarmRelic* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFarmRelic*))((::PBYTE)hIl2Cpp + FHEOJPAOOEP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEOJPAOOEP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean JFMHMKKOBIC(::RPG::GameCore::PropComponent* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32))((::PBYTE)hIl2Cpp + FHEOJPAOOEP_JFMHMKKOBIC_OFFSET))(this, a1, a2);
		}

	};
