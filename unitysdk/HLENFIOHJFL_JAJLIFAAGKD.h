#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define HLENFIOHJFL_JAJLIFAAGKD_DEBLKNFACAB_OFFSET UNITYSDK_OFFSET(0x17A58C20)
#define HLENFIOHJFL_JAJLIFAAGKD_JECCGIOLCCB_OFFSET UNITYSDK_OFFSET(0x17A58BC0)
#define HLENFIOHJFL_JAJLIFAAGKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A58BB0)

inline static constexpr unsigned int HLENFIOHJFL_JAJLIFAAGKD_TypeDefinitionIndex = 54207;

class HLENFIOHJFL_JAJLIFAAGKD : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_JAJLIFAAGKD__CTOR_OFFSET))(this);
	}

	::System::Void JECCGIOLCCB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_JAJLIFAAGKD_JECCGIOLCCB_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DEBLKNFACAB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_JAJLIFAAGKD_DEBLKNFACAB_OFFSET))(this, BHDNBGLCNOM);
	}
};
