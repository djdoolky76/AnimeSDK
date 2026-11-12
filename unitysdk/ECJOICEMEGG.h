#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class LBICKDLGIGE;
class MEIDOGGDELE;
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterHudComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECJOICEMEGG_AAGCMLCENJI_OFFSET UNITYSDK_OFFSET(0x13AC4830)
#define ECJOICEMEGG_ACDDLABGMCG_OFFSET UNITYSDK_OFFSET(0x13AC3A50)
#define ECJOICEMEGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x13AC49E0)
#define ECJOICEMEGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x13AC4B80)
#define ECJOICEMEGG_BDLOJIIGLBL_OFFSET UNITYSDK_OFFSET(0x13AC47A0)
#define ECJOICEMEGG_BMBFKCEOBAP_OFFSET UNITYSDK_OFFSET(0x13AC41C0)
#define ECJOICEMEGG_BNIJMJOJMKD_OFFSET UNITYSDK_OFFSET(0x13AC48F0)
#define ECJOICEMEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x13AC4CF0)
#define ECJOICEMEGG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x13AC35E0)
#define ECJOICEMEGG_FDJCBCCJAGP_OFFSET UNITYSDK_OFFSET(0x13AC4220)
#define ECJOICEMEGG_GGAPALMDJGC_OFFSET UNITYSDK_OFFSET(0x13AC4390)
#define ECJOICEMEGG_GKLKMDEECEH_OFFSET UNITYSDK_OFFSET(0x13AC3780)
#define ECJOICEMEGG_GOABEBAFGFI_OFFSET UNITYSDK_OFFSET(0x13AC3B30)
#define ECJOICEMEGG_HMFOCPKDGHL_OFFSET UNITYSDK_OFFSET(0x13AC4000)
#define ECJOICEMEGG_HPMPDLBIJNH_OFFSET UNITYSDK_OFFSET(0x13AC4670)
#define ECJOICEMEGG_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x13AC4110)
#define ECJOICEMEGG_JDDOKAEGOPJ_OFFSET UNITYSDK_OFFSET(0x13AC3EF0)
#define ECJOICEMEGG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x13AC42E0)
#define ECJOICEMEGG_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x13AC33A0)
#define ECJOICEMEGG_LOPJNKFGGME_OFFSET UNITYSDK_OFFSET(0x13AC3BB0)
#define ECJOICEMEGG_NCMJGDHJGBB_OFFSET UNITYSDK_OFFSET(0x13AC4500)
#define ECJOICEMEGG_OJLBLLLDBLK_OFFSET UNITYSDK_OFFSET(0x13AC3680)
#define ECJOICEMEGG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x13AC32A0)
#define ECJOICEMEGG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x13AC3520)
#define ECJOICEMEGG__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x13AC3570)
#define ECJOICEMEGG__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x13AC34B0)

inline static constexpr unsigned int ECJOICEMEGG_TypeDefinitionIndex = 74385;

	class ECJOICEMEGG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::CharacterHudComponent* NFPPAFDDNCN; // 0x60
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x68
		::Il2CppArray<::System::String*>* MJLPNDIEOFL; // 0x70
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x78
		::RPG::GameCore::MonsterDataComponent* OAEGJJAHPMJ; // 0x80
		::System::Collections::Generic::List_1<::MEIDOGGDELE*>* EOOPCFACGJH; // 0x88
		::Il2CppArray<::System::String*>* OGCDHMCLDFE; // 0x90
		::System::UInt32 KGADMKHOCEF; // 0x98
		::System::Boolean MHFELBOMNMD; // 0x9C
		::System::Byte _padding0[0x3];
		::System::UInt32 HKCMCCNPAHG; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_CTOR_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ECJOICEMEGG__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG__SETUPVIEW_OFFSET))(this);
		}

		::System::Void GOABEBAFGFI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_GOABEBAFGFI_OFFSET))(this, a1);
		}

		::System::Void LACAPACNEPI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void LOPJNKFGGME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_LOPJNKFGGME_OFFSET))(this);
		}

		::System::Boolean OJLBLLLDBLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_OJLBLLLDBLK_OFFSET))(this);
		}

		::System::Void GKLKMDEECEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_GKLKMDEECEH_OFFSET))(this);
		}

		::System::Void ACDDLABGMCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_ACDDLABGMCG_OFFSET))(this);
		}

		::System::Void IAAOBCKAGPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_IAAOBCKAGPF_OFFSET))(this, a1);
		}

		::System::Void BMBFKCEOBAP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJOICEMEGG_BMBFKCEOBAP_OFFSET))(this, a1);
		}

		::System::Void FDJCBCCJAGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_FDJCBCCJAGP_OFFSET))(this);
		}

		::System::Void GGAPALMDJGC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_GGAPALMDJGC_OFFSET))(this, a1);
		}

		::System::Void NCMJGDHJGBB(::LBICKDLGIGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBICKDLGIGE*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_NCMJGDHJGBB_OFFSET))(this, a1);
		}

		::System::Void HMFOCPKDGHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_HMFOCPKDGHL_OFFSET))(this);
		}

		::System::Boolean JDDOKAEGOPJ(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_JDDOKAEGOPJ_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void HPMPDLBIJNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_HPMPDLBIJNH_OFFSET))(this, a1);
		}

		::System::Void BDLOJIIGLBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_BDLOJIIGLBL_OFFSET))(this, a1);
		}

		::System::Void AAGCMLCENJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_AAGCMLCENJI_OFFSET))(this, a1);
		}

		::System::Void BNIJMJOJMKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECJOICEMEGG_BNIJMJOJMKD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
