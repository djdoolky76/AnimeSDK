#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EJOPHIEBHFG_LKAELMLMNJH_MONDDIAJPIO_OFFSET UNITYSDK_OFFSET(0x11CACF20)
#define EJOPHIEBHFG_LKAELMLMNJH__CTOR_OFFSET UNITYSDK_OFFSET(0x11CACF10)

inline static constexpr unsigned int EJOPHIEBHFG_LKAELMLMNJH_TypeDefinitionIndex = 76960;

class EJOPHIEBHFG_LKAELMLMNJH : public ::System::Object
{
public:
	::System::Action* OADEFBCOOAF; // 0x10
	::System::Action* CMJBMJIKCMJ; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* EBDGAOEPDLH; // 0x20
	::System::Action* PPJNFBGNCKC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOPHIEBHFG_LKAELMLMNJH__CTOR_OFFSET))(this);
	}

	::System::Void MONDDIAJPIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOPHIEBHFG_LKAELMLMNJH_MONDDIAJPIO_OFFSET))(this);
	}
};
