#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TextureSheetInterruptType.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/OAOOLPCNHKA.h"

class EBCFAEHPNFE;
class EFDIGDGLMJO;
class ENGKPGFGGLM;
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DBOMGGNGKAF_AFLGFEHMALK_OFFSET UNITYSDK_OFFSET(0x13E32C80)
#define DBOMGGNGKAF_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x13E33F20)
#define DBOMGGNGKAF_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13E34F30)
#define DBOMGGNGKAF_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x13E32510)
#define DBOMGGNGKAF_DDIHOAMHEGN_OFFSET UNITYSDK_OFFSET(0x13E32A60)
#define DBOMGGNGKAF_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x13E36B70)
#define DBOMGGNGKAF_EEMKEGBNDPM_OFFSET UNITYSDK_OFFSET(0x13E356B0)
#define DBOMGGNGKAF_EIHJKHNJDCO_OFFSET UNITYSDK_OFFSET(0x13E34140)
#define DBOMGGNGKAF_FCNGIHHFJBM_OFFSET UNITYSDK_OFFSET(0x13E37980)
#define DBOMGGNGKAF_FINFBBAJMHP_OFFSET UNITYSDK_OFFSET(0x13E337A0)
#define DBOMGGNGKAF_FJNECJICKBD_OFFSET UNITYSDK_OFFSET(0x13E35E40)
#define DBOMGGNGKAF_GBPGGIMNBAG_OFFSET UNITYSDK_OFFSET(0x13E37470)
#define DBOMGGNGKAF_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13E33F60)
#define DBOMGGNGKAF_IPCOGOCNHFG_OFFSET UNITYSDK_OFFSET(0x13E33FF0)
#define DBOMGGNGKAF_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x13E35D80)
#define DBOMGGNGKAF_MINOHGLCADK_OFFSET UNITYSDK_OFFSET(0x13E32D30)
#define DBOMGGNGKAF_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x13E36AE0)
#define DBOMGGNGKAF_MPIAJLBMLDK_OFFSET UNITYSDK_OFFSET(0x13E34FC0)
#define DBOMGGNGKAF_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13E329C0)
#define DBOMGGNGKAF_OPPOBPLGGCF_OFFSET UNITYSDK_OFFSET(0x13E351A0)
#define DBOMGGNGKAF_PDENJEIKGJL_OFFSET UNITYSDK_OFFSET(0x13E36BC0)
#define DBOMGGNGKAF_PFFDOFNNGMD_OFFSET UNITYSDK_OFFSET(0x13E361D0)
#define DBOMGGNGKAF_PGNMLFNGLCE_OFFSET UNITYSDK_OFFSET(0x13E33D00)
#define DBOMGGNGKAF_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x13E33CC0)
#define DBOMGGNGKAF_UPDATE_OFFSET UNITYSDK_OFFSET(0x13E32850)
#define DBOMGGNGKAF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E32A10)

inline static constexpr unsigned int DBOMGGNGKAF_TypeDefinitionIndex = 92417;

