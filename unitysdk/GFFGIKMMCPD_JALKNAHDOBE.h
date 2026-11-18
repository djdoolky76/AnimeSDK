#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JKIAKECKNPC;
namespace System { class String; }

#define GFFGIKMMCPD_JALKNAHDOBE_EPGPNDKPDHK_OFFSET UNITYSDK_OFFSET(0x10FD5630)
#define GFFGIKMMCPD_JALKNAHDOBE__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD5620)

inline static constexpr unsigned int GFFGIKMMCPD_JALKNAHDOBE_TypeDefinitionIndex = 50451;

class GFFGIKMMCPD_JALKNAHDOBE : public ::System::Object
{
public:
	::System::String* HIAIKHDFCLN; // 0x10
	::System::Int32 EGEGIMGMJHN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_JALKNAHDOBE__CTOR_OFFSET))(this);
	}

	::System::Boolean EPGPNDKPDHK(::JKIAKECKNPC* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::JKIAKECKNPC*))((::PBYTE)hIl2Cpp + GFFGIKMMCPD_JALKNAHDOBE_EPGPNDKPDHK_OFFSET))(this, IPMMCGDMODG);
	}
};
