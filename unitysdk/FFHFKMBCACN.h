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

#define FFHFKMBCACN_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x15732030)
#define FFHFKMBCACN_AOPNBHGEHKC_OFFSET UNITYSDK_OFFSET(0x15731FB0)
#define FFHFKMBCACN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x157327A0)
#define FFHFKMBCACN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157328C0)
#define FFHFKMBCACN_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0x157326E0)
#define FFHFKMBCACN_CLLFOCIDGMP_OFFSET UNITYSDK_OFFSET(0x15732500)
#define FFHFKMBCACN_CTOR_OFFSET UNITYSDK_OFFSET(0x157329B0)
#define FFHFKMBCACN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15731B90)
#define FFHFKMBCACN_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0x157325F0)
#define FFHFKMBCACN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15731D00)
#define FFHFKMBCACN_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0x157323C0)
#define FFHFKMBCACN_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x157320A0)
#define FFHFKMBCACN_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0x15732420)
#define FFHFKMBCACN_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x15731EB0)
#define FFHFKMBCACN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15731A10)
#define FFHFKMBCACN_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0x15731D50)
#define FFHFKMBCACN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15731C30)
#define FFHFKMBCACN_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15732330)
#define FFHFKMBCACN__ONBIND_OFFSET UNITYSDK_OFFSET(0x157319D0)

inline static constexpr unsigned int FFHFKMBCACN_TypeDefinitionIndex = 71783;

	class FFHFKMBCACN : public ::FMPCODLIOLG
	{
	public:
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x60
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x68
		::System::String* PDBOCADIGHO; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x80
		::RPG::GameCore::MonsterEnergyBarType MBCDGGEGPFA; // 0x88
		::System::Boolean GMEOOPGDMFJ; // 0x8C
		::System::Boolean HAKHCANCCKK; // 0x8D
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
