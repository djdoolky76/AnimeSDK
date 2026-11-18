#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMBNDPKPKGN.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPGHAAFFMIK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBBFNBJCFLF_EANLMCFKNKJ_OFFSET UNITYSDK_OFFSET(0x1477D590)
#define CBBFNBJCFLF_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x1477D750)
#define CBBFNBJCFLF_MIGCHBIOKAM_OFFSET UNITYSDK_OFFSET(0x1477D900)
#define CBBFNBJCFLF_NDGCMFMGCGI_OFFSET UNITYSDK_OFFSET(0x1477D600)
#define CBBFNBJCFLF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1477D4F0)
#define CBBFNBJCFLF__CTOR_OFFSET UNITYSDK_OFFSET(0x1477D410)

inline static constexpr unsigned int CBBFNBJCFLF_TypeDefinitionIndex = 48314;

class CBBFNBJCFLF : public ::System::Object
{
public:
	// static const ::System::Single PHPKCEAEDCN; // 0x0
	// static const ::System::Int32 KACOJPIAJGN = 0x5; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* EIPNMPCDKOH; // 0x10
	::System::Collections::Generic::List_1<::BPGHAAFFMIK*>* DCBBOJCFFHF; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JMHBOAFDFPP; // 0x20
	::System::Collections::Generic::List_1<::BPGHAAFFMIK*>* FFHFGJCOPKJ; // 0x28
	::System::Int32 MDLBCOFCEMM; // 0x30
	::System::Single NDKIMJAPFPJ; // 0x34
	::System::Single HKDKNGMLBML; // 0x38
	::NMBNDPKPKGN DPAHNDAJFLE; // 0x3C
	::UnityEngine::Vector3 ANNEGFOLGBN; // 0x40
	::System::Single PLIBGEPBABE; // 0x4C
	::UnityEngine::Vector3 MMLBLLCLNOI; // 0x50
	::System::Boolean COIPKMIKOKC; // 0x5C
	::System::Boolean FEGFBFLBGMM; // 0x5D
	::System::Byte EFEMBPACCPN; // 0x5E
	::System::Byte _padding0[0x1];
	::System::Single ODIFNCHBNJI; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBFNBJCFLF__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBFNBJCFLF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void EANLMCFKNKJ(::System::Boolean ANJGJNBHFHH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBBFNBJCFLF_EANLMCFKNKJ_OFFSET))(this, ANJGJNBHFHH);
	}

	::System::Boolean NDGCMFMGCGI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBFNBJCFLF_NDGCMFMGCGI_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL(::System::Boolean EGGHGADJCII)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBBFNBJCFLF_JCFJOKPIFPL_OFFSET))(this, EGGHGADJCII);
	}

	::System::Boolean MIGCHBIOKAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBBFNBJCFLF_MIGCHBIOKAM_OFFSET))(this);
	}
};
