#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class AdventureWaitCameraLookAtTransition; }
namespace RPG::GameCore { class TaskContext; }

#define AMNGDAIMCEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1557B560)
#define AMNGDAIMCEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1557B570)
#define AMNGDAIMCEK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1557B5C0)
#define AMNGDAIMCEK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1557B7E0)
#define AMNGDAIMCEK_TICK_OFFSET UNITYSDK_OFFSET(0x1557B830)

inline static constexpr unsigned int AMNGDAIMCEK_TypeDefinitionIndex = 54835;

	class AMNGDAIMCEK : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::CameraDataAndFlags* OEPENBEJDCN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::AdventureWaitCameraLookAtTransition* OFKGLJOAMLD; // 0x28
		::System::Single IPNKKELPHFI; // 0x30
		::System::Single HEOGMNJDFAH; // 0x34
		::System::Single ENDEDGKHCCO; // 0x38
		::System::Boolean AOFHEKMDFKA; // 0x3C
		::System::Boolean JOJNLNCPKFB; // 0x3D
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureWaitCameraLookAtTransition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureWaitCameraLookAtTransition*))((::PBYTE)hIl2Cpp + AMNGDAIMCEK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGDAIMCEK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGDAIMCEK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMNGDAIMCEK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AMNGDAIMCEK_TICK_OFFSET))(this, a1);
		}

	};
