#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerConfirmDialog; }

#define FENBPFHGBBE_COPGACEDIEI_OFFSET UNITYSDK_OFFSET(0x1571D290)
#define FENBPFHGBBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1571CD20)
#define FENBPFHGBBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1571CE10)
#define FENBPFHGBBE_FLILHPKEPAI_OFFSET UNITYSDK_OFFSET(0x1571D3D0)
#define FENBPFHGBBE_HPNELCPMIBI_OFFSET UNITYSDK_OFFSET(0x1571D2F0)
#define FENBPFHGBBE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1571CF70)
#define FENBPFHGBBE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1571D1E0)
#define FENBPFHGBBE_TICK_OFFSET UNITYSDK_OFFSET(0x1571D230)

inline static constexpr unsigned int FENBPFHGBBE_TypeDefinitionIndex = 53444;

	class FENBPFHGBBE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* IFHIKLDHEKK; // 0x20
		::KFELGAIGHAP* JPEFFCLHJLO; // 0x28
		::RPG::GameCore::TriggerConfirmDialog* OFKGLJOAMLD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerConfirmDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerConfirmDialog*))((::PBYTE)hIl2Cpp + FENBPFHGBBE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBPFHGBBE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBPFHGBBE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBPFHGBBE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FENBPFHGBBE_TICK_OFFSET))(this, a1);
		}

		::System::Void COPGACEDIEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FENBPFHGBBE_COPGACEDIEI_OFFSET))(this, a1);
		}

		::System::Void HPNELCPMIBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBPFHGBBE_HPNELCPMIBI_OFFSET))(this);
		}

		::System::Void FLILHPKEPAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENBPFHGBBE_FLILHPKEPAI_OFFSET))(this);
		}

	};
