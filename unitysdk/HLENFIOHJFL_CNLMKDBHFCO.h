#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHFAEGHDFGC;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define HLENFIOHJFL_CNLMKDBHFCO_CFKFCOEPAGK_OFFSET UNITYSDK_OFFSET(0x17B0E490)
#define HLENFIOHJFL_CNLMKDBHFCO_CGMFDLDILDL_OFFSET UNITYSDK_OFFSET(0x17B0E580)
#define HLENFIOHJFL_CNLMKDBHFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x17B0E480)

inline static constexpr unsigned int HLENFIOHJFL_CNLMKDBHFCO_TypeDefinitionIndex = 54198;

class HLENFIOHJFL_CNLMKDBHFCO : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action_1<::BHFAEGHDFGC*>* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_CNLMKDBHFCO__CTOR_OFFSET))(this);
	}

	::System::Void CFKFCOEPAGK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_CNLMKDBHFCO_CFKFCOEPAGK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CGMFDLDILDL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_CNLMKDBHFCO_CGMFDLDILDL_OFFSET))(this, BHDNBGLCNOM);
	}
};
