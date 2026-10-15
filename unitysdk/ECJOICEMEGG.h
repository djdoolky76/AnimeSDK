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

#define ECJOICEMEGG_AAGCMLCENJI_OFFSET UNITYSDK_OFFSET(0x12D11C30)
#define ECJOICEMEGG_ACDDLABGMCG_OFFSET UNITYSDK_OFFSET(0x12D10E60)
#define ECJOICEMEGG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x12D11DE0)
#define ECJOICEMEGG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x12D11F80)
#define ECJOICEMEGG_BDLOJIIGLBL_OFFSET UNITYSDK_OFFSET(0x12D11BA0)
#define ECJOICEMEGG_BMBFKCEOBAP_OFFSET UNITYSDK_OFFSET(0x12D115C0)
#define ECJOICEMEGG_BNIJMJOJMKD_OFFSET UNITYSDK_OFFSET(0x12D11CF0)
#define ECJOICEMEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x12D120F0)
#define ECJOICEMEGG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x12D10980)
#define ECJOICEMEGG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x12D109F0)
#define ECJOICEMEGG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x12D108C0)
#define ECJOICEMEGG_FDJCBCCJAGP_OFFSET UNITYSDK_OFFSET(0x12D11620)
#define ECJOICEMEGG_GGAPALMDJGC_OFFSET UNITYSDK_OFFSET(0x12D11790)
#define ECJOICEMEGG_GKLKMDEECEH_OFFSET UNITYSDK_OFFSET(0x12D10B90)
#define ECJOICEMEGG_GOABEBAFGFI_OFFSET UNITYSDK_OFFSET(0x12D10F40)
#define ECJOICEMEGG_HMFOCPKDGHL_OFFSET UNITYSDK_OFFSET(0x12D11400)
#define ECJOICEMEGG_HPMPDLBIJNH_OFFSET UNITYSDK_OFFSET(0x12D11A70)
#define ECJOICEMEGG_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x12D11510)
#define ECJOICEMEGG_JDDOKAEGOPJ_OFFSET UNITYSDK_OFFSET(0x12D11300)
#define ECJOICEMEGG_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x12D116E0)
#define ECJOICEMEGG_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0x12D107B0)
#define ECJOICEMEGG_LOPJNKFGGME_OFFSET UNITYSDK_OFFSET(0x12D10FC0)
#define ECJOICEMEGG_NCMJGDHJGBB_OFFSET UNITYSDK_OFFSET(0x12D11900)
#define ECJOICEMEGG_OJLBLLLDBLK_OFFSET UNITYSDK_OFFSET(0x12D10A90)
#define ECJOICEMEGG_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x12D106B0)
#define ECJOICEMEGG_ONRETURN_OFFSET UNITYSDK_OFFSET(0x12D10930)

inline static constexpr unsigned int ECJOICEMEGG_TypeDefinitionIndex = 72308;

	class ECJOICEMEGG : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::System::String*>* MJLPNDIEOFL; // 0x60
		::RPG::GameCore::MonsterDataComponent* OAEGJJAHPMJ; // 0x68
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x70
		::Il2CppArray<::System::String*>* OGCDHMCLDFE; // 0x78
		::RPG::GameCore::CharacterHudComponent* NFPPAFDDNCN; // 0x80
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x88
		::System::Collections::Generic::List_1<::MEIDOGGDELE*>* EOOPCFACGJH; // 0x90
		::System::Boolean MHFELBOMNMD; // 0x98
		::System::Byte _padding0[0x3];
		::System::UInt32 KGADMKHOCEF; // 0x9C
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + ECJOICEMEGG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJOICEMEGG_EKGCGIDIFJJ_OFFSET))(this);
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
