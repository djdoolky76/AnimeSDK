#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class BattleSelectEvolveBuildGearDialogInitParam; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class ShowEvolveBuildGearSelectInBattle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FMDOGHHIEBB_CTOR_OFFSET UNITYSDK_OFFSET(0x17EF58F0)
#define FMDOGHHIEBB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17EF6FF0)
#define FMDOGHHIEBB_EPDIHCMIEPD_OFFSET UNITYSDK_OFFSET(0x17EF7AC0)
#define FMDOGHHIEBB_EPGNFOIJHAK_OFFSET UNITYSDK_OFFSET(0x17EF63C0)
#define FMDOGHHIEBB_GMEMFNGIBAM_OFFSET UNITYSDK_OFFSET(0x17EF5EB0)
#define FMDOGHHIEBB_IIICBNFADFG_OFFSET UNITYSDK_OFFSET(0x17EF8060)
#define FMDOGHHIEBB_IOAEBFCPHCK_OFFSET UNITYSDK_OFFSET(0x17EF6D70)
#define FMDOGHHIEBB_IPKNOCPECCK_OFFSET UNITYSDK_OFFSET(0x17EF65D0)
#define FMDOGHHIEBB_JPNODMIBIGI_OFFSET UNITYSDK_OFFSET(0x17EF6620)
#define FMDOGHHIEBB_KHMGKJLMGBO_OFFSET UNITYSDK_OFFSET(0x17EF76C0)
#define FMDOGHHIEBB_LCLHBCPKIHG_OFFSET UNITYSDK_OFFSET(0x17EF7360)
#define FMDOGHHIEBB_LHKNGJBAAIA_OFFSET UNITYSDK_OFFSET(0x17EF79D0)
#define FMDOGHHIEBB_NAONDPMGIMJ_OFFSET UNITYSDK_OFFSET(0x17EF80F0)
#define FMDOGHHIEBB_NPDCEBFDOOC_OFFSET UNITYSDK_OFFSET(0x17EF5FD0)
#define FMDOGHHIEBB_OEFIMCEIBDK_OFFSET UNITYSDK_OFFSET(0x17EF6110)
#define FMDOGHHIEBB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17EF5980)
#define FMDOGHHIEBB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17EF6CE0)
#define FMDOGHHIEBB_PKEHDBLBPOH_OFFSET UNITYSDK_OFFSET(0x17EF7ED0)
#define FMDOGHHIEBB_TICK_OFFSET UNITYSDK_OFFSET(0x17EF70E0)

inline static constexpr unsigned int FMDOGHHIEBB_TypeDefinitionIndex = 59909;

	class FMDOGHHIEBB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x18
		::RPG::Client::UIController* DPIIPLPHGHF; // 0x20
		::RPG::GameCore::BattleSelectEvolveBuildGearDialogInitParam* PNOEHMMPIKI; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x38
		::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* OFKGLJOAMLD; // 0x40
		::System::Boolean OMBBJCIPNFB; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowEvolveBuildGearSelectInBattle*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OEFIMCEIBDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_OEFIMCEIBDK_OFFSET))(this);
		}

		::System::Void JPNODMIBIGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_JPNODMIBIGI_OFFSET))(this);
		}

		::System::Void NPDCEBFDOOC(::RPG::GameCore::EvolveBuildGearManager* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearManager*, ::System::Boolean))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_NPDCEBFDOOC_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_TICK_OFFSET))(this, a1);
		}

		::System::Void EPGNFOIJHAK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_EPGNFOIJHAK_OFFSET))(this, a1);
		}

		::System::Void KHMGKJLMGBO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_KHMGKJLMGBO_OFFSET))(this, a1);
		}

		::System::Void LHKNGJBAAIA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_LHKNGJBAAIA_OFFSET))(this, a1);
		}

		::System::Void EPDIHCMIEPD(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_EPDIHCMIEPD_OFFSET))(this, a1);
		}

		::System::Void PKEHDBLBPOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_PKEHDBLBPOH_OFFSET))(this);
		}

		::System::Void IIICBNFADFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_IIICBNFADFG_OFFSET))(this, a1);
		}

		::System::Void IPKNOCPECCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_IPKNOCPECCK_OFFSET))(this);
		}

		::System::Void NAONDPMGIMJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_NAONDPMGIMJ_OFFSET))(this, a1);
		}

		::System::Void IOAEBFCPHCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_IOAEBFCPHCK_OFFSET))(this);
		}

		::System::Void LCLHBCPKIHG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_LCLHBCPKIHG_OFFSET))(this, a1);
		}

		::System::Void GMEMFNGIBAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDOGHHIEBB_GMEMFNGIBAM_OFFSET))(this);
		}

	};
