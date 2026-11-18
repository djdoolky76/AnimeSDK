#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_ADJALGGBEJM_GPOACKMPKMK_OFFSET UNITYSDK_OFFSET(0x1A2D7A70)
#define KNLPPPOKJJM_ADJALGGBEJM_IIBBNCKJJAM_OFFSET UNITYSDK_OFFSET(0x1A2D7980)
#define KNLPPPOKJJM_ADJALGGBEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D7970)

inline static constexpr unsigned int KNLPPPOKJJM_ADJALGGBEJM_TypeDefinitionIndex = 67488;

class KNLPPPOKJJM_ADJALGGBEJM : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_ADJALGGBEJM__CTOR_OFFSET))(this);
	}

	::System::Void IIBBNCKJJAM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_ADJALGGBEJM_IIBBNCKJJAM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GPOACKMPKMK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_ADJALGGBEJM_GPOACKMPKMK_OFFSET))(this, BHDNBGLCNOM);
	}
};
