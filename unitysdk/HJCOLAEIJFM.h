#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMJAFIDKDKK.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class DECMMBGLMFD;
class HPHLJOEKAOE;
class OJMPCBPFHHK;
class OLMLKNCEDKN;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJCOLAEIJFM_AOCDIOBPEBF_OFFSET UNITYSDK_OFFSET(0x16C587A0)
#define HJCOLAEIJFM_BFDHGKAJKDH_OFFSET UNITYSDK_OFFSET(0x16C58D70)
#define HJCOLAEIJFM_BFLHIJIBDAK_OFFSET UNITYSDK_OFFSET(0x16C58D10)
#define HJCOLAEIJFM_CHNEJJLBIOE_OFFSET UNITYSDK_OFFSET(0x16C569C0)
#define HJCOLAEIJFM_CIDJDFLHIPK_OFFSET UNITYSDK_OFFSET(0x16C57770)
#define HJCOLAEIJFM_CMGJLMODLDG_OFFSET UNITYSDK_OFFSET(0x16C58DA0)
#define HJCOLAEIJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x16C58DD0)
#define HJCOLAEIJFM_DBPPJLAKAJN_OFFSET UNITYSDK_OFFSET(0x16C58CA0)
#define HJCOLAEIJFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C568F0)
#define HJCOLAEIJFM_EFNLAHJIADF_OFFSET UNITYSDK_OFFSET(0x16C58830)
#define HJCOLAEIJFM_ELAMIADIOAH_OFFSET UNITYSDK_OFFSET(0x16C58B00)
#define HJCOLAEIJFM_EPCEKBIOJNL_OFFSET UNITYSDK_OFFSET(0x16C58990)
#define HJCOLAEIJFM_FDPPCAAOEAH_OFFSET UNITYSDK_OFFSET(0x16C57D10)
#define HJCOLAEIJFM_FGIFIGDMAJK_OFFSET UNITYSDK_OFFSET(0x16C58710)
#define HJCOLAEIJFM_FLCIMKFFOLM_OFFSET UNITYSDK_OFFSET(0x16C58C80)
#define HJCOLAEIJFM_GHCAHDKGOFF_OFFSET UNITYSDK_OFFSET(0x16C58CE0)
#define HJCOLAEIJFM_HADDFEHNGFF_OFFSET UNITYSDK_OFFSET(0x16C572C0)
#define HJCOLAEIJFM_HKPEAOBOPGC_OFFSET UNITYSDK_OFFSET(0x16C58CC0)
#define HJCOLAEIJFM_HLIJNGBPBOL_OFFSET UNITYSDK_OFFSET(0x16C57390)
#define HJCOLAEIJFM_HLPIAOJDBCL_OFFSET UNITYSDK_OFFSET(0x16C47F90)
#define HJCOLAEIJFM_HMEJLNJFGNB_OFFSET UNITYSDK_OFFSET(0x16C56E70)
#define HJCOLAEIJFM_IBFHGNCDEIA_OFFSET UNITYSDK_OFFSET(0x16C573E0)
#define HJCOLAEIJFM_ICCOIBNOOPE_OFFSET UNITYSDK_OFFSET(0x16C58080)
#define HJCOLAEIJFM_IIPDPGFMAGF_OFFSET UNITYSDK_OFFSET(0x16C480F0)
#define HJCOLAEIJFM_INPDKBMCIIG_OFFSET UNITYSDK_OFFSET(0x16C58C70)
#define HJCOLAEIJFM_IPEKEBFHLLO_OFFSET UNITYSDK_OFFSET(0x16C58540)
#define HJCOLAEIJFM_JCFHKPNEFHL_OFFSET UNITYSDK_OFFSET(0x16C58D50)
#define HJCOLAEIJFM_KOEAICJPJEC_OFFSET UNITYSDK_OFFSET(0x16C56E20)
#define HJCOLAEIJFM_KOKKKOHFFED_OFFSET UNITYSDK_OFFSET(0x16C56B30)
#define HJCOLAEIJFM_LLDGANJLOGO_OFFSET UNITYSDK_OFFSET(0x16C58350)
#define HJCOLAEIJFM_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x16C56AE0)
#define HJCOLAEIJFM_LMKECNMGKIB_OFFSET UNITYSDK_OFFSET(0x16C575D0)
#define HJCOLAEIJFM_LPKMAHDFFMD_OFFSET UNITYSDK_OFFSET(0x16C58D30)
#define HJCOLAEIJFM_MCHBBDLBNAK_OFFSET UNITYSDK_OFFSET(0x16C57A20)
#define HJCOLAEIJFM_MJOGGBBBOFN_OFFSET UNITYSDK_OFFSET(0x16C57860)
#define HJCOLAEIJFM_NOIJKACJMBE_OFFSET UNITYSDK_OFFSET(0x16C57690)
#define HJCOLAEIJFM_OHCMFKPIKOO_OFFSET UNITYSDK_OFFSET(0x16C58230)
#define HJCOLAEIJFM_OIMDPJHKBMK_OFFSET UNITYSDK_OFFSET(0x16C57450)
#define HJCOLAEIJFM_PAHBFOHCLCE_OFFSET UNITYSDK_OFFSET(0x16C577F0)
#define HJCOLAEIJFM_PDAKHMFKPOL_OFFSET UNITYSDK_OFFSET(0x16C576F0)
#define HJCOLAEIJFM_PJMABBNHKLK_OFFSET UNITYSDK_OFFSET(0x16C57630)
#define HJCOLAEIJFM_PKDGHOOBDNJ_OFFSET UNITYSDK_OFFSET(0x16C56F60)

