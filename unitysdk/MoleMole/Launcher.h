#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Launcher_KENNJJIKDEG.h"
#include "unitysdk/NMLKPKGOIAN.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/DHOAMAAGKGN.h"

namespace MoleMole { class GameEngine; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }

#define MOLEMOLE_LAUNCHER_ABAAMNDEAPK_OFFSET UNITYSDK_OFFSET(0x1625C980)
#define MOLEMOLE_LAUNCHER_AMDBCLEEOPG_OFFSET UNITYSDK_OFFSET(0x16260770)
#define MOLEMOLE_LAUNCHER_APPLYCONFIGMODULEGMOVERRIDES_OFFSET UNITYSDK_OFFSET(0x1625B370)
#define MOLEMOLE_LAUNCHER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1625BD00)
#define MOLEMOLE_LAUNCHER_BOKAFBJDFEE_OFFSET UNITYSDK_OFFSET(0x1625D9C0)
#define MOLEMOLE_LAUNCHER_BPCPDPHMADH_OFFSET UNITYSDK_OFFSET(0x1625BC20)
#define MOLEMOLE_LAUNCHER_CFJNIOFAPKP_OFFSET UNITYSDK_OFFSET(0x162603F0)
#define MOLEMOLE_LAUNCHER_CHKKIDDGEIH_OFFSET UNITYSDK_OFFSET(0x16260230)
#define MOLEMOLE_LAUNCHER_FEECHJFINON_OFFSET UNITYSDK_OFFSET(0x1625D8B0)
#define MOLEMOLE_LAUNCHER_GET_ISSTARTGAMEPRELOADMODE_OFFSET UNITYSDK_OFFSET(0x1625B0E0)
#define MOLEMOLE_LAUNCHER_GIAPMMHNOME_OFFSET UNITYSDK_OFFSET(0x1625C740)
#define MOLEMOLE_LAUNCHER_HDJEACAHJMP_OFFSET UNITYSDK_OFFSET(0x1625D540)
#define MOLEMOLE_LAUNCHER_IINBCCCLOKL_OFFSET UNITYSDK_OFFSET(0x1625D010)
#define MOLEMOLE_LAUNCHER_IPJPMEPHBJI_OFFSET UNITYSDK_OFFSET(0x162606F0)
#define MOLEMOLE_LAUNCHER_JAIIFGAJGOF_OFFSET UNITYSDK_OFFSET(0x16260620)
#define MOLEMOLE_LAUNCHER_JEPJILEPDIN_OFFSET UNITYSDK_OFFSET(0x16260270)
#define MOLEMOLE_LAUNCHER_KLMLAJIKOGF_OFFSET UNITYSDK_OFFSET(0x1625D1D0)
#define MOLEMOLE_LAUNCHER_KLNHLCGKLKK_OFFSET UNITYSDK_OFFSET(0x1625C5D0)
#define MOLEMOLE_LAUNCHER_KPBPLOJPFMK_OFFSET UNITYSDK_OFFSET(0x1625F900)
#define MOLEMOLE_LAUNCHER_LCECOHHCBJH_OFFSET UNITYSDK_OFFSET(0x1625DBC0)
#define MOLEMOLE_LAUNCHER_LJNBPLHHFPO_OFFSET UNITYSDK_OFFSET(0x16260FC0)
#define MOLEMOLE_LAUNCHER_MBIFDPKKOBL_OFFSET UNITYSDK_OFFSET(0x1625D8F0)
#define MOLEMOLE_LAUNCHER_MJBLDABFGKK_OFFSET UNITYSDK_OFFSET(0x16260120)
#define MOLEMOLE_LAUNCHER_MLOKEBDBDCN_OFFSET UNITYSDK_OFFSET(0x1625D190)
#define MOLEMOLE_LAUNCHER_MMPPOJMLFOL_OFFSET UNITYSDK_OFFSET(0x16260370)
#define MOLEMOLE_LAUNCHER_NBEGLHDAKNL_OFFSET UNITYSDK_OFFSET(0x162601F0)
#define MOLEMOLE_LAUNCHER_NLJCMLKFBME_OFFSET UNITYSDK_OFFSET(0x162605A0)
#define MOLEMOLE_LAUNCHER_NPBBKEENHHK_OFFSET UNITYSDK_OFFSET(0x1625D220)
#define MOLEMOLE_LAUNCHER_OODCBMFBIIC_OFFSET UNITYSDK_OFFSET(0x1625F4C0)
#define MOLEMOLE_LAUNCHER_START_OFFSET UNITYSDK_OFFSET(0x1625CFB0)
#define MOLEMOLE_LAUNCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1625D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int Launcher_TypeDefinitionIndex = 40904;

	class Launcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_StatEventCategoryEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Launcher_TypeDefinitionIndex)->GetStaticField(0x14380);
		}
		static ::System::Boolean* StaticGet_StatEcsCoreEnabled()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Launcher_TypeDefinitionIndex)->GetStaticField(0x14381);
		}
		::System::Int32 GKJMJGLHIKB; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::NMLKPKGOIAN>* NIPLJIAIGLK; // 0x20
		::System::Single LLBPJKOHPNL; // 0x28
		::System::Int32 LCLCDDHNJDL; // 0x2C
		::System::Single NGMOPALHPAL; // 0x30
		::System::Int32 PNGHFGDEFHH; // 0x34
		::System::Text::StringBuilder* GNIHHJMCNLF; // 0x38
		::System::String* ICNJMGPGDCA; // 0x40
		::Il2CppArray<::System::Int32>* KKGEHCIAFBG; // 0x48
		::UnityEngine::GUIStyle* JPDEEPJNIAD; // 0x50
		::UnityEngine::GUIStyle* NPOBINFFGIM; // 0x58
		::UnityEngine::GUIStyle* BHEDJFLMLKE; // 0x60
		::UnityEngine::GUIStyle* GBOBDFEFDPN; // 0x68
		::UnityEngine::GUIStyle* DLCDFIKKLIA; // 0x70
		::UnityEngine::GUIStyle* HFKDENKJDOP; // 0x78
		::UnityEngine::GUIStyle* CLPEMCANFCB; // 0x80
		::UnityEngine::GUIStyle* OGIGHMNDPGM; // 0x88
		::UnityEngine::Vector2 OBMAJCFIHKC; // 0x90
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* ODHNKPGBPFK; // 0x98
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* LMCBCFFBBIJ; // 0xA0
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* BIJLGKAEAGH; // 0xA8
		::UnityEngine::Vector2 GBJJKEGAJEB; // 0xB0
		::Foundation::Unreal::FName PHODGPNGHEG; // 0xB8
		::Foundation::Unreal::FName PMCHODMGDPC; // 0xC0
		::MoleMole::GameEngine* DCLJFFGEBCD; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_IsStartGamePreloadMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_GET_ISSTARTGAMEPRELOADMODE_OFFSET))();
		}

		static ::System::Void ApplyConfigModuleGMOverrides()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_APPLYCONFIGMODULEGMOVERRIDES_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_START_OFFSET))(this);
		}

		::System::Void MLOKEBDBDCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_MLOKEBDBDCN_OFFSET))(this);
		}

		::System::Void KLMLAJIKOGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_KLMLAJIKOGF_OFFSET))(this);
		}

		::System::Void HDJEACAHJMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_HDJEACAHJMP_OFFSET))(this);
		}

		::System::Void FEECHJFINON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_FEECHJFINON_OFFSET))(this);
		}

		static ::System::Boolean BPCPDPHMADH(::System::String* FGDDNCDCNNO)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_BPCPDPHMADH_OFFSET))(FGDDNCDCNNO);
		}

		::System::Void MBIFDPKKOBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_MBIFDPKKOBL_OFFSET))(this);
		}

		::System::Void BOKAFBJDFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_BOKAFBJDFEE_OFFSET))(this);
		}

		::System::Void LCECOHHCBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_LCECOHHCBJH_OFFSET))(this);
		}

		::System::Void MJBLDABFGKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_MJBLDABFGKK_OFFSET))(this);
		}

		::System::Void NBEGLHDAKNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_NBEGLHDAKNL_OFFSET))(this);
		}

		::System::Void ABAAMNDEAPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_ABAAMNDEAPK_OFFSET))(this);
		}

		::System::Void KLNHLCGKLKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_KLNHLCGKLKK_OFFSET))(this);
		}

		::System::Void CHKKIDDGEIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CHKKIDDGEIH_OFFSET))(this);
		}

		::System::Void OODCBMFBIIC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Launcher_KENNJJIKDEG PHABMNEAPMM, ::DHOAMAAGKGN MAJNEEALBKL)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Launcher_KENNJJIKDEG, ::DHOAMAAGKGN))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_OODCBMFBIIC_OFFSET))(this, KECKGDFIALJ, PHABMNEAPMM, MAJNEEALBKL);
		}

		::System::Void IINBCCCLOKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_IINBCCCLOKL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* MMPPOJMLFOL()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_MMPPOJMLFOL_OFFSET))(this);
		}

		::System::Void GIAPMMHNOME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_GIAPMMHNOME_OFFSET))(this);
		}

		::System::Void KPBPLOJPFMK(::System::Single LBNAEBKEHBP, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Launcher_KENNJJIKDEG PHABMNEAPMM, ::DHOAMAAGKGN MAJNEEALBKL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Battle::Entity*, ::MoleMole::Launcher_KENNJJIKDEG, ::DHOAMAAGKGN))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_KPBPLOJPFMK_OFFSET))(this, LBNAEBKEHBP, KECKGDFIALJ, PHABMNEAPMM, MAJNEEALBKL);
		}

		::System::Void CFJNIOFAPKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_CFJNIOFAPKP_OFFSET))(this);
		}

		::System::Void NPBBKEENHHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_NPBBKEENHHK_OFFSET))(this);
		}

		::System::Void JAIIFGAJGOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_JAIIFGAJGOF_OFFSET))(this);
		}

		::System::Void JEPJILEPDIN(::System::Boolean HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_JEPJILEPDIN_OFFSET))(this, HFMHOELKCAJ);
		}

		::System::Void IPJPMEPHBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_IPJPMEPHBJI_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* NLJCMLKFBME()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_NLJCMLKFBME_OFFSET))(this);
		}

		::System::Void AMDBCLEEOPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_AMDBCLEEOPG_OFFSET))(this);
		}

		::System::Void LJNBPLHHFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LAUNCHER_LJNBPLHHFPO_OFFSET))(this);
		}
	};
}
