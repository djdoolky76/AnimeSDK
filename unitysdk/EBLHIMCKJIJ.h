#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EBLHIMCKJIJ_BMOIKOHDJHN;
class EDHPIGIAOLE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }

#define EBLHIMCKJIJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x12D01690)
#define EBLHIMCKJIJ_AKOIHNHCOIA_OFFSET UNITYSDK_OFFSET(0x12D01810)
#define EBLHIMCKJIJ_BMFDLLJFKML_OFFSET UNITYSDK_OFFSET(0x12D01800)
#define EBLHIMCKJIJ_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x12D01C70)
#define EBLHIMCKJIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12D00F50)
#define EBLHIMCKJIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D00FA0)
#define EBLHIMCKJIJ_EDHOFDIBAGB_OFFSET UNITYSDK_OFFSET(0x12D01F80)
#define EBLHIMCKJIJ_EMMGHDLIPOH_OFFSET UNITYSDK_OFFSET(0x12D01AD0)
#define EBLHIMCKJIJ_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0x12D02340)
#define EBLHIMCKJIJ_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x12D017E0)
#define EBLHIMCKJIJ_GLMPFMBIBHC_OFFSET UNITYSDK_OFFSET(0x12D01F00)
#define EBLHIMCKJIJ_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x12D01970)
#define EBLHIMCKJIJ_HHMFILFAMNA_OFFSET UNITYSDK_OFFSET(0x12D01B60)
#define EBLHIMCKJIJ_IOIMEFFNGDH_OFFSET UNITYSDK_OFFSET(0x12D01200)
#define EBLHIMCKJIJ_JBEAEAFCGKA_OFFSET UNITYSDK_OFFSET(0x12D017F0)
#define EBLHIMCKJIJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D01340)
#define EBLHIMCKJIJ_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x12D01D30)
#define EBLHIMCKJIJ_LCEHGAIIHIK_OFFSET UNITYSDK_OFFSET(0x12D01BF0)
#define EBLHIMCKJIJ_LGDKDHPDAEB_OFFSET UNITYSDK_OFFSET(0x12D012A0)
#define EBLHIMCKJIJ_LHCBJDHABDA_OFFSET UNITYSDK_OFFSET(0x12D02330)
#define EBLHIMCKJIJ_NPIIEBDOBAE_OFFSET UNITYSDK_OFFSET(0x12D01920)
#define EBLHIMCKJIJ_OALLKLMEOJC_OFFSET UNITYSDK_OFFSET(0x12D01820)
#define EBLHIMCKJIJ_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0x12D01880)

inline static constexpr unsigned int EBLHIMCKJIJ_TypeDefinitionIndex = 57395;

	class EBLHIMCKJIJ : public ::System::Object
	{
	public:
		::EBLHIMCKJIJ_BMOIKOHDJHN* MBOEDFCNCJF; // 0x10
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x18
		::EDHPIGIAOLE* JHFKOHNKLMH; // 0x20
		::System::String* _UniqueName_k__BackingField; // 0x28
		::RPG::GameCore::LevelCurveInstance* PNOHBBMHGLB; // 0x30
		::System::Single IIBGJJCLOJP; // 0x38
		::System::Boolean GAJPCPFKIFP; // 0x3C
		::System::Boolean OHDNPLPKAFA; // 0x3D
		::System::Boolean COLDKBOIIBD; // 0x3E
		::System::Boolean HKOPHLNFBIO; // 0x3F
		::System::Single MILHKFPIDPC; // 0x40
		::System::Single JKDHIOHLDKF; // 0x44
		::System::Single GFFCMLHMLNG; // 0x48
		::System::Void _ctor(::System::String* a1, ::EDHPIGIAOLE* a2, ::RPG::GameCore::LevelCurveInstance* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::EDHPIGIAOLE*, ::RPG::GameCore::LevelCurveInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_DISPOSE_OFFSET))(this);
		}

		::System::Void IOIMEFFNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_IOIMEFFNGDH_OFFSET))(this);
		}

		::System::Void LGDKDHPDAEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_LGDKDHPDAEB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH(::EBLHIMCKJIJ_BMOIKOHDJHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBLHIMCKJIJ_BMOIKOHDJHN*))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_ABKBOGIGAEH_OFFSET))(this, a1);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_GET_UNIQUENAME_OFFSET))(this);
		}

		::EDHPIGIAOLE* JBEAEAFCGKA()
		{
			return ((::EDHPIGIAOLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_JBEAEAFCGKA_OFFSET))(this);
		}

		::RPG::GameCore::LevelCurveInstance* BMFDLLJFKML()
		{
			return ((::RPG::GameCore::LevelCurveInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_BMFDLLJFKML_OFFSET))(this);
		}

		::System::Boolean AKOIHNHCOIA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_AKOIHNHCOIA_OFFSET))(this);
		}

		::System::Boolean OALLKLMEOJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_OALLKLMEOJC_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void NPIIEBDOBAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_NPIIEBDOBAE_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_HFKFNFKIEON_OFFSET))(this, a1);
		}

		::System::Void EMMGHDLIPOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_EMMGHDLIPOH_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHMFILFAMNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_HHMFILFAMNA_OFFSET))(this);
		}

		::System::Void LCEHGAIIHIK(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_LCEHGAIIHIK_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion CECMCADBMDE()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::System::Void GLMPFMBIBHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_GLMPFMBIBHC_OFFSET))(this);
		}

		::System::Void EDHOFDIBAGB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_EDHOFDIBAGB_OFFSET))(this, a1, a2);
		}

		::EBLHIMCKJIJ_BMOIKOHDJHN* LHCBJDHABDA()
		{
			return ((::EBLHIMCKJIJ_BMOIKOHDJHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_LHCBJDHABDA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBLHIMCKJIJ_FIIIDGBIHNB_OFFSET))(this);
		}

	};