class DBOMGGNGKAF : public ::OAOOLPCNHKA
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>** StaticGet_MBMHDLPKOBI()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::ScreenPlayer*, ::MoleMole::ScreenPlayer*>**)Il2CppClass::FromTypeDefinitionIndex(DBOMGGNGKAF_TypeDefinitionIndex)->GetStaticField(0x4CD60);
	}
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_UPDATE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_ONDESTROY_OFFSET))(this);
	}

	static ::System::Void DDIHOAMHEGN(::MoleMole::Battle::Entity* OLKHDAAGGAA, ::MoleMole::Battle::Entity* OAFLGAMBFGO, ::System::String* AEMJPNCLHDN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_DDIHOAMHEGN_OFFSET))(OLKHDAAGGAA, OAFLGAMBFGO, AEMJPNCLHDN);
	}

	static ::System::Void AFLGFEHMALK(::EBCFAEHPNFE* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::EBCFAEHPNFE*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_AFLGFEHMALK_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void FINFBBAJMHP(::EFDIGDGLMJO* KNEKFAFKOMM, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::EFDIGDGLMJO*, ::System::Single))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_FINFBBAJMHP_OFFSET))(KNEKFAFKOMM, PBCAAADNEPK);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_PMHJBNNPCLB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* PGNMLFNGLCE(::EFDIGDGLMJO* IMHNFNEMMGD, ::System::String* AEMJPNCLHDN)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*(*)(::EFDIGDGLMJO*, ::System::String*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_PGNMLFNGLCE_OFFSET))(IMHNFNEMMGD, AEMJPNCLHDN);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_APAGIJMHEAK_OFFSET))(KECKGDFIALJ);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_IFHNMAGGFAE_OFFSET))(this);
	}

	static ::System::Void IPCOGOCNHFG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AEMJPNCLHDN, ::System::String* HKEDGIJBLAF, ::MoleMole::Config::TextureSheetInterruptType OLJFKAKNMPJ, ::System::Boolean DOPBDFDAFJI, ::MoleMole::TextureSheetType OCGJJFDCOJC, ::System::Boolean APAOANJCCCE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_IPCOGOCNHFG_OFFSET))(KECKGDFIALJ, AEMJPNCLHDN, HKEDGIJBLAF, OLJFKAKNMPJ, DOPBDFDAFJI, OCGJJFDCOJC, APAOANJCCCE);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_CMFOMGGDPPA_OFFSET))(this);
	}

	static ::System::Void MPIAJLBMLDK(::MoleMole::ScreenPlayer* LPKIJGJOEHC, ::System::String* JAOIHBNAKMM, ::System::Boolean EPGLPGPOOJN, ::MoleMole::Config::TextureSheetInterruptType OLJFKAKNMPJ)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_MPIAJLBMLDK_OFFSET))(LPKIJGJOEHC, JAOIHBNAKMM, EPGLPGPOOJN, OLJFKAKNMPJ);
	}

	static ::System::Void OPPOBPLGGCF(::MoleMole::ScreenPlayer* LPKIJGJOEHC, ::MoleMole::TextureSheetType OCGJJFDCOJC, ::System::Collections::Generic::List_1<::System::String*>* PLGAEAKPBGH, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* EOLEAMNDDPB, ::MoleMole::Config::TextureSheetInterruptType OLJFKAKNMPJ, ::System::Boolean DOPBDFDAFJI, ::MoleMole::StaticSceneObjectListLoopType FPFFPFHIPPA, ::System::Boolean APAOANJCCCE)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_OPPOBPLGGCF_OFFSET))(LPKIJGJOEHC, OCGJJFDCOJC, PLGAEAKPBGH, EOLEAMNDDPB, OLJFKAKNMPJ, DOPBDFDAFJI, FPFFPFHIPPA, APAOANJCCCE);
	}

	static ::System::Void EEMKEGBNDPM(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AEMJPNCLHDN, ::System::String* HKEDGIJBLAF)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_EEMKEGBNDPM_OFFSET))(KECKGDFIALJ, AEMJPNCLHDN, HKEDGIJBLAF);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void FJNECJICKBD(::MoleMole::ScreenPlayer* LPKIJGJOEHC, ::MoleMole::TextureSheetType OCGJJFDCOJC, ::System::String* HKEDGIJBLAF, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* FHGKPKNDGBL)
	{
		return ((::System::Void(*)(::MoleMole::ScreenPlayer*, ::MoleMole::TextureSheetType, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_FJNECJICKBD_OFFSET))(LPKIJGJOEHC, OCGJJFDCOJC, HKEDGIJBLAF, FHGKPKNDGBL);
	}

	static ::System::Void PFFDOFNNGMD(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AEMJPNCLHDN, ::System::String* HKEDGIJBLAF, ::System::Int32 GLPGONDHMLI, ::System::Int32 GKGGLMCJBPA, ::System::Boolean HNHCMJHCDHL, ::System::Int32 ANIJCAIDAFI, ::System::Int32 AIDBFLMBAOG)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_PFFDOFNNGMD_OFFSET))(KECKGDFIALJ, AEMJPNCLHDN, HKEDGIJBLAF, GLPGONDHMLI, GKGGLMCJBPA, HNHCMJHCDHL, ANIJCAIDAFI, AIDBFLMBAOG);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void PDENJEIKGJL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AEMJPNCLHDN, ::System::String* FMALNDPGKBA, ::System::Boolean EPGLPGPOOJN, ::MoleMole::Config::TextureSheetInterruptType OLJFKAKNMPJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*, ::System::Boolean, ::MoleMole::Config::TextureSheetInterruptType))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_PDENJEIKGJL_OFFSET))(KECKGDFIALJ, AEMJPNCLHDN, FMALNDPGKBA, EPGLPGPOOJN, OLJFKAKNMPJ);
	}

	static ::System::Void GBPGGIMNBAG(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>* AEHHCOCLKCA, ::System::Int32 KHJFHKEFNMD, ::System::String* JAOIHBNAKMM, ::System::Boolean EPGLPGPOOJN, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Transform* PJEOEFPDPEL)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::ScreenPlayer*>*, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_GBPGGIMNBAG_OFFSET))(AEHHCOCLKCA, KHJFHKEFNMD, JAOIHBNAKMM, EPGLPGPOOJN, KECKGDFIALJ, PJEOEFPDPEL);
	}

	static ::System::Void MINOHGLCADK(::EFDIGDGLMJO* KNEKFAFKOMM, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::EFDIGDGLMJO*, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_MINOHGLCADK_OFFSET))(KNEKFAFKOMM, NPPMJEIPMFC);
	}

	static ::System::Void EIHJKHNJDCO(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AEMJPNCLHDN, ::System::Collections::Generic::List_1<::System::String*>* PLGAEAKPBGH, ::MoleMole::Config::TextureSheetInterruptType OLJFKAKNMPJ, ::System::Boolean DOPBDFDAFJI, ::MoleMole::TextureSheetType OCGJJFDCOJC, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* EEGBFPKHLNJ, ::MoleMole::StaticSceneObjectListLoopType FKHJPNBPIBM, ::System::Boolean APAOANJCCCE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Config::TextureSheetInterruptType, ::System::Boolean, ::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>*, ::MoleMole::StaticSceneObjectListLoopType, ::System::Boolean))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_EIHJKHNJDCO_OFFSET))(KECKGDFIALJ, AEMJPNCLHDN, PLGAEAKPBGH, OLJFKAKNMPJ, DOPBDFDAFJI, OCGJJFDCOJC, EEGBFPKHLNJ, FKHJPNBPIBM, APAOANJCCCE);
	}

	static ::System::Void FCNGIHHFJBM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DBOMGGNGKAF_FCNGIHHFJBM_OFFSET))(KECKGDFIALJ);
	}
};
