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

#define FFHFKMBCACN_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x16659B20)
#define FFHFKMBCACN_AOPNBHGEHKC_OFFSET UNITYSDK_OFFSET(0x16659AA0)
#define FFHFKMBCACN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1665A2C0)
#define FFHFKMBCACN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1665A3E0)
#define FFHFKMBCACN_CKAKLDIKNDH_OFFSET UNITYSDK_OFFSET(0x1665A200)
#define FFHFKMBCACN_CLLFOCIDGMP_OFFSET UNITYSDK_OFFSET(0x16659FF0)
#define FFHFKMBCACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1665A4D0)
#define FFHFKMBCACN_EHDAJJMPAPB_OFFSET UNITYSDK_OFFSET(0x1665A110)
#define FFHFKMBCACN_KMBAFKAEANH_OFFSET UNITYSDK_OFFSET(0x16659EB0)
#define FFHFKMBCACN_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x16659B90)
#define FFHFKMBCACN_LEPOBJANNPE_OFFSET UNITYSDK_OFFSET(0x16659F10)
#define FFHFKMBCACN_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x166599A0)
#define FFHFKMBCACN_OIOHMAOHHDP_OFFSET UNITYSDK_OFFSET(0x16659850)
#define FFHFKMBCACN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16659730)
#define FFHFKMBCACN_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16659E20)
#define FFHFKMBCACN__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16659510)
#define FFHFKMBCACN__ONBIND_OFFSET UNITYSDK_OFFSET(0x166594D0)
#define FFHFKMBCACN__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16659690)
#define FFHFKMBCACN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16659800)

inline static constexpr unsigned int FFHFKMBCACN_TypeDefinitionIndex = 73803;

	class FFHFKMBCACN : public ::FMPCODLIOLG
	{
	public:
		::KCMGAIFFBPL* OJEDBKMMLAI; // 0x60
		::GPMFOHDCMFF* HEBFHCBPMFI; // 0x68
		::HNLOPNDDJNA* HNOHDMKFCNK; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::System::String* PDBOCADIGHO; // 0x80
		::System::Boolean GMEOOPGDMFJ; // 0x88
		::System::Boolean HAKHCANCCKK; // 0x89
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

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FFHFKMBCACN__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFHFKMBCACN_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHFKMBCACN__SETUPVIEW_OFFSET))(this);
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
