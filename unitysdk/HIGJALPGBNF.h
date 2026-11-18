#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPIIHGLGNH_1.h"
#include "unitysdk/HEGAIBENLJF.h"
#include "unitysdk/LJJGNCGBFNE.h"
#include "unitysdk/PCNOJLGFMPO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DJDODNGGEJI.h"
#include "unitysdk/LJPBFGAJPLK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"

class LOMGLJPKHAF;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Config { class ConfigZipLine_ConfigEnterPointSelection; }
namespace MoleMole::Config { class ConfigZipLine_ConfigPreEnterPointSelection; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIGJALPGBNF_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x11025140)
#define HIGJALPGBNF_CKEKHIKFNIA_OFFSET UNITYSDK_OFFSET(0x1101F530)
#define HIGJALPGBNF_GHFMAPIAJMN_OFFSET UNITYSDK_OFFSET(0x1101DFF0)
#define HIGJALPGBNF_IMLOBAFIMJH_1_OFFSET UNITYSDK_OFFSET(0x1101EC50)
#define HIGJALPGBNF_IMLOBAFIMJH_OFFSET UNITYSDK_OFFSET(0x1101EB20)
#define HIGJALPGBNF_JGEBBHKIHLJ_OFFSET UNITYSDK_OFFSET(0x1101F670)
#define HIGJALPGBNF_JPGJFIHOHIP_OFFSET UNITYSDK_OFFSET(0x1101E4A0)
#define HIGJALPGBNF_KEKGKIGJDFM_OFFSET UNITYSDK_OFFSET(0x11024C20)
#define HIGJALPGBNF_KMNBJJIKCDJ_OFFSET UNITYSDK_OFFSET(0x1101DB90)
#define HIGJALPGBNF_LCEAENILLHP_OFFSET UNITYSDK_OFFSET(0x1101E490)
#define HIGJALPGBNF_LCJEBHCPFKG_OFFSET UNITYSDK_OFFSET(0x11025000)
#define HIGJALPGBNF_MAPNMBDKMGC_OFFSET UNITYSDK_OFFSET(0x1101E630)
#define HIGJALPGBNF_MFBICIJFJON_OFFSET UNITYSDK_OFFSET(0x1101DEE0)
#define HIGJALPGBNF_OGHJIBPLIOI_OFFSET UNITYSDK_OFFSET(0x1101EFD0)
#define HIGJALPGBNF_OOLIALCBPMH_OFFSET UNITYSDK_OFFSET(0x1101F3A0)
#define HIGJALPGBNF_PGMPJLHDLKB_OFFSET UNITYSDK_OFFSET(0x1101E770)
#define HIGJALPGBNF_PLLPHPAAIBO_OFFSET UNITYSDK_OFFSET(0x110251B0)
#define HIGJALPGBNF_PNCLPIDAKKB_OFFSET UNITYSDK_OFFSET(0x1101F740)
#define HIGJALPGBNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1101DA80)

inline static constexpr unsigned int HIGJALPGBNF_TypeDefinitionIndex = 47414;

