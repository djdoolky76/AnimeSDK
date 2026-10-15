#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EIIJNHOOCOM;
class GPMFOHDCMFF;
class HNLOPNDDJNA;
class KCMGAIFFBPL;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define FFHFKMBCACN_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x1573D900)
#define FFHFKMBCACN_AOPNBHGEHKC_OFFSET UNITYSDK_OFFSET(0x1573D880)
#define FFHFKMBCACN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1573E040)
#define FFHFKMBCACN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1573E160)
#define FFHFKMBCACN_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0x1573DF80)
#define FFHFKMBCACN_CLLFOCIDGMP_OFFSET UNITYSDK_OFFSET(0x1573DDA0)
#define FFHFKMBCACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1573E250)
#define FFHFKMBCACN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1573D470)
#define FFHFKMBCACN_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0x1573DE90)
#define FFHFKMBCACN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1573D5E0)
#define FFHFKMBCACN_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0x1573DC60)
#define FFHFKMBCACN_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x1573D970)
#define FFHFKMBCACN_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0x1573DCC0)
#define FFHFKMBCACN_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x1573D780)
#define FFHFKMBCACN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x1573D2F0)
#define FFHFKMBCACN_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0x1573D630)
#define FFHFKMBCACN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1573D510)
#define FFHFKMBCACN_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1573DBE0)
#define FFHFKMBCACN__ONBIND_OFFSET UNITYSDK_OFFSET(0x1573D2B0)

inline static constexpr unsigned int FFHFKMBCACN_TypeDefinitionIndex = 71784;

	class FFHFKMBCACN : public ::FMPCODLIOLG
	{
	public:
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x60
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x78
		::System::String* PDBOCADIGHO; // 0x80
		::System::Boolean HAKHCANCCKK; // 0x88
		::System::Boolean GMEOOPGDMFJ; // 0x89
		::System::Byte _padding0[0x2];
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN__ONBIND_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FFHFKMBCACN_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_MIIHAJHPKAF_OFFSET))(this);
		}

		::KCMGAIFFBPL* AHMLHFNPFGJ()
		{
			return ((::KCMGAIFFBPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_ONRETURN_OFFSET))(this);
		}

		::System::Void KMBAFKAEANH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_KMBAFKAEANH_OFFSET))(this);
		}

		::System::Void LEPOBJANNPE(::EIIJNHOOCOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIIJNHOOCOM*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_LEPOBJANNPE_OFFSET))(this, a1);
		}

		::System::Void AOPNBHGEHKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_AOPNBHGEHKC_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::String* CLLFOCIDGMP(::KCMGAIFFBPL* a1)
		{
			return ((::System::String*(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_CLLFOCIDGMP_OFFSET))(this, a1);
		}

		::System::Void OIOHMAOHHDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_OIOHMAOHHDP_OFFSET))(this);
		}

		::System::Void EHDAJJMPAPB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_EHDAJJMPAPB_OFFSET))(this, a1);
		}

		::System::Void CKAKLDIKNDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_CKAKLDIKNDH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
