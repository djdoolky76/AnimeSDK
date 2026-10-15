#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/BattleItemProgressPrefabType.h"
class FJHCAKDCLEF;
class FMPCODLIOLG;
class HGCPKGBMMPH;
class HLFEDPHBLBE;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PIPLDPCCAFA_AMMHPHJEMLL_OFFSET UNITYSDK_OFFSET(0xC26F020)
#define PIPLDPCCAFA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC26F2F0)
#define PIPLDPCCAFA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC26F410)
#define PIPLDPCCAFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC26F500)
#define PIPLDPCCAFA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC26ED50)
#define PIPLDPCCAFA_FHCOJEBCNIE_OFFSET UNITYSDK_OFFSET(0xC26F1A0)
#define PIPLDPCCAFA_LODEJBKIFLJ_OFFSET UNITYSDK_OFFSET(0xC26EDC0)
#define PIPLDPCCAFA_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC26EBE0)
#define PIPLDPCCAFA_PLLAAIFHBLG_OFFSET UNITYSDK_OFFSET(0xC26EFB0)
#define PIPLDPCCAFA_PNBIAFHNCOI_OFFSET UNITYSDK_OFFSET(0xC26F0B0)

inline static constexpr unsigned int PIPLDPCCAFA_TypeDefinitionIndex = 71707;

	class PIPLDPCCAFA : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleItemProgressPrefabType, ::System::String*>* LGCHDBFCJLN; // 0x60
		::HGCPKGBMMPH* GOGLDOBLLAI; // 0x68
		::System::Action_1<::FMPCODLIOLG*>* BJENMMLEOEC; // 0x70
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void PLLAAIFHBLG(::System::Action_1<::FMPCODLIOLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::FMPCODLIOLG*>*))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_PLLAAIFHBLG_OFFSET))(this, a1);
		}

		::System::Void LODEJBKIFLJ(::FJHCAKDCLEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJHCAKDCLEF*))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_LODEJBKIFLJ_OFFSET))(this, a1);
		}

		::System::Void AMMHPHJEMLL(::HLFEDPHBLBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLFEDPHBLBE*))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_AMMHPHJEMLL_OFFSET))(this, a1);
		}

		::System::Void PNBIAFHNCOI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_PNBIAFHNCOI_OFFSET))(this, a1);
		}

		::System::Void FHCOJEBCNIE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_FHCOJEBCNIE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPLDPCCAFA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