class HIGJALPGBNF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LJJGNCGBFNE>* NCMAGNIEMKF; // 0x10
	::System::Func_1<::UnityEngine::Vector3>* HMINNHBBCMD; // 0x18
	::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::HEGAIBENLJF>* MFKFPPPOMBP; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ENFEIIACNDA; // 0x28
	::System::Collections::Generic::List_1<::ENPIIHGLGNH_1<::PCNOJLGFMPO>>* EANAJFMNLLE; // 0x30
	::System::Collections::Generic::List_1<::LJJGNCGBFNE>* PPFFCCFJACD; // 0x38
	::System::Single FJIPLPGJFOE; // 0x40
	::System::Single FOODPJLPGPL; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGJALPGBNF__CTOR_OFFSET))(this);
	}

	static ::System::Single KMNBJJIKCDJ(::FluffyUnderware::Curvy::CurvySpline* IFHEOPLLDGC, ::System::Single BDEDDEGJFKL, ::UnityEngine::Vector3 MDDOCMPFKCE)
	{
		return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HIGJALPGBNF_KMNBJJIKCDJ_OFFSET))(IFHEOPLLDGC, BDEDDEGJFKL, MDDOCMPFKCE);
	}

	static ::System::Boolean MFBICIJFJON(::UnityEngine::Bounds& GOFCNJELMHH, ::UnityEngine::Plane& KIJGEEDPBJD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Bounds&, ::UnityEngine::Plane&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_MFBICIJFJON_OFFSET))(GOFCNJELMHH, KIJGEEDPBJD);
	}

	static ::System::Boolean GHFMAPIAJMN(::LJPBFGAJPLK& OKHMIANAKPA, ::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::System::Boolean(*)(::LJPBFGAJPLK&, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + HIGJALPGBNF_GHFMAPIAJMN_OFFSET))(OKHMIANAKPA, GOFCNJELMHH);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LJJGNCGBFNE>* LCEAENILLHP()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LJJGNCGBFNE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGJALPGBNF_LCEAENILLHP_OFFSET))(this);
	}

	::System::Single JPGJFIHOHIP(::System::Single FCIPDONPIOD)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIGJALPGBNF_JPGJFIHOHIP_OFFSET))(this, FCIPDONPIOD);
	}

	::System::Boolean MAPNMBDKMGC(::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* DFMKILICPFB, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_MAPNMBDKMGC_OFFSET))(this, DFMKILICPFB, AAOCANGHBDG);
	}

	::System::Void PGMPJLHDLKB(::HEGAIBENLJF GLEEMIBOEAB)
	{
		return ((::System::Void(*)(::PVOID, ::HEGAIBENLJF))((::PBYTE)hIl2Cpp + HIGJALPGBNF_PGMPJLHDLKB_OFFSET))(this, GLEEMIBOEAB);
	}

	::System::Void IMLOBAFIMJH(::System::Nullable_1<::LJJGNCGBFNE>& PJAMHFJKKGL, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::LJJGNCGBFNE>&, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_IMLOBAFIMJH_OFFSET))(this, PJAMHFJKKGL, AAOCANGHBDG);
	}

	::System::Void OGHJIBPLIOI(::LJJGNCGBFNE& PJAMHFJKKGL, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* BFLFKEFEKFF, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LJJGNCGBFNE&, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_OGHJIBPLIOI_OFFSET))(this, PJAMHFJKKGL, BFLFKEFEKFF, AAOCANGHBDG);
	}

	static ::System::Boolean OOLIALCBPMH(::UnityEngine::Vector3 OPMPKFEHOBM, ::LJPBFGAJPLK& OKHMIANAKPA)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::LJPBFGAJPLK&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_OOLIALCBPMH_OFFSET))(OPMPKFEHOBM, OKHMIANAKPA);
	}

	::System::Boolean CKEKHIKFNIA(::LOMGLJPKHAF* MKIPAELJOHB, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* DFMKILICPFB, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::LOMGLJPKHAF*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_CKEKHIKFNIA_OFFSET))(this, MKIPAELJOHB, DFMKILICPFB, AAOCANGHBDG);
	}

	static ::System::Boolean JGEBBHKIHLJ(::UnityEngine::Vector3 OPMPKFEHOBM, ::System::Single LNJFKBBFABK, ::UnityEngine::Vector3 ENPJGJBBIPH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HIGJALPGBNF_JGEBBHKIHLJ_OFFSET))(OPMPKFEHOBM, LNJFKBBFABK, ENPJGJBBIPH);
	}

	::System::Void PNCLPIDAKKB(::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>* CABMAELHHIO, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection* BFLFKEFEKFF, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FluffyUnderware::Curvy::CurvySpline*>*, ::MoleMole::Config::ConfigZipLine_ConfigEnterPointSelection*, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_PNCLPIDAKKB_OFFSET))(this, CABMAELHHIO, BFLFKEFEKFF, AAOCANGHBDG);
	}

	::System::Void IMLOBAFIMJH_1(::LJJGNCGBFNE& PJAMHFJKKGL, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::LJJGNCGBFNE&, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_IMLOBAFIMJH_1_OFFSET))(this, PJAMHFJKKGL, AAOCANGHBDG);
	}

	::System::Boolean LCJEBHCPFKG(::LOMGLJPKHAF* MKIPAELJOHB, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection* DFMKILICPFB, ::DJDODNGGEJI& AAOCANGHBDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::LOMGLJPKHAF*, ::MoleMole::Config::ConfigZipLine_ConfigPreEnterPointSelection*, ::DJDODNGGEJI&))((::PBYTE)hIl2Cpp + HIGJALPGBNF_LCJEBHCPFKG_OFFSET))(this, MKIPAELJOHB, DFMKILICPFB, AAOCANGHBDG);
	}

	::System::Void BBOMJDBNHIC(::System::Func_1<::UnityEngine::Vector3>* FACHPEJHDFD, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::HEGAIBENLJF>* GKFGPCLKJOO, ::System::Single CBIIDHCIBGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::Vector3>*, ::System::Func_2<::FluffyUnderware::Curvy::CurvySpline*, ::HEGAIBENLJF>*, ::System::Single))((::PBYTE)hIl2Cpp + HIGJALPGBNF_BBOMJDBNHIC_OFFSET))(this, FACHPEJHDFD, GKFGPCLKJOO, CBIIDHCIBGL);
	}

	::System::Void KEKGKIGJDFM(::HEGAIBENLJF GLEEMIBOEAB)
	{
		return ((::System::Void(*)(::PVOID, ::HEGAIBENLJF))((::PBYTE)hIl2Cpp + HIGJALPGBNF_KEKGKIGJDFM_OFFSET))(this, GLEEMIBOEAB);
	}

	::System::Collections::Generic::IReadOnlyList_1<::LJJGNCGBFNE>* PLLPHPAAIBO()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::LJJGNCGBFNE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGJALPGBNF_PLLPHPAAIBO_OFFSET))(this);
	}
};
