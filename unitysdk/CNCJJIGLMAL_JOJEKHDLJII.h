#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNCJJIGLMAL_HGLBEOEKJKI.h"
#include "unitysdk/System/Object.h"

class CNCJJIGLMAL;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CNCJJIGLMAL_JOJEKHDLJII_CKIFDPHDGHI_OFFSET UNITYSDK_OFFSET(0x13E15610)
#define CNCJJIGLMAL_JOJEKHDLJII_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x13E155B0)
#define CNCJJIGLMAL_JOJEKHDLJII__CTOR_OFFSET UNITYSDK_OFFSET(0x13E15590)

inline static constexpr unsigned int CNCJJIGLMAL_JOJEKHDLJII_TypeDefinitionIndex = 45208;

class CNCJJIGLMAL_JOJEKHDLJII : public ::System::Object
{
public:
	::System::Action_2<::CNCJJIGLMAL*, ::System::Object*>* LHIKCHDMIBL; // 0x10
	::System::Boolean CGBJGCAJNGJ; // 0x18
	::System::Byte _padding0[0x3];
	::CNCJJIGLMAL_HGLBEOEKJKI NNFHLPGKOGI; // 0x1C
	::System::Single CBPBJOAADLH; // 0x20

	::System::Void _ctor(::System::Single KHHCPOIIPNG, ::CNCJJIGLMAL_HGLBEOEKJKI IGOCCHGFNLP, ::System::Boolean EBNIFKCFJEN, ::System::Action_2<::CNCJJIGLMAL*, ::System::Object*>* KEHCCNINEIK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::CNCJJIGLMAL_HGLBEOEKJKI, ::System::Boolean, ::System::Action_2<::CNCJJIGLMAL*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_JOJEKHDLJII__CTOR_OFFSET))(this, KHHCPOIIPNG, IGOCCHGFNLP, EBNIFKCFJEN, KEHCCNINEIK);
	}

	::System::Void LBODGKNICHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_JOJEKHDLJII_LBODGKNICHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean CKIFDPHDGHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCJJIGLMAL_JOJEKHDLJII_CKIFDPHDGHI_OFFSET))(this);
	}
};
