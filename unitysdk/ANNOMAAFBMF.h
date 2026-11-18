#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDBHJCMHEGC.h"

namespace System { class String; }

#define ANNOMAAFBMF_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x17DE22F0)
#define ANNOMAAFBMF_HEHLKHOJJHM_OFFSET UNITYSDK_OFFSET(0x17DE2330)
#define ANNOMAAFBMF__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE2220)

inline static constexpr unsigned int ANNOMAAFBMF_TypeDefinitionIndex = 49225;

class ANNOMAAFBMF : public ::DDBHJCMHEGC
{
public:
	::System::String* HIAIKHDFCLN; // 0x10

	::System::Void _ctor(::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANNOMAAFBMF__CTOR_OFFSET))(this, KKGGACLGGPN);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNOMAAFBMF_HBDAKDMFDAK_OFFSET))(this);
	}

	::System::String* HEHLKHOJJHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNOMAAFBMF_HEHLKHOJJHM_OFFSET))(this);
	}
};
