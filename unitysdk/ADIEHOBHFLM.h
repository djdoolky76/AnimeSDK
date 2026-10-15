#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowHintEffect; }
namespace RPG::GameCore { class TaskContext; }

#define ADIEHOBHFLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB13D750)
#define ADIEHOBHFLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB13D760)
#define ADIEHOBHFLM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB13D880)
#define ADIEHOBHFLM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB13D7B0)
#define ADIEHOBHFLM_TICK_OFFSET UNITYSDK_OFFSET(0xB13DDC0)

inline static constexpr unsigned int ADIEHOBHFLM_TypeDefinitionIndex = 53275;

	class ADIEHOBHFLM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowHintEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::UInt32 JGGDKOCIEGH; // 0x28
		::System::UInt32 PEEFHNHDBMF; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHintEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHintEffect*))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADIEHOBHFLM_TICK_OFFSET))(this, a1);
		}

	};
