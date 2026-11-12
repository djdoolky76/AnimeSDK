#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowTutorialGuide; }
namespace RPG::GameCore { class TaskContext; }

#define JEHBKLPGDDP_CTOR_OFFSET UNITYSDK_OFFSET(0xB967E20)
#define JEHBKLPGDDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB967E30)
#define JEHBKLPGDDP_ELOMKOBPDLH_OFFSET UNITYSDK_OFFSET(0xB967EC0)
#define JEHBKLPGDDP_HAOLDBDKAOK_OFFSET UNITYSDK_OFFSET(0xB968650)
#define JEHBKLPGDDP_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB968560)
#define JEHBKLPGDDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB967E70)
#define JEHBKLPGDDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9684B0)
#define JEHBKLPGDDP_TICK_OFFSET UNITYSDK_OFFSET(0xB968500)
#define JEHBKLPGDDP___SHOWTUTORIALGUIDE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB9686A0)

inline static constexpr unsigned int JEHBKLPGDDP_TypeDefinitionIndex = 59969;

	class JEHBKLPGDDP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowTutorialGuide* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::GELIALJDFBL* JLMAKNFAEBH; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuide*))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_TICK_OFFSET))(this, a1);
		}

		::System::Void ELOMKOBPDLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_ELOMKOBPDLH_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void HAOLDBDKAOK(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + JEHBKLPGDDP_HAOLDBDKAOK_OFFSET))(this, a1);
		}

		::System::Void __ShowTutorialGuide_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEHBKLPGDDP___SHOWTUTORIALGUIDE_B__5_0_OFFSET))(this);
		}

	};
