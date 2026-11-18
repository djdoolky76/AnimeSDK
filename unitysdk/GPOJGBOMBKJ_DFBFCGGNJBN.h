#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define GPOJGBOMBKJ_DFBFCGGNJBN_JDBCCKKJKHH_OFFSET UNITYSDK_OFFSET(0x13D778D0)
#define GPOJGBOMBKJ_DFBFCGGNJBN_PEECFINEJHJ_OFFSET UNITYSDK_OFFSET(0x13D778E0)
#define GPOJGBOMBKJ_DFBFCGGNJBN__CTOR_OFFSET UNITYSDK_OFFSET(0x13D76DC0)

inline static constexpr unsigned int GPOJGBOMBKJ_DFBFCGGNJBN_TypeDefinitionIndex = 46925;

class GPOJGBOMBKJ_DFBFCGGNJBN : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* FJPKEALJGJM; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_DFBFCGGNJBN__CTOR_OFFSET))(this);
	}

	::System::Void JDBCCKKJKHH(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_DFBFCGGNJBN_JDBCCKKJKHH_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void PEECFINEJHJ(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_DFBFCGGNJBN_PEECFINEJHJ_OFFSET))(this, JMFEPDAHBED);
	}
};
