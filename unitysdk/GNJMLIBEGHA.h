#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvCharacterFloatingState.h"
#include "unitysdk/RPG/GameCore/AdvCharacterRotationState.h"
#include "unitysdk/RPG/GameCore/AdvPauseMovementFloatingAndRotationReason.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NHFCABFGGOO.h"
class AGNFNBEGGHA;
class CMHBLDLFGNG;
class DFICPAPLHLF;
class FCPLIDBPDHJ;
class KDDMINGJDGG;
class MDJKOJJFBNA;
class MIIKADDJLGJ;
class MJEOAJOAKOD;
class OOHPGLGDBBG;
class PJKJEMANFDG;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

#define GNJMLIBEGHA_ALPBFDPOLHB_OFFSET UNITYSDK_OFFSET(0x18794F10)
#define GNJMLIBEGHA_BMDHDNGHOFA_OFFSET UNITYSDK_OFFSET(0x18795D80)
#define GNJMLIBEGHA_CKIKHHHOIKE_OFFSET UNITYSDK_OFFSET(0x18795880)
#define GNJMLIBEGHA_CTOR_OFFSET UNITYSDK_OFFSET(0x18796D80)
#define GNJMLIBEGHA_DEDHLOKIDAM_1_OFFSET UNITYSDK_OFFSET(0x18795AB0)
#define GNJMLIBEGHA_DEDHLOKIDAM_OFFSET UNITYSDK_OFFSET(0x18795A40)
#define GNJMLIBEGHA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187944B0)
#define GNJMLIBEGHA_DNPOJLDLOKB_OFFSET UNITYSDK_OFFSET(0x18794670)
#define GNJMLIBEGHA_EBFLGDGKBKM_OFFSET UNITYSDK_OFFSET(0x18795B70)
#define GNJMLIBEGHA_ENJCPHJJFEM_OFFSET UNITYSDK_OFFSET(0x18795E50)
#define GNJMLIBEGHA_GCMLONDLEHM_OFFSET UNITYSDK_OFFSET(0x18795D10)
#define GNJMLIBEGHA_GET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x18796D60)
#define GNJMLIBEGHA_GIALHACKDLO_OFFSET UNITYSDK_OFFSET(0x18795950)
#define GNJMLIBEGHA_GNBJKFCLKFN_OFFSET UNITYSDK_OFFSET(0x18795C90)
#define GNJMLIBEGHA_JPMKFEMCPGN_OFFSET UNITYSDK_OFFSET(0x18795C30)
#define GNJMLIBEGHA_KFKHFEPNKGO_OFFSET UNITYSDK_OFFSET(0x18795EF0)
#define GNJMLIBEGHA_KLEBAAEAMDF_OFFSET UNITYSDK_OFFSET(0x187960F0)
#define GNJMLIBEGHA_KPAMAMDDOKD_OFFSET UNITYSDK_OFFSET(0x18795900)
#define GNJMLIBEGHA_LCBOAIOECDA_OFFSET UNITYSDK_OFFSET(0x187954D0)
#define GNJMLIBEGHA_LLGEMDNFOIM_OFFSET UNITYSDK_OFFSET(0x18795B20)
#define GNJMLIBEGHA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x187948E0)
#define GNJMLIBEGHA_OFDKNNGFFJD_OFFSET UNITYSDK_OFFSET(0x18795BC0)
#define GNJMLIBEGHA_OLAMOFHMLCD_OFFSET UNITYSDK_OFFSET(0x18794C70)
#define GNJMLIBEGHA_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x187949D0)
#define GNJMLIBEGHA_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x18794A90)
#define GNJMLIBEGHA_PAGPEBPKABK_OFFSET UNITYSDK_OFFSET(0x18795DF0)
#define GNJMLIBEGHA_PGIBCAJPFLE_OFFSET UNITYSDK_OFFSET(0x187959A0)
#define GNJMLIBEGHA_PNNPGJDGDOC_OFFSET UNITYSDK_OFFSET(0x187945F0)
#define GNJMLIBEGHA_SET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET UNITYSDK_OFFSET(0x18796D70)
#define GNJMLIBEGHA_TICK_OFFSET UNITYSDK_OFFSET(0x18794AD0)

