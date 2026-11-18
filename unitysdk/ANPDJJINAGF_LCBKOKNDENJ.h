#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALKDLMOOFDO;
class ANPDJJINAGF;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define ANPDJJINAGF_LCBKOKNDENJ_IMIMEOHFPGD_OFFSET UNITYSDK_OFFSET(0x1821B350)
#define ANPDJJINAGF_LCBKOKNDENJ_LGHPJFNNJIG_OFFSET UNITYSDK_OFFSET(0x1821B5E0)
#define ANPDJJINAGF_LCBKOKNDENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18219FB0)

inline static constexpr unsigned int ANPDJJINAGF_LCBKOKNDENJ_TypeDefinitionIndex = 92241;

class ANPDJJINAGF_LCBKOKNDENJ : public ::System::Object
{
public:
	::ANPDJJINAGF* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18
	::System::Action_1<::ALKDLMOOFDO*>* EJGDHCIBCJH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDJJINAGF_LCBKOKNDENJ__CTOR_OFFSET))(this);
	}

	::System::Void IMIMEOHFPGD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ANPDJJINAGF_LCBKOKNDENJ_IMIMEOHFPGD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LGHPJFNNJIG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + ANPDJJINAGF_LCBKOKNDENJ_LGHPJFNNJIG_OFFSET))(this, BHDNBGLCNOM);
	}
};
