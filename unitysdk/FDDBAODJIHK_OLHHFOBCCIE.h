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

#define FDDBAODJIHK_OLHHFOBCCIE_AOIHLLDPJJJ_OFFSET UNITYSDK_OFFSET(0x156C8350)
#define FDDBAODJIHK_OLHHFOBCCIE_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x156C78C0)
#define FDDBAODJIHK_OLHHFOBCCIE_CCGIPONKDNM_OFFSET UNITYSDK_OFFSET(0x156C84A0)
#define FDDBAODJIHK_OLHHFOBCCIE_CEKCMEGNCOE_OFFSET UNITYSDK_OFFSET(0x156C8640)
#define FDDBAODJIHK_OLHHFOBCCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x156C76E0)
#define FDDBAODJIHK_OLHHFOBCCIE_DKPPOOIHCPB_OFFSET UNITYSDK_OFFSET(0x156C9250)
#define FDDBAODJIHK_OLHHFOBCCIE_FLBKJBNAMHN_OFFSET UNITYSDK_OFFSET(0x156C8780)
#define FDDBAODJIHK_OLHHFOBCCIE_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x156C7B40)
#define FDDBAODJIHK_OLHHFOBCCIE_HKCMHFCBHFF_OFFSET UNITYSDK_OFFSET(0x156C8B10)
#define FDDBAODJIHK_OLHHFOBCCIE_IOMDEBDGEAM_OFFSET UNITYSDK_OFFSET(0x156C7230)
#define FDDBAODJIHK_OLHHFOBCCIE_JFHJJOJEEHH_OFFSET UNITYSDK_OFFSET(0x156C8E50)
#define FDDBAODJIHK_OLHHFOBCCIE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156C7E10)
#define FDDBAODJIHK_OLHHFOBCCIE_KAEHJLODBNM_OFFSET UNITYSDK_OFFSET(0x156C8CC0)
#define FDDBAODJIHK_OLHHFOBCCIE_KLLMGPPPOCM_OFFSET UNITYSDK_OFFSET(0x156C8A60)
#define FDDBAODJIHK_OLHHFOBCCIE_MBEJNCLPHAD_OFFSET UNITYSDK_OFFSET(0x156C8730)
#define FDDBAODJIHK_OLHHFOBCCIE_NNIHMLCOBHJ_OFFSET UNITYSDK_OFFSET(0x156C86C0)
#define FDDBAODJIHK_OLHHFOBCCIE_NNPEIBBGEFI_OFFSET UNITYSDK_OFFSET(0x156C8180)

inline static constexpr unsigned int FDDBAODJIHK_OLHHFOBCCIE_TypeDefinitionIndex = 60195;

	class FDDBAODJIHK_OLHHFOBCCIE : public ::System::Object
	{
	public:
		::FKIODIMJPNA* OIKMINGBJKF; // 0x10
		::FDDBAODJIHK* CFKHNPGEAJA; // 0x18
		::System::Int32 NCGIJDEMPFO; // 0x20
		::System::Single HJBCPMBKEDG; // 0x24
		::UnityEngine::Quaternion MBOJLOPIEEK; // 0x28
		::UnityEngine::Vector3 EFLBANLKKAP; // 0x38
		::FDDBAODJIHK_OLHHFOBCCIE_EState DLNIGFGLPLJ; // 0x44
		::UnityEngine::Quaternion MGIEEFNABFD; // 0x48
		::UnityEngine::Vector3 OJAHLJGABMJ; // 0x58
		::UnityEngine::Quaternion GEAFDLJFBCN; // 0x64
		::System::Single PHDGPNAAAEI; // 0x74
		::System::Single OAAHFGIMEND; // 0x78
		::UnityEngine::Vector3 CPKEFMBLLNC; // 0x7C
		::System::Boolean LLNDBHENPCB; // 0x88
		::System::Boolean FAGLOFCPEMG; // 0x89
		::System::Boolean IEGCCKIMOOP; // 0x8A
		::System::Boolean ONDIBFAPENK; // 0x8B
		::System::Single EFCKAPLHIGH; // 0x8C
		::UnityEngine::Quaternion OFJJFDOKOGM; // 0x90
		::System::Single FNMKBOOCEGN; // 0xA0
		::UnityEngine::Vector3 CLIFHNODGEH; // 0xA4
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
