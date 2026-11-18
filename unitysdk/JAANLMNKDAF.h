#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDCKHDEBKKK;
class CMIGOHLENPE;
namespace System { class String; }

#define JAANLMNKDAF_GOKKLBCCHBP_OFFSET UNITYSDK_OFFSET(0x194433C0)
#define JAANLMNKDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x194433B0)

inline static constexpr unsigned int JAANLMNKDAF_TypeDefinitionIndex = 65547;

class JAANLMNKDAF : public ::System::Object
{
public:
	::BDCKHDEBKKK* NGKCMJCKBOC; // 0x10
	::System::String* HICDOCNALAF; // 0x18
	::System::UInt32 FDOGGANACAP; // 0x20
	::System::UInt32 KBNCCFMHCDM; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAANLMNKDAF__CTOR_OFFSET))(this);
	}

	::System::Void GOKKLBCCHBP(::CMIGOHLENPE* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::CMIGOHLENPE*))((::PBYTE)hIl2Cpp + JAANLMNKDAF_GOKKLBCCHBP_OFFSET))(this, LJBPECKCCEA);
	}
};
