#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NBDEOHKBODI;
class PMLCKJBHLLB;

#define LHIJBPLMPIK_AGKIIAKIIHP_OFFSET UNITYSDK_OFFSET(0x1DA14E40)
#define LHIJBPLMPIK_DLDKMDJDFIG_OFFSET UNITYSDK_OFFSET(0x1DA14BD0)
#define LHIJBPLMPIK_KEHIHFJBCAI_OFFSET UNITYSDK_OFFSET(0x1DA14A20)
#define LHIJBPLMPIK_LBNCMLCLAEE_OFFSET UNITYSDK_OFFSET(0x1DA14E90)
#define LHIJBPLMPIK_OIOOLMOLFDL_OFFSET UNITYSDK_OFFSET(0x1DA14EA0)
#define LHIJBPLMPIK_OJOKLHLIDEC_OFFSET UNITYSDK_OFFSET(0x1DA14D00)
#define LHIJBPLMPIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA14A10)

inline static constexpr unsigned int LHIJBPLMPIK_TypeDefinitionIndex = 93574;

class LHIJBPLMPIK : public ::System::Object
{
public:
	::PMLCKJBHLLB* MABBJOCLPBG; // 0x10

	::System::Void _ctor(::PMLCKJBHLLB* NLPFGNOPHNB)
	{
		return ((::System::Void(*)(::PVOID, ::PMLCKJBHLLB*))((::PBYTE)hIl2Cpp + LHIJBPLMPIK__CTOR_OFFSET))(this, NLPFGNOPHNB);
	}

	::System::Void KEHIHFJBCAI(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_KEHIHFJBCAI_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Boolean OJOKLHLIDEC(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_OJOKLHLIDEC_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void AGKIIAKIIHP(::System::Int32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_AGKIIAKIIHP_OFFSET))(this, BKLGNCBNEGM);
	}

	::System::Void LBNCMLCLAEE(::System::Int32 JGMIMHAJCKC, ::System::UInt32 DMGPFJJIHOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_LBNCMLCLAEE_OFFSET))(this, JGMIMHAJCKC, DMGPFJJIHOM);
	}

	::System::Void DLDKMDJDFIG(::NBDEOHKBODI* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::NBDEOHKBODI*))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_DLDKMDJDFIG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OIOOLMOLFDL(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHIJBPLMPIK_OIOOLMOLFDL_OFFSET))(this, BKLGNCBNEGM);
	}
};
