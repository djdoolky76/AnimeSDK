#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLFBLCIJPKD_LEPOLDOBOGO.h"

namespace System { class String; }

#define CLFBLCIJPKD_LOGGJKCPPEL_NCMCOPHKPJN_OFFSET UNITYSDK_OFFSET(0x1155BDF0)
#define CLFBLCIJPKD_LOGGJKCPPEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1155BDE0)

inline static constexpr unsigned int CLFBLCIJPKD_LOGGJKCPPEL_TypeDefinitionIndex = 88466;

class CLFBLCIJPKD_LOGGJKCPPEL : public ::CLFBLCIJPKD_LEPOLDOBOGO
{
public:
	::System::String* DGICNFBPHAP; // 0x28

	::System::Void _ctor(::System::String* DGICNFBPHAP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOGGJKCPPEL__CTOR_OFFSET))(this, DGICNFBPHAP);
	}

	::System::Void NCMCOPHKPJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFBLCIJPKD_LOGGJKCPPEL_NCMCOPHKPJN_OFFSET))(this);
	}
};
