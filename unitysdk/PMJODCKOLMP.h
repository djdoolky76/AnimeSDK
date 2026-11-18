#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EANDPPCHNGJ.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/Config/Spline_WayPoint.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/CAMLGDMCCMB.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class LGAFMFNMCOG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define PMJODCKOLMP_DPPJJFKDNHJ_OFFSET UNITYSDK_OFFSET(0x1C696660)
#define PMJODCKOLMP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C6965F0)
#define PMJODCKOLMP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C6962D0)
#define PMJODCKOLMP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C697E60)
#define PMJODCKOLMP_HNAAJCBNGPP_OFFSET UNITYSDK_OFFSET(0x1C697D90)
#define PMJODCKOLMP_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x1C697D00)
#define PMJODCKOLMP_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x1C6960F0)
#define PMJODCKOLMP_NNMIPLKAIAJ_OFFSET UNITYSDK_OFFSET(0x1C697C90)
#define PMJODCKOLMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C697A10)

inline static constexpr unsigned int PMJODCKOLMP_TypeDefinitionIndex = 91735;

class PMJODCKOLMP : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JCACKMABDMN; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* AJGAENEPLAG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* FJMNMKPGFIF; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x48
	::KCMIFNGABDC_1<::MoleMole::Config::Spline_WayPoint>* AOECALMIOJG; // 0x50
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x58
	::KCMIFNGABDC_1<::System::Int32>* JKNBCNNGHCC; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJODCKOLMP__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + PMJODCKOLMP_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJODCKOLMP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PMJODCKOLMP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Single NNMIPLKAIAJ(::EANDPPCHNGJ OPKGEJEMNMO)
	{
		return ((::System::Single(*)(::PVOID, ::EANDPPCHNGJ))((::PBYTE)hIl2Cpp + PMJODCKOLMP_NNMIPLKAIAJ_OFFSET))(this, OPKGEJEMNMO);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + PMJODCKOLMP_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* HNAAJCBNGPP(::LGCNEDCMPKM BKBGPKNGNMF, ::CAMLGDMCCMB AOKHOHCJNFJ)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::LGCNEDCMPKM, ::CAMLGDMCCMB))((::PBYTE)hIl2Cpp + PMJODCKOLMP_HNAAJCBNGPP_OFFSET))(this, BKBGPKNGNMF, AOKHOHCJNFJ);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJODCKOLMP_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void DPPJJFKDNHJ(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PMJODCKOLMP_DPPJJFKDNHJ_OFFSET))(this, BKBGPKNGNMF);
	}
};
