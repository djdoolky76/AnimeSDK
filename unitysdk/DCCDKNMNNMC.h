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

#define DCCDKNMNNMC_BJGDMMEPPBE_OFFSET UNITYSDK_OFFSET(0xE2325B0)
#define DCCDKNMNNMC_CIMHOHFDCOF_OFFSET UNITYSDK_OFFSET(0xE232770)
#define DCCDKNMNNMC_CTOR_OFFSET UNITYSDK_OFFSET(0xE231A50)
#define DCCDKNMNNMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE231BC0)
#define DCCDKNMNNMC_JALHMDDKMGB_OFFSET UNITYSDK_OFFSET(0xE232FE0)
#define DCCDKNMNNMC_JCOEJGOKOLI_OFFSET UNITYSDK_OFFSET(0xE232AB0)
#define DCCDKNMNNMC_JDEHCFJMGJO_OFFSET UNITYSDK_OFFSET(0xE2331D0)
#define DCCDKNMNNMC_MEBIDHDJMPM_OFFSET UNITYSDK_OFFSET(0xE231FB0)
#define DCCDKNMNNMC_MOFPJJHAEIK_OFFSET UNITYSDK_OFFSET(0xE232400)
#define DCCDKNMNNMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE231F00)
#define DCCDKNMNNMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE232260)
#define DCCDKNMNNMC_OPMBEKMMBJG_OFFSET UNITYSDK_OFFSET(0xE232E00)
#define DCCDKNMNNMC_PAKGLIMIDBE_OFFSET UNITYSDK_OFFSET(0xE2326C0)
#define DCCDKNMNNMC_TICK_OFFSET UNITYSDK_OFFSET(0xE2322B0)
#define DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0xE233300)
#define DCCDKNMNNMC___INITCONTROLLERCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0xE2333C0)

inline static constexpr unsigned int DCCDKNMNNMC_TypeDefinitionIndex = 58662;

	class DCCDKNMNNMC : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* JNIKOAEAEHB; // 0x18
		::RPG::GameCore::LevelGraphComponent* JPGNFKGOGNE; // 0x20
		::KFELGAIGHAP* FHFOBMFPPAN; // 0x28
		::KFELGAIGHAP* FGFFJBEKHBO; // 0x30
		::RPG::GameCore::ShowHalfScreenPage* OFKGLJOAMLD; // 0x38
		::KFELGAIGHAP* DAGAGAONAMH; // 0x40
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x48
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
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
