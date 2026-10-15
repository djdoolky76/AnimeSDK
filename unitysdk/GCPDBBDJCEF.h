#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MFIMCKDKDKG;
namespace RPG::Client { class RoadRashGameModifier_Decelerate; }
namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GCPDBBDJCEF_CBCJMFAEJNB_OFFSET UNITYSDK_OFFSET(0x15984CB0)
#define GCPDBBDJCEF_CCEHFDDKECK_OFFSET UNITYSDK_OFFSET(0x159852C0)
#define GCPDBBDJCEF_CTOR_OFFSET UNITYSDK_OFFSET(0x159849F0)
#define GCPDBBDJCEF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15984A00)
#define GCPDBBDJCEF_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x15985280)
#define GCPDBBDJCEF_GGBFKKLCLCL_OFFSET UNITYSDK_OFFSET(0x15984F70)
#define GCPDBBDJCEF_GGJOFDJKPBB_OFFSET UNITYSDK_OFFSET(0x15984A50)
#define GCPDBBDJCEF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15984C10)
#define GCPDBBDJCEF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15985160)
#define GCPDBBDJCEF_PBFEEAJMMHB_OFFSET UNITYSDK_OFFSET(0x159850B0)
#define GCPDBBDJCEF_TICK_OFFSET UNITYSDK_OFFSET(0x159851C0)

inline static constexpr unsigned int GCPDBBDJCEF_TypeDefinitionIndex = 58418;

	class GCPDBBDJCEF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer* FMMKACNPLLK; // 0x20
		::RPG::Client::RoadRashGameModifier_Decelerate* OFKGLJOAMLD; // 0x28
		::System::Single BPAIDCADMDO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_Decelerate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_Decelerate*))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_GETCONFIG_OFFSET))(this);
		}

		::MFIMCKDKDKG* CCEHFDDKECK()
		{
			return ((::MFIMCKDKDKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_CCEHFDDKECK_OFFSET))(this);
		}

		::System::Void CBCJMFAEJNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_CBCJMFAEJNB_OFFSET))(this);
		}

		::System::Void GGBFKKLCLCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_GGBFKKLCLCL_OFFSET))(this);
		}

		::System::Void GGJOFDJKPBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_GGJOFDJKPBB_OFFSET))(this);
		}

		::System::Void PBFEEAJMMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPDBBDJCEF_PBFEEAJMMHB_OFFSET))(this);
		}

	};
