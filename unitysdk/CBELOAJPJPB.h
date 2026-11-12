#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class BattleSelectHouguDialogInitParam; }
namespace RPG::GameCore { class ShowArcherProjectionSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define CBELOAJPJPB_CTOR_OFFSET UNITYSDK_OFFSET(0xCE09AE0)
#define CBELOAJPJPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE0A6B0)
#define CBELOAJPJPB_FPOIHFEKBDP_OFFSET UNITYSDK_OFFSET(0xCE0A2F0)
#define CBELOAJPJPB_GMEMFNGIBAM_OFFSET UNITYSDK_OFFSET(0xCE0A230)
#define CBELOAJPJPB_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0xCE0A560)
#define CBELOAJPJPB_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0xCE0A4C0)
#define CBELOAJPJPB_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xCE0AA00)
#define CBELOAJPJPB_NAONDPMGIMJ_OFFSET UNITYSDK_OFFSET(0xCE0AA70)
#define CBELOAJPJPB_NPIJLIHFMLO_OFFSET UNITYSDK_OFFSET(0xCE0A8F0)
#define CBELOAJPJPB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCE09AF0)
#define CBELOAJPJPB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCE0A510)
#define CBELOAJPJPB_TICK_OFFSET UNITYSDK_OFFSET(0xCE0A730)

inline static constexpr unsigned int CBELOAJPJPB_TypeDefinitionIndex = 56799;

	class CBELOAJPJPB : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::LuaUIController* CBCBLEPGGHK; // 0x18
		::RPG::GameCore::ShowArcherProjectionSelectInBattle* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::RPG::GameCore::BattleSelectHouguDialogInitParam* PNOEHMMPIKI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowArcherProjectionSelectInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowArcherProjectionSelectInBattle*))((::PBYTE)hIl2Cpp + CBELOAJPJPB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBELOAJPJPB_TICK_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void FPOIHFEKBDP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CBELOAJPJPB_FPOIHFEKBDP_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_IPKNOCPECCK_OFFSET))(this);
		}

		::System::Void NAONDPMGIMJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + CBELOAJPJPB_NAONDPMGIMJ_OFFSET))(this, a1);
		}

		::System::Void NPIJLIHFMLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBELOAJPJPB_NPIJLIHFMLO_OFFSET))(this, a1);
		}

		::System::Void GMEMFNGIBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBELOAJPJPB_GMEMFNGIBAM_OFFSET))(this);
		}

	};
