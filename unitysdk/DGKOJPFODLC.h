#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/DamageCounterStyle.h"
class BMPCGKAFEAO;
class EJJAGEEGEKA;
class FMPCODLIOLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGKOJPFODLC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xE8458D0)
#define DGKOJPFODLC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xE8459F0)
#define DGKOJPFODLC_BIKPOJENBNO_OFFSET UNITYSDK_OFFSET(0xE845480)
#define DGKOJPFODLC_CTOR_OFFSET UNITYSDK_OFFSET(0xE845AE0)
#define DGKOJPFODLC_FOHDONOPDFK_OFFSET UNITYSDK_OFFSET(0xE845840)
#define DGKOJPFODLC_GIBOHHHJNDB_OFFSET UNITYSDK_OFFSET(0xE8449C0)
#define DGKOJPFODLC_HKBMNBNGAMD_OFFSET UNITYSDK_OFFSET(0xE844E80)
#define DGKOJPFODLC_ICPHEKKADKM_OFFSET UNITYSDK_OFFSET(0xE844EE0)
#define DGKOJPFODLC_KHDHBJNMHHK_OFFSET UNITYSDK_OFFSET(0xE845600)
#define DGKOJPFODLC_MBKKFPPGOFG_OFFSET UNITYSDK_OFFSET(0xE844DC0)
#define DGKOJPFODLC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xE844870)
#define DGKOJPFODLC_PCFCFJLHLNF_OFFSET UNITYSDK_OFFSET(0xE8455B0)
#define DGKOJPFODLC_PCJHKBGPECE_OFFSET UNITYSDK_OFFSET(0xE845710)
#define DGKOJPFODLC_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0xE844C70)
#define DGKOJPFODLC__ONBIND_OFFSET UNITYSDK_OFFSET(0xE844910)
#define DGKOJPFODLC__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xE844C00)

inline static constexpr unsigned int DGKOJPFODLC_TypeDefinitionIndex = 72122;

	class DGKOJPFODLC : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DamageCounterStyle, ::BMPCGKAFEAO*>* ONCPILAHHFG; // 0x60
		::BMPCGKAFEAO* DNDMIIGJCKO; // 0x68
		::System::Action_1<::FMPCODLIOLG*>* BJENMMLEOEC; // 0x70
		::EJJAGEEGEKA* GIEOINBJPBL; // 0x78
		::RPG::GameCore::DamageCounterStyle ECKPHKFJGMH; // 0x80
		::RPG::GameCore::DamageCounterStyle AJMGDEPHGAB; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC__ONBIND_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC__ONDISPOSE_OFFSET))(this);
		}

		::System::Void PLLAAIFHBLG(::System::Action_1<::FMPCODLIOLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FMPCODLIOLG*>*))((::PBYTE)hIl2Cpp + DGKOJPFODLC_PLLAAIFHBLG_OFFSET))(this, a1);
		}

		::System::Void HKBMNBNGAMD(::RPG::GameCore::DamageCounterStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamageCounterStyle))((::PBYTE)hIl2Cpp + DGKOJPFODLC_HKBMNBNGAMD_OFFSET))(this, a1);
		}

		::System::Void BIKPOJENBNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_BIKPOJENBNO_OFFSET))(this);
		}

		::System::Void ICPHEKKADKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_ICPHEKKADKM_OFFSET))(this);
		}

		::System::Void PCFCFJLHLNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_PCFCFJLHLNF_OFFSET))(this);
		}

		::BMPCGKAFEAO* GIBOHHHJNDB(::RPG::GameCore::DamageCounterStyle a1)
		{
			return ((::BMPCGKAFEAO*(*)(::PVOID, ::RPG::GameCore::DamageCounterStyle))((::PBYTE)hIl2Cpp + DGKOJPFODLC_GIBOHHHJNDB_OFFSET))(this, a1);
		}

		::BMPCGKAFEAO* KHDHBJNMHHK(::RPG::GameCore::DamageCounterStyle a1)
		{
			return ((::BMPCGKAFEAO*(*)(::PVOID, ::RPG::GameCore::DamageCounterStyle))((::PBYTE)hIl2Cpp + DGKOJPFODLC_KHDHBJNMHHK_OFFSET))(this, a1);
		}

		::BMPCGKAFEAO* MBKKFPPGOFG()
		{
			return ((::BMPCGKAFEAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_MBKKFPPGOFG_OFFSET))(this);
		}

		::System::Void PCJHKBGPECE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGKOJPFODLC_PCJHKBGPECE_OFFSET))(this, a1);
		}

		::System::Void FOHDONOPDFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGKOJPFODLC_FOHDONOPDFK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKOJPFODLC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
