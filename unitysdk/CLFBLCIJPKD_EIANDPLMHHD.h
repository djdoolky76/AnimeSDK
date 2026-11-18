#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_LEPOLDOBOGO.h"

namespace System { class String; }

#define CLFBLCIJPKD_EIANDPLMHHD_BLPGBMJMAJF_OFFSET UNITYSDK_OFFSET(0x19A17AA0)
#define CLFBLCIJPKD_EIANDPLMHHD_KJOHEMDIHNJ_OFFSET UNITYSDK_OFFSET(0x19A17B20)
#define CLFBLCIJPKD_EIANDPLMHHD_NCMCOPHKPJN_OFFSET UNITYSDK_OFFSET(0x19A17AE0)
#define CLFBLCIJPKD_EIANDPLMHHD__CTOR_OFFSET UNITYSDK_OFFSET(0x19A17A90)

inline static constexpr unsigned int CLFBLCIJPKD_EIANDPLMHHD_TypeDefinitionIndex = 88484;

class CLFBLCIJPKD_EIANDPLMHHD : public ::CLFBLCIJPKD_LEPOLDOBOGO
{
public:
	::System::String* ANKECOJBKLB; // 0x28
	::System::Int32 GBKPOOJBKML; // 0x30

	::System::Void _ctor(::System::String* ANKECOJBKLB, ::System::Int32 GBKPOOJBKML)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_EIANDPLMHHD__CTOR_OFFSET))(this, ANKECOJBKLB, GBKPOOJBKML);
	}

	::System::Int32 BLPGBMJMAJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_EIANDPLMHHD_BLPGBMJMAJF_OFFSET))(this);
	}

	::System::Void NCMCOPHKPJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_EIANDPLMHHD_NCMCOPHKPJN_OFFSET))(this);
	}

	::System::Int32 KJOHEMDIHNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_EIANDPLMHHD_KJOHEMDIHNJ_OFFSET))(this);
	}
};
