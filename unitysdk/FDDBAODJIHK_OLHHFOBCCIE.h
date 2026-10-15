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

#define FDDBAODJIHK_OLHHFOBCCIE_AOIHLLDPJJJ_OFFSET UNITYSDK_OFFSET(0x156D4230)
#define FDDBAODJIHK_OLHHFOBCCIE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x156D3550)
#define FDDBAODJIHK_OLHHFOBCCIE_CCGIPONKDNM_OFFSET UNITYSDK_OFFSET(0x156D4380)
#define FDDBAODJIHK_OLHHFOBCCIE_CEKCMEGNCOE_OFFSET UNITYSDK_OFFSET(0x156D34D0)
#define FDDBAODJIHK_OLHHFOBCCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x156D32F0)
#define FDDBAODJIHK_OLHHFOBCCIE_DKPPOOIHCPB_OFFSET UNITYSDK_OFFSET(0x156D4A50)
#define FDDBAODJIHK_OLHHFOBCCIE_FLBKJBNAMHN_OFFSET UNITYSDK_OFFSET(0x156D45F0)
#define FDDBAODJIHK_OLHHFOBCCIE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x156D3690)
#define FDDBAODJIHK_OLHHFOBCCIE_HKCMHFCBHFF_OFFSET UNITYSDK_OFFSET(0x156D3AD0)
#define FDDBAODJIHK_OLHHFOBCCIE_IOMDEBDGEAM_OFFSET UNITYSDK_OFFSET(0x156D40B0)
#define FDDBAODJIHK_OLHHFOBCCIE_JFHJJOJEEHH_OFFSET UNITYSDK_OFFSET(0x156D3C90)
#define FDDBAODJIHK_OLHHFOBCCIE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156D3780)
#define FDDBAODJIHK_OLHHFOBCCIE_KAEHJLODBNM_OFFSET UNITYSDK_OFFSET(0x156D48B0)
#define FDDBAODJIHK_OLHHFOBCCIE_KLLMGPPPOCM_OFFSET UNITYSDK_OFFSET(0x156D3A20)
#define FDDBAODJIHK_OLHHFOBCCIE_MBEJNCLPHAD_OFFSET UNITYSDK_OFFSET(0x156D45A0)
#define FDDBAODJIHK_OLHHFOBCCIE_NNIHMLCOBHJ_OFFSET UNITYSDK_OFFSET(0x156D4530)
#define FDDBAODJIHK_OLHHFOBCCIE_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0x156D3850)

inline static constexpr unsigned int FDDBAODJIHK_OLHHFOBCCIE_TypeDefinitionIndex = 60195;

	class FDDBAODJIHK_OLHHFOBCCIE : public ::System::Object
	{
	public:
		::FKIODIMJPNA* OIKMINGBJKF; // 0x10
		::FDDBAODJIHK* CFKHNPGEAJA; // 0x18
		::UnityEngine::Vector3 CPKEFMBLLNC; // 0x20
		::UnityEngine::Vector3 OJAHLJGABMJ; // 0x2C
		::System::Single OAAHFGIMEND; // 0x38
		::FDDBAODJIHK_OLHHFOBCCIE_EState DLNIGFGLPLJ; // 0x3C
		::System::Single HJBCPMBKEDG; // 0x40
		::UnityEngine::Quaternion MGIEEFNABFD; // 0x44
		::UnityEngine::Vector3 CLIFHNODGEH; // 0x54
		::UnityEngine::Vector3 EFLBANLKKAP; // 0x60
		::System::Single FNMKBOOCEGN; // 0x6C
		::UnityEngine::Quaternion OFJJFDOKOGM; // 0x70
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x80
		::System::Single EFCKAPLHIGH; // 0x90
		::System::Single PHDGPNAAAEI; // 0x94
		::UnityEngine::Quaternion GEAFDLJFBCN; // 0x98
		::System::Int32 NCGIJDEMPFO; // 0xA8
		::System::Boolean LLNDBHENPCB; // 0xAC
		::System::Boolean IEGCCKIMOOP; // 0xAD
		::System::Boolean FAGLOFCPEMG; // 0xAE
		::System::Boolean ONDIBFAPENK; // 0xAF
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
