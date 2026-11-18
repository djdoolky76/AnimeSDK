#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJOBPBEAFDA_CFAOIBFEIJH.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LJOBPBEAFDA__CTOR_OFFSET UNITYSDK_OFFSET(0x16853690)

inline static constexpr unsigned int LJOBPBEAFDA_TypeDefinitionIndex = 91335;

class LJOBPBEAFDA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* INPPBNJDNGI; // 0x10
	::System::String* NMILHCALNBL; // 0x18
	::System::Single DFCBLCNGHAF; // 0x20
	::System::Single NNIDMMBIJPI; // 0x24
	::System::Single AJNCPIOBKGD; // 0x28
	::System::Single AFIKJAIPLNG; // 0x2C
	::LJOBPBEAFDA_CFAOIBFEIJH EJIDHIPNIAH; // 0x30
	::System::Single FGFOHOAANAB; // 0x34
	::System::Single AAEBAFAMFCC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJOBPBEAFDA__CTOR_OFFSET))(this);
	}
};
