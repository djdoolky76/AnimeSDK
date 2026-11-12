#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDDBAODJIHK_OLHHFOBCCIE_EState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FDDBAODJIHK;
class FKIODIMJPNA;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define FDDBAODJIHK_OLHHFOBCCIE_AOIHLLDPJJJ_OFFSET UNITYSDK_OFFSET(0x165EDC30)
#define FDDBAODJIHK_OLHHFOBCCIE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x165ECA10)
#define FDDBAODJIHK_OLHHFOBCCIE_CCGIPONKDNM_OFFSET UNITYSDK_OFFSET(0x165EDD70)
#define FDDBAODJIHK_OLHHFOBCCIE_CEKCMEGNCOE_OFFSET UNITYSDK_OFFSET(0x165ED350)
#define FDDBAODJIHK_OLHHFOBCCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x165EC830)
#define FDDBAODJIHK_OLHHFOBCCIE_DKPPOOIHCPB_OFFSET UNITYSDK_OFFSET(0x165EE430)
#define FDDBAODJIHK_OLHHFOBCCIE_FLBKJBNAMHN_OFFSET UNITYSDK_OFFSET(0x165EDFE0)
#define FDDBAODJIHK_OLHHFOBCCIE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x165ECC90)
#define FDDBAODJIHK_OLHHFOBCCIE_HKCMHFCBHFF_OFFSET UNITYSDK_OFFSET(0x165ED650)
#define FDDBAODJIHK_OLHHFOBCCIE_IOMDEBDGEAM_OFFSET UNITYSDK_OFFSET(0x165EC380)
#define FDDBAODJIHK_OLHHFOBCCIE_JFHJJOJEEHH_OFFSET UNITYSDK_OFFSET(0x165ED820)
#define FDDBAODJIHK_OLHHFOBCCIE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x165ECF90)
#define FDDBAODJIHK_OLHHFOBCCIE_KAEHJLODBNM_OFFSET UNITYSDK_OFFSET(0x165EE2A0)
#define FDDBAODJIHK_OLHHFOBCCIE_KLLMGPPPOCM_OFFSET UNITYSDK_OFFSET(0x165ED5A0)
#define FDDBAODJIHK_OLHHFOBCCIE_MBEJNCLPHAD_OFFSET UNITYSDK_OFFSET(0x165EDF90)
#define FDDBAODJIHK_OLHHFOBCCIE_NNIHMLCOBHJ_OFFSET UNITYSDK_OFFSET(0x165EDF20)
#define FDDBAODJIHK_OLHHFOBCCIE_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0x165ED3D0)

inline static constexpr unsigned int FDDBAODJIHK_OLHHFOBCCIE_TypeDefinitionIndex = 61479;

	class FDDBAODJIHK_OLHHFOBCCIE : public ::System::Object
	{
	public:
		::FDDBAODJIHK* CFKHNPGEAJA; // 0x10
		::FKIODIMJPNA* OIKMINGBJKF; // 0x18
		::System::Single HJBCPMBKEDG; // 0x20
		::System::Single OAAHFGIMEND; // 0x24
		::System::Int32 NCGIJDEMPFO; // 0x28
		::System::Single PHDGPNAAAEI; // 0x2C
		::UnityEngine::Vector3 CPKEFMBLLNC; // 0x30
		::UnityEngine::Quaternion GEAFDLJFBCN; // 0x3C
		::System::Single EFCKAPLHIGH; // 0x4C
		::UnityEngine::Vector3 OJAHLJGABMJ; // 0x50
		::UnityEngine::Vector3 CLIFHNODGEH; // 0x5C
		::UnityEngine::Quaternion OFJJFDOKOGM; // 0x68
		::System::Single FNMKBOOCEGN; // 0x78
		::FDDBAODJIHK_OLHHFOBCCIE_EState DLNIGFGLPLJ; // 0x7C
		::UnityEngine::Quaternion MGIEEFNABFD; // 0x80
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x90
		::UnityEngine::Vector3 EFLBANLKKAP; // 0xA0
		::System::Boolean FAGLOFCPEMG; // 0xAC
		::System::Boolean ONDIBFAPENK; // 0xAD
		::System::Boolean IEGCCKIMOOP; // 0xAE
		::System::Boolean LLNDBHENPCB; // 0xAF
		::System::Void _ctor(::FDDBAODJIHK* a1, ::FKIODIMJPNA* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::FDDBAODJIHK*, ::FKIODIMJPNA*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BKJGMFOKKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_BKJGMFOKKKN_OFFSET))(this);
		}

		::System::Void GNCJAGHKEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void IOMDEBDGEAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_IOMDEBDGEAM_OFFSET))(this);
		}

		::System::Void NNPEIBBGEFI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_NNPEIBBGEFI_OFFSET))(this, a1);
		}

		::System::Void AOIHLLDPJJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_AOIHLLDPJJJ_OFFSET))(this);
		}

		::System::Boolean CCGIPONKDNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_CCGIPONKDNM_OFFSET))(this);
		}

		::System::Void MBEJNCLPHAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_MBEJNCLPHAD_OFFSET))(this);
		}

		::System::Void CEKCMEGNCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_CEKCMEGNCOE_OFFSET))(this);
		}

		::System::Void KLLMGPPPOCM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_KLLMGPPPOCM_OFFSET))(this, a1);
		}

		::System::Void NNIHMLCOBHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_NNIHMLCOBHJ_OFFSET))(this);
		}

		::System::Void HKCMHFCBHFF(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_HKCMHFCBHFF_OFFSET))(this, a1, a2);
		}

		::System::Boolean KAEHJLODBNM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_KAEHJLODBNM_OFFSET))(this, a1);
		}

		::System::Void JFHJJOJEEHH(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_JFHJJOJEEHH_OFFSET))(this, a1, a2);
		}

		::System::Void FLBKJBNAMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_FLBKJBNAMHN_OFFSET))(this);
		}

		::System::Void DKPPOOIHCPB(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + FDDBAODJIHK_OLHHFOBCCIE_DKPPOOIHCPB_OFFSET))(this, a1, a2);
		}

	};
