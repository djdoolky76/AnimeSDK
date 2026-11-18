#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/OJEABMGNEDJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FOGFEFIGGLH_NEPCJGHJIMG.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Octree/BoundingBox.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CHDFDOGABHI;
class ELEIPGBELLG;
class GEIHCPAOKKK;
class HJDGNDLNJFB;
class IAAHLMADFNL;
class NIDMHPHHDLI;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define FOGFEFIGGLH_BIBGEMDIOMN_1_OFFSET UNITYSDK_OFFSET(0x15E76670)
#define FOGFEFIGGLH_BIBGEMDIOMN_OFFSET UNITYSDK_OFFSET(0x15E77AF0)
#define FOGFEFIGGLH_BNKEAIOGDCO_OFFSET UNITYSDK_OFFSET(0x15E782F0)
#define FOGFEFIGGLH_CFKJJOPHGGK_OFFSET UNITYSDK_OFFSET(0x15E76C80)
#define FOGFEFIGGLH_EGGBAOAEIAD_OFFSET UNITYSDK_OFFSET(0x15E76A20)
#define FOGFEFIGGLH_FIEHMJFAGLG_OFFSET UNITYSDK_OFFSET(0x15E791F0)
#define FOGFEFIGGLH_GELOLPMGMLL_OFFSET UNITYSDK_OFFSET(0x15E75E90)
#define FOGFEFIGGLH_IAAOFDDMBJI_OFFSET UNITYSDK_OFFSET(0x15E772D0)
#define FOGFEFIGGLH_JCMMDIOBPGC_1_OFFSET UNITYSDK_OFFSET(0x15E783C0)
#define FOGFEFIGGLH_JCMMDIOBPGC_OFFSET UNITYSDK_OFFSET(0x15E76E10)
#define FOGFEFIGGLH_JDLNPKFNMNK_OFFSET UNITYSDK_OFFSET(0x15E77E20)
#define FOGFEFIGGLH_JFHKIMELOIG_1_OFFSET UNITYSDK_OFFSET(0x15E78460)
#define FOGFEFIGGLH_JFHKIMELOIG_OFFSET UNITYSDK_OFFSET(0x15E76B60)
#define FOGFEFIGGLH_JHJGJCMNMIN_OFFSET UNITYSDK_OFFSET(0x15E760A0)
#define FOGFEFIGGLH_JMDMMOFODBL_OFFSET UNITYSDK_OFFSET(0x15E768A0)
#define FOGFEFIGGLH_KAPJNOFEBCB_OFFSET UNITYSDK_OFFSET(0x15E76EB0)
#define FOGFEFIGGLH_KIPNPIFJDAC_OFFSET UNITYSDK_OFFSET(0x15E78780)
#define FOGFEFIGGLH_LEOOGBEBMPJ_OFFSET UNITYSDK_OFFSET(0x15E76200)
#define FOGFEFIGGLH_OECCIFIOGLJ_OFFSET UNITYSDK_OFFSET(0x15E78580)
#define FOGFEFIGGLH_PCEOJNBDJNJ_OFFSET UNITYSDK_OFFSET(0x15E765A0)
#define FOGFEFIGGLH__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E75E60)

inline static constexpr unsigned int FOGFEFIGGLH_TypeDefinitionIndex = 89987;

