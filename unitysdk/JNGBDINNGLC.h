#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AGAEFOGEGAB;
namespace System { template <typename T> class Action_1; }

#define JNGBDINNGLC_MDLEFBAPKBF_OFFSET UNITYSDK_OFFSET(0x17B53B30)
#define JNGBDINNGLC__CTOR_OFFSET UNITYSDK_OFFSET(0x17B53B20)

inline static constexpr unsigned int JNGBDINNGLC_TypeDefinitionIndex = 72678;

class JNGBDINNGLC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* MKALKIOFPLD; // 0x10
	::AGAEFOGEGAB* IEFLBAHHHFJ; // 0x18
	::System::Boolean IFHLDCDEMHH; // 0x20
	::System::Boolean LIEJIGMGGOL; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGBDINNGLC__CTOR_OFFSET))(this);
	}

	::System::Int32 MDLEFBAPKBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNGBDINNGLC_MDLEFBAPKBF_OFFSET))(this);
	}
};
