#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class OCELIFIMDFH;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BattleCardBuffSelectionDialogInitParam; }
namespace RPG::GameCore { class BattleCardSelectItemGroup; }
namespace RPG::GameCore { class ShowBattleCardBuffSelection; }
namespace RPG::GameCore { class TaskContext; }

#define EGEFHHODAAL_BFBAHFKILKO_OFFSET UNITYSDK_OFFSET(0x13A67190)
#define EGEFHHODAAL_CTOR_OFFSET UNITYSDK_OFFSET(0x13A66240)
#define EGEFHHODAAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13A66CB0)
#define EGEFHHODAAL_EJKBFNJJNAI_OFFSET UNITYSDK_OFFSET(0x13A67100)
#define EGEFHHODAAL_EPGNFOIJHAK_OFFSET UNITYSDK_OFFSET(0x13A66F20)
#define EGEFHHODAAL_HLGHBGIAGOM_OFFSET UNITYSDK_OFFSET(0x13A669B0)
#define EGEFHHODAAL_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x13A66BC0)
#define EGEFHHODAAL_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x13A66AC0)
#define EGEFHHODAAL_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x13A66A40)
#define EGEFHHODAAL_JPNODMIBIGI_OFFSET UNITYSDK_OFFSET(0x13A666D0)
#define EGEFHHODAAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A662A0)
#define EGEFHHODAAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13A66B10)
#define EGEFHHODAAL_TICK_OFFSET UNITYSDK_OFFSET(0x13A66D60)

inline static constexpr unsigned int EGEFHHODAAL_TypeDefinitionIndex = 58606;

	class EGEFHHODAAL : public ::GELIALJDFBL
	{
	public:
		::OCELIFIMDFH* CLHEBPFIGEM; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowBattleCardBuffSelection* OFKGLJOAMLD; // 0x28
		::RPG::GameCore::BattleCardBuffSelectionDialogInitParam* PNOEHMMPIKI; // 0x30
		::RPG::Client::UIController* DPIIPLPHGHF; // 0x38
		// static const ::System::String* NCKHBCKGAFP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleCardBuffSelection* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleCardBuffSelection*))((::PBYTE)hIl2Cpp + EGEFHHODAAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void JPNODMIBIGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_JPNODMIBIGI_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Int32 HLGHBGIAGOM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_HLGHBGIAGOM_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGEFHHODAAL_TICK_OFFSET))(this, a1);
		}

		::System::Void EPGNFOIJHAK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EGEFHHODAAL_EPGNFOIJHAK_OFFSET))(this, a1);
		}

		::System::Void EJKBFNJJNAI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EGEFHHODAAL_EJKBFNJJNAI_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_IPKNOCPECCK_OFFSET))(this);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGEFHHODAAL_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void BFBAHFKILKO(::RPG::GameCore::BattleCardSelectItemGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleCardSelectItemGroup*))((::PBYTE)hIl2Cpp + EGEFHHODAAL_BFBAHFKILKO_OFFSET))(this, a1);
		}

	};
