#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GHBPIKOCKOB;
class LAGEMAGMKHD;

#define AOJIIFBCPEL_ADBLNPMMHEH_OFFSET UNITYSDK_OFFSET(0x11BCB880)
#define AOJIIFBCPEL_HAEJPJJLKJM_OFFSET UNITYSDK_OFFSET(0x11BCBB00)
#define AOJIIFBCPEL__CTOR_OFFSET UNITYSDK_OFFSET(0x11BCB770)

inline static constexpr unsigned int AOJIIFBCPEL_TypeDefinitionIndex = 54040;

class AOJIIFBCPEL : public ::System::Object
{
public:
	::GHBPIKOCKOB* BPFCAMCAMJD; // 0x10
	::LAGEMAGMKHD* HBJCDANFPPB; // 0x18
	::System::Int32 KEBELAMGCPO; // 0x20

	::System::Void _ctor(::LAGEMAGMKHD* FHJKKOIBCKH)
	{
		return ((::System::Void(*)(::PVOID, ::LAGEMAGMKHD*))((::PBYTE)hIl2Cpp + AOJIIFBCPEL__CTOR_OFFSET))(this, FHJKKOIBCKH);
	}

	::System::Void HAEJPJJLKJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJIIFBCPEL_HAEJPJJLKJM_OFFSET))(this);
	}

	::System::Void ADBLNPMMHEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOJIIFBCPEL_ADBLNPMMHEH_OFFSET))(this);
	}
};