inline static constexpr unsigned int GNJMLIBEGHA_TypeDefinitionIndex = 58293;

	class GNJMLIBEGHA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::DFICPAPLHLF* NIOKKEKMCIO; // 0x18
		::KDDMINGJDGG* BFMHJFCOIIM; // 0x20
		::MIIKADDJLGJ* PEKKBIFCNNG; // 0x28
		::CMHBLDLFGNG* FNOJGGKLCLA; // 0x30
		::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x38
		::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* _OverrideLinearMovementAutoDirection_k__BackingField; // 0x40
		::OOHPGLGDBBG* HGLKFMLPGBF; // 0x48
		::PJKJEMANFDG* MFNDJCAENBI; // 0x50
		::AGNFNBEGGHA* IKBPPEDKIPG; // 0x58
		::RPG::GameCore::CharacterModelComponent* OFGPBOKLGJJ; // 0x60
		::RPG::GameCore::AdventureCharacterController* LDHAGDIDMKB; // 0x68
		::UnityEngine::Vector3 MPGGGIIBDHH; // 0x70
		::System::Int32 FMKNEPNJIIJ; // 0x7C
		::System::Single KNFHEIAFBNM; // 0x80
		::RPG::GameCore::AdvCharacterFloatingState AGOJMMLAAKJ; // 0x84
		::System::Single NCKNPFFCGJO; // 0x88
		::RPG::GameCore::AdvCharacterRotationState FEDMMDFKJLG; // 0x8C
		::System::Single KKFIHAJKMMI; // 0x90
		::UnityEngine::Quaternion PBDBLDEAHBH; // 0x94
		::System::Single FNPEKLJMDGB; // 0xA4
		::UnityEngine::Vector3 HIEBBIECPHE; // 0xA8
		::UnityEngine::Vector3 ENAMAOEHPMJ; // 0xB4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_TICK_OFFSET))(this, a1);
		}

		::MJEOAJOAKOD* CKIKHHHOIKE()
		{
			return ((::MJEOAJOAKOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_CKIKHHHOIKE_OFFSET))(this);
		}

		::AGNFNBEGGHA* KPAMAMDDOKD()
		{
			return ((::AGNFNBEGGHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_KPAMAMDDOKD_OFFSET))(this);
		}

		::KDDMINGJDGG* GIALHACKDLO()
		{
			return ((::KDDMINGJDGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_GIALHACKDLO_OFFSET))(this);
		}

		::CMHBLDLFGNG* PGIBCAJPFLE(::NHFCABFGGOO a1)
		{
			return ((::CMHBLDLFGNG*(*)(::PVOID, ::NHFCABFGGOO))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_PGIBCAJPFLE_OFFSET))(this, a1);
		}

		::System::Void DEDHLOKIDAM(::FCPLIDBPDHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCPLIDBPDHJ*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_DEDHLOKIDAM_OFFSET))(this, a1);
		}

		::System::Void DEDHLOKIDAM_1(::MDJKOJJFBNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJKOJJFBNA*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_DEDHLOKIDAM_1_OFFSET))(this, a1);
		}

		::System::Boolean LLGEMDNFOIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_LLGEMDNFOIM_OFFSET))(this);
		}

		::System::Void EBFLGDGKBKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_EBFLGDGKBKM_OFFSET))(this);
		}

		::System::Void OFDKNNGFFJD(::OOHPGLGDBBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOHPGLGDBBG*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_OFDKNNGFFJD_OFFSET))(this, a1);
		}

		::System::Void JPMKFEMCPGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_JPMKFEMCPGN_OFFSET))(this);
		}

		::System::Void GNBJKFCLKFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_GNBJKFCLKFN_OFFSET))(this);
		}

		::System::Void GCMLONDLEHM(::System::Boolean a1, ::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdvPauseMovementFloatingAndRotationReason))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_GCMLONDLEHM_OFFSET))(this, a1, a2);
		}

		::System::Void BMDHDNGHOFA(::MIIKADDJLGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIIKADDJLGJ*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_BMDHDNGHOFA_OFFSET))(this, a1);
		}

		::System::Void PAGPEBPKABK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_PAGPEBPKABK_OFFSET))(this);
		}

		::System::Void ENJCPHJJFEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_ENJCPHJJFEM_OFFSET))(this);
		}

		::System::Void DNPOJLDLOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_DNPOJLDLOKB_OFFSET))(this);
		}

		::System::Void PNNPGJDGDOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_PNNPGJDGDOC_OFFSET))(this);
		}

		::System::Void OLAMOFHMLCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_OLAMOFHMLCD_OFFSET))(this, a1);
		}

		::System::Void ALPBFDPOLHB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_ALPBFDPOLHB_OFFSET))(this, a1);
		}

		::System::Void LCBOAIOECDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_LCBOAIOECDA_OFFSET))(this);
		}

		::System::Void KFKHFEPNKGO(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_KFKHFEPNKGO_OFFSET))(this, a1, a2);
		}

		::System::Boolean KLEBAAEAMDF(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_KLEBAAEAMDF_OFFSET))(this, a1);
		}

		::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* get_OverrideLinearMovementAutoDirection()
		{
			return ((::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_GET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET))(this);
		}

		::System::Void set_OverrideLinearMovementAutoDirection(::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_4<::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + GNJMLIBEGHA_SET_OVERRIDELINEARMOVEMENTAUTODIRECTION_OFFSET))(this, a1);
		}

	};
