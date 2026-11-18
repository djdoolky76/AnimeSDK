#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define IEDHKGPALKM_HBKCLFCJABP_DNEILNHNDMF_OFFSET UNITYSDK_OFFSET(0x15BFFB70)
#define IEDHKGPALKM_HBKCLFCJABP_HNIPDIJNEFN_OFFSET UNITYSDK_OFFSET(0x15BFFB60)
#define IEDHKGPALKM_HBKCLFCJABP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BFFB50)

inline static constexpr unsigned int IEDHKGPALKM_HBKCLFCJABP_TypeDefinitionIndex = 89863;

class IEDHKGPALKM_HBKCLFCJABP : public ::System::Object
{
public:
	::System::Action* FKHOJLMBILE; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEDHKGPALKM_HBKCLFCJABP__CTOR_OFFSET))(this);
	}

	::System::Void HNIPDIJNEFN(::OAEFGCLEHHO* JCHFKGGDDFB)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_HBKCLFCJABP_HNIPDIJNEFN_OFFSET))(this, JCHFKGGDDFB);
	}

	::System::Void DNEILNHNDMF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IEDHKGPALKM_HBKCLFCJABP_DNEILNHNDMF_OFFSET))(this, PIIPCLCCOIG);
	}
};
