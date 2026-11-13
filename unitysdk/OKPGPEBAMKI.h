#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class JGPLDAFBAEO;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class ShowEvolveBuildCardSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }

#define OKPGPEBAMKI_APNEODBKHAP_OFFSET UNITYSDK_OFFSET(0x1789A3B0)
#define OKPGPEBAMKI_CTOR_OFFSET UNITYSDK_OFFSET(0x17899D50)
#define OKPGPEBAMKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1789A8C0)
#define OKPGPEBAMKI_FPOIHFEKBDP_OFFSET UNITYSDK_OFFSET(0x1789A560)
#define OKPGPEBAMKI_GMEMFNGIBAM_OFFSET UNITYSDK_OFFSET(0x1789A270)
#define OKPGPEBAMKI_HFFJPMPPBPJ_OFFSET UNITYSDK_OFFSET(0x1789AAD0)
#define OKPGPEBAMKI_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x1789A730)
#define OKPGPEBAMKI_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x1789AE20)
#define OKPGPEBAMKI_LELDBOKPKHE_OFFSET UNITYSDK_OFFSET(0x1789ABA0)
#define OKPGPEBAMKI_NAONDPMGIMJ_OFFSET UNITYSDK_OFFSET(0x1789AE80)
#define OKPGPEBAMKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17899D90)
#define OKPGPEBAMKI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1789A6E0)
#define OKPGPEBAMKI_TICK_OFFSET UNITYSDK_OFFSET(0x1789A910)

inline static constexpr unsigned int OKPGPEBAMKI_TypeDefinitionIndex = 59907;

	class OKPGPEBAMKI : public ::GELIALJDFBL
	{
	public:
		::Il2CppArray<::System::UInt32>* LOJIMEKGPPL; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* OFKGLJOAMLD; // 0x28
		::JGPLDAFBAEO* PNOEHMMPIKI; // 0x30
		::RPG::Client::UIController* FIIHAKDPINK; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildCardSelectInBattle*))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_TICK_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void FPOIHFEKBDP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_FPOIHFEKBDP_OFFSET))(this, a1);
		}

		::System::Void LELDBOKPKHE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_LELDBOKPKHE_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_IPKNOCPECCK_OFFSET))(this);
		}

		::System::Void NAONDPMGIMJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_NAONDPMGIMJ_OFFSET))(this, a1);
		}

		::System::Void HFFJPMPPBPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_HFFJPMPPBPJ_OFFSET))(this, a1);
		}

		::System::Void GMEMFNGIBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_GMEMFNGIBAM_OFFSET))(this);
		}

		::System::Void APNEODBKHAP(::RPG::GameCore::EvolveBuildGearManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + OKPGPEBAMKI_APNEODBKHAP_OFFSET))(this, a1);
		}

	};
