#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EHKBIMEMOCP;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define HLENFIOHJFL_HDLDELCMICL_CPJEBEHDKBN_OFFSET UNITYSDK_OFFSET(0x15B674A0)
#define HLENFIOHJFL_HDLDELCMICL__CTOR_OFFSET UNITYSDK_OFFSET(0x15B67490)

inline static constexpr unsigned int HLENFIOHJFL_HDLDELCMICL_TypeDefinitionIndex = 54196;

class HLENFIOHJFL_HDLDELCMICL : public ::System::Object
{
public:
	::System::Action_1<::EHKBIMEMOCP*>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_HDLDELCMICL__CTOR_OFFSET))(this);
	}

	::System::Void CPJEBEHDKBN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_HDLDELCMICL_CPJEBEHDKBN_OFFSET))(this, BHDNBGLCNOM);
	}
};
