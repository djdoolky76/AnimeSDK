#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class ShowHalfScreenPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DCCDKNMNNMC_BJGDMMEPPBE_OFFSET UNITYSDK_OFFSET(0xE239DC0)
#define DCCDKNMNNMC_CIMHOHFDCOF_OFFSET UNITYSDK_OFFSET(0xE239F80)
#define DCCDKNMNNMC_CTOR_OFFSET UNITYSDK_OFFSET(0xE239260)
#define DCCDKNMNNMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2393D0)
#define DCCDKNMNNMC_JALHMDDKMGB_OFFSET UNITYSDK_OFFSET(0xE23A7F0)
#define DCCDKNMNNMC_JCOEJGOKOLI_OFFSET UNITYSDK_OFFSET(0xE23A2C0)
#define DCCDKNMNNMC_JDEHCFJMGJO_OFFSET UNITYSDK_OFFSET(0xE23A9E0)
#define DCCDKNMNNMC_MEBIDHDJMPM_OFFSET UNITYSDK_OFFSET(0xE2397C0)
#define DCCDKNMNNMC_MOFPJJHAEIK_OFFSET UNITYSDK_OFFSET(0xE239C10)
#define DCCDKNMNNMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE239710)
#define DCCDKNMNNMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE239A70)
#define DCCDKNMNNMC_OPMBEKMMBJG_OFFSET UNITYSDK_OFFSET(0xE23A610)
#define DCCDKNMNNMC_PAKGLIMIDBE_OFFSET UNITYSDK_OFFSET(0xE239ED0)
#define DCCDKNMNNMC_TICK_OFFSET UNITYSDK_OFFSET(0xE239AC0)
#define DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0xE23AB10)
#define DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0xE23ABD0)

inline static constexpr unsigned int DCCDKNMNNMC_TypeDefinitionIndex = 58662;

	class DCCDKNMNNMC : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowHalfScreenPage* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* JNIKOAEAEHB; // 0x30
		::RPG::GameCore::LevelGraphComponent* JPGNFKGOGNE; // 0x38
		::KFELGAIGHAP* FGFFJBEKHBO; // 0x40
		::KFELGAIGHAP* DAGAGAONAMH; // 0x48
		::KFELGAIGHAP* FHFOBMFPPAN; // 0x50
		::System::Boolean DHANBMABDHF; // 0x58
		::System::Boolean DEOPOBKEAIG; // 0x59
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHalfScreenPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHalfScreenPage*))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_TICK_OFFSET))(this, a1);
		}

		::System::Void MEBIDHDJMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_MEBIDHDJMPM_OFFSET))(this);
		}

		::System::Void BJGDMMEPPBE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_BJGDMMEPPBE_OFFSET))(this, a1);
		}

		::System::Void PAKGLIMIDBE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_PAKGLIMIDBE_OFFSET))(this, a1);
		}

		::System::Void MOFPJJHAEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_MOFPJJHAEIK_OFFSET))(this);
		}

		::System::Void JCOEJGOKOLI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_JCOEJGOKOLI_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGraphConfig* OPMBEKMMBJG()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_OPMBEKMMBJG_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphConfig* JALHMDDKMGB()
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_JALHMDDKMGB_OFFSET))(this);
		}

		::System::Void JDEHCFJMGJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_JDEHCFJMGJO_OFFSET))(this);
		}

		::System::Void CIMHOHFDCOF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCCDKNMNNMC_CIMHOHFDCOF_OFFSET))(this, a1);
		}

		::System::Void __InitControllerCallback_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_0_OFFSET))(this);
		}

		::System::Void __InitControllerCallback_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_1_OFFSET))(this);
		}

	};