inline static constexpr unsigned int HJCOLAEIJFM_TypeDefinitionIndex = 58568;

	class HJCOLAEIJFM : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* ENOKJCEBDPK; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::PropButtonConfig*>* NNDEIJCGELI; // 0x20
		::OLMLKNCEDKN* OGAJCLDJHDN; // 0x28
		::OJMPCBPFHHK* DFGPFJHFHGK; // 0x30
		::HPHLJOEKAOE* JJMNEFBHEHL; // 0x38
		::DECMMBGLMFD* BGBFGGCLOEB; // 0x40
		::System::Nullable_1<::IMJAFIDKDKK> JLOAPLPHIMO; // 0x48
		::System::Byte _padding0[0x3C];
		::UnityEngine::Vector3 KMLEKAEAICC; // 0x8C
		::System::Nullable_1<::IMJAFIDKDKK> APCLFILNMBD; // 0x98
		::System::Byte _padding1[0x3C];
		::System::Boolean BAOAALCLEAD; // 0xDC
		::System::Boolean EJAFNFCGALO; // 0xDD
		::System::Byte _padding2[0x2];
		::System::Nullable_1<::IMJAFIDKDKK> BPGNHCONBCA; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::OLMLKNCEDKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLMLKNCEDKN*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void KOKKKOHFFED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_KOKKKOHFFED_OFFSET))(this, a1);
		}

		::System::Void KOEAICJPJEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_KOEAICJPJEC_OFFSET))(this);
		}

		::System::Void HMEJLNJFGNB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_HMEJLNJFGNB_OFFSET))(this, a1, a2);
		}

		::System::Void PKDGHOOBDNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_PKDGHOOBDNJ_OFFSET))(this);
		}

		::System::Void HADDFEHNGFF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_HADDFEHNGFF_OFFSET))(this, a1);
		}

		::System::Void HLIJNGBPBOL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_HLIJNGBPBOL_OFFSET))(this, a1);
		}

		::System::Void IBFHGNCDEIA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_IBFHGNCDEIA_OFFSET))(this, a1);
		}

		::System::Void OIMDPJHKBMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_OIMDPJHKBMK_OFFSET))(this);
		}

		::System::Void LMKECNMGKIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_LMKECNMGKIB_OFFSET))(this);
		}

		::System::Void PJMABBNHKLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_PJMABBNHKLK_OFFSET))(this);
		}

		::System::Void NOIJKACJMBE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_NOIJKACJMBE_OFFSET))(this, a1);
		}

		::System::Void PDAKHMFKPOL(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_PDAKHMFKPOL_OFFSET))(this, a1, a2);
		}

		::System::Void CIDJDFLHIPK(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_CIDJDFLHIPK_OFFSET))(this, a1, a2);
		}

		::System::Void PAHBFOHCLCE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_PAHBFOHCLCE_OFFSET))(this, a1);
		}

		::System::Void MJOGGBBBOFN(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_MJOGGBBBOFN_OFFSET))(this, a1);
		}

		::System::Void MCHBBDLBNAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_MCHBBDLBNAK_OFFSET))(this);
		}

		::System::Void LLDGANJLOGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_LLDGANJLOGO_OFFSET))(this);
		}

		::System::Void OHCMFKPIKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_OHCMFKPIKOO_OFFSET))(this);
		}

		::System::Void CHNEJJLBIOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_CHNEJJLBIOE_OFFSET))(this);
		}

		::System::Void FGIFIGDMAJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_FGIFIGDMAJK_OFFSET))(this, a1);
		}

		::System::Void AOCDIOBPEBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_AOCDIOBPEBF_OFFSET))(this, a1);
		}

		::System::Void FDPPCAAOEAH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_FDPPCAAOEAH_OFFSET))(this, a1);
		}

		::System::Boolean IPEKEBFHLLO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_IPEKEBFHLLO_OFFSET))(this, a1);
		}

		::System::Void ICCOIBNOOPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_ICCOIBNOOPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EFNLAHJIADF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_EFNLAHJIADF_OFFSET))(this);
		}

		::UnityEngine::Quaternion EPCEKBIOJNL()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_EPCEKBIOJNL_OFFSET))(this);
		}

		::UnityEngine::Vector3 IIPDPGFMAGF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_IIPDPGFMAGF_OFFSET))(this);
		}

		::UnityEngine::Quaternion ELAMIADIOAH()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_ELAMIADIOAH_OFFSET))(this);
		}

		::UnityEngine::Vector3 HLPIAOJDBCL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_HLPIAOJDBCL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* INPDKBMCIIG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_INPDKBMCIIG_OFFSET))(this);
		}

		::UnityEngine::Vector3 FLCIMKFFOLM()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_FLCIMKFFOLM_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* DBPPJLAKAJN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_DBPPJLAKAJN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* HKPEAOBOPGC()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_HKPEAOBOPGC_OFFSET))(this);
		}

		::UnityEngine::Vector3 GHCAHDKGOFF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_GHCAHDKGOFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BFLHIJIBDAK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_BFLHIJIBDAK_OFFSET))(this);
		}

		::System::Boolean LPKMAHDFFMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_LPKMAHDFFMD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JCFHKPNEFHL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_JCFHKPNEFHL_OFFSET))(this);
		}

		::UnityEngine::Vector3 BFDHGKAJKDH()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_BFDHGKAJKDH_OFFSET))(this);
		}

		::UnityEngine::Vector3 CMGJLMODLDG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCOLAEIJFM_CMGJLMODLDG_OFFSET))(this);
		}

	};