class FOGFEFIGGLH : public ::System::Object
{
public:
	static ::CHDFDOGABHI** StaticGet_GJHNMHLFJHB()
	{
		return (::CHDFDOGABHI**)Il2CppClass::FromTypeDefinitionIndex(FOGFEFIGGLH_TypeDefinitionIndex)->GetStaticField(0x442A0);
	}
	static ::HJDGNDLNJFB** StaticGet_EOGJNOFDDAJ()
	{
		return (::HJDGNDLNJFB**)Il2CppClass::FromTypeDefinitionIndex(FOGFEFIGGLH_TypeDefinitionIndex)->GetStaticField(0x442A8);
	}
	static ::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>* StaticGet_CBAFKDAAJLC()
	{
		return (::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>*)Il2CppClass::FromTypeDefinitionIndex(FOGFEFIGGLH_TypeDefinitionIndex)->GetStaticField(0x442B0);
	}
	// static const ::System::Int32 BDJLIGDPPGN = 0x1E; // 0x0
	// static const ::System::Int32 FMLBIHNEPGE = -0x1; // 0x0
	// static const ::System::Single ANIFJGJHHPL; // 0x0
	// static const ::System::Single LDIHGLCKBCH; // 0x0
	// static const ::System::Single KCDBPKOHBLK; // 0x0
	// static const ::System::Single JEJDAIJKBCM; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOGFEFIGGLH__CCTOR_OFFSET))();
	}

	static ::System::Void GELOLPMGMLL(::MoleMole::Battle::Entity* KECKGDFIALJ, ::GEIHCPAOKKK* OHPJHPEOFLD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_GELOLPMGMLL_OFFSET))(KECKGDFIALJ, OHPJHPEOFLD);
	}

	static ::OJEABMGNEDJ JHJGJCMNMIN(::System::UInt32 KMMGKJPAOMF, ::System::String* MKPIFJCKGND)
	{
		return ((::OJEABMGNEDJ(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JHJGJCMNMIN_OFFSET))(KMMGKJPAOMF, MKPIFJCKGND);
	}

	static ::System::Boolean LEOOGBEBMPJ(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 CFJFMMGPGKE, ::CHDFDOGABHI* IHPHGMJDGLN, ::System::Single GOPNLEEDGKL)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::CHDFDOGABHI*, ::System::Single))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_LEOOGBEBMPJ_OFFSET))(CKPGOKHECCH, CFJFMMGPGKE, IHPHGMJDGLN, GOPNLEEDGKL);
	}

	static ::System::Boolean PCEOJNBDJNJ(::ELEIPGBELLG* GBELIHABEDH, ::MoleMole::EntityHandle PLBHNGELOBF, ::System::Boolean& MDKOPOMDPBJ)
	{
		return ((::System::Boolean(*)(::ELEIPGBELLG*, ::MoleMole::EntityHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_PCEOJNBDJNJ_OFFSET))(GBELIHABEDH, PLBHNGELOBF, MDKOPOMDPBJ);
	}

	static ::System::Void JMDMMOFODBL(::System::UInt32 KMMGKJPAOMF, ::System::String* MBLOLPGDHEM)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JMDMMOFODBL_OFFSET))(KMMGKJPAOMF, MBLOLPGDHEM);
	}

	static ::System::Void EGGBAOAEIAD(::NIDMHPHHDLI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::NIDMHPHHDLI*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_EGGBAOAEIAD_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void JFHKIMELOIG(::ELEIPGBELLG* MFDKGMLKHGM, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::ELEIPGBELLG*, ::System::Single))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JFHKIMELOIG_OFFSET))(MFDKGMLKHGM, MDPPNMIPDMP);
	}

	static ::System::Boolean CFKJJOPHGGK(::MoleMole::EntityHandle IHPHGMJDGLN, ::FOGFEFIGGLH_NEPCJGHJIMG& param_1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::FOGFEFIGGLH_NEPCJGHJIMG&))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_CFKJJOPHGGK_OFFSET))(IHPHGMJDGLN, param_1);
	}

	static ::System::Void JCMMDIOBPGC(::NIDMHPHHDLI* MFDKGMLKHGM)
	{
		return ((::System::Void(*)(::NIDMHPHHDLI*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JCMMDIOBPGC_OFFSET))(MFDKGMLKHGM);
	}

	static ::System::Boolean KAPJNOFEBCB(::MoleMole::EntityHandle KECKGDFIALJ, ::MoleMole::EntityHandle PLBHNGELOBF, ::System::String* MCOBELKKCOM, ::System::Boolean& MDKOPOMDPBJ)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::MoleMole::EntityHandle, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_KAPJNOFEBCB_OFFSET))(KECKGDFIALJ, PLBHNGELOBF, MCOBELKKCOM, MDKOPOMDPBJ);
	}

	static ::IAAHLMADFNL* IAAOFDDMBJI(::Foundation::AssetPath CJNOGCNJFFA, ::System::String* ALFCJABDJCP, ::System::Boolean GMAAEMLFFIA, ::Foundation::Geometry::Segment2D KADDPFPFMKL, ::System::Single OBIOOKIMMLB, ::System::Single KKAMDFNMMJH)
	{
		return ((::IAAHLMADFNL*(*)(::Foundation::AssetPath, ::System::String*, ::System::Boolean, ::Foundation::Geometry::Segment2D, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_IAAOFDDMBJI_OFFSET))(CJNOGCNJFFA, ALFCJABDJCP, GMAAEMLFFIA, KADDPFPFMKL, OBIOOKIMMLB, KKAMDFNMMJH);
	}

	static ::System::Boolean BIBGEMDIOMN(::MoleMole::EntityHandle KECKGDFIALJ, ::OJEABMGNEDJ KKMENMCMMBN, ::System::Boolean& MDKOPOMDPBJ)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::OJEABMGNEDJ, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_BIBGEMDIOMN_OFFSET))(KECKGDFIALJ, KKMENMCMMBN, MDKOPOMDPBJ);
	}

	static ::UnityEngine::Vector3 JDLNPKFNMNK(::System::Int32 BFBCMALKEIE, ::UnityEngine::Vector3 HKDBAPKLJPL)
	{
		return ((::UnityEngine::Vector3(*)(::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JDLNPKFNMNK_OFFSET))(BFBCMALKEIE, HKDBAPKLJPL);
	}

	static ::HJDGNDLNJFB* BNKEAIOGDCO()
	{
		return ((::HJDGNDLNJFB*(*)())((::PBYTE)hIl2Cpp + FOGFEFIGGLH_BNKEAIOGDCO_OFFSET))();
	}

	static ::System::Void JCMMDIOBPGC_1(::ELEIPGBELLG* MFDKGMLKHGM)
	{
		return ((::System::Void(*)(::ELEIPGBELLG*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JCMMDIOBPGC_1_OFFSET))(MFDKGMLKHGM);
	}

	static ::System::Void JFHKIMELOIG_1(::NIDMHPHHDLI* MFDKGMLKHGM, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::NIDMHPHHDLI*, ::System::Single))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_JFHKIMELOIG_1_OFFSET))(MFDKGMLKHGM, MDPPNMIPDMP);
	}

	static ::Octree::BoundingBox OECCIFIOGLJ(::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::Octree::BoundingBox(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_OECCIFIOGLJ_OFFSET))(GOFCNJELMHH);
	}

	static ::System::Boolean BIBGEMDIOMN_1(::MoleMole::EntityHandle KECKGDFIALJ, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*> MCOHLHMKLIP, ::System::Boolean& MDKOPOMDPBJ)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*>, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_BIBGEMDIOMN_1_OFFSET))(KECKGDFIALJ, MCOHLHMKLIP, MDKOPOMDPBJ);
	}

	static ::System::Void KIPNPIFJDAC(::NIDMHPHHDLI* GBELIHABEDH)
	{
		return ((::System::Void(*)(::NIDMHPHHDLI*))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_KIPNPIFJDAC_OFFSET))(GBELIHABEDH);
	}

	static ::System::Boolean FIEHMJFAGLG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::CHDFDOGABHI* IHPHGMJDGLN, ::System::Single GOPNLEEDGKL)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::CHDFDOGABHI*, ::System::Single))((::PBYTE)hIl2Cpp + FOGFEFIGGLH_FIEHMJFAGLG_OFFSET))(KECKGDFIALJ, IHPHGMJDGLN, GOPNLEEDGKL);
	}
};
