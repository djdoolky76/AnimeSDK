#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDCKFEDCLEA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOHOIMABHPG_NHCMPLFBGEF_OFFSET UNITYSDK_OFFSET(0x142606D0)
#define BOHOIMABHPG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14260620)
#define BOHOIMABHPG__CTOR_OFFSET UNITYSDK_OFFSET(0x14260600)

inline static constexpr unsigned int BOHOIMABHPG_TypeDefinitionIndex = 73455;

class BOHOIMABHPG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* NGOAPKNLBHO; // 0x10
	::System::Single KIHCHPOHCCF; // 0x18
	::System::Single GANGNIFHJOP; // 0x1C
	::System::Single AMFLJNELLKH; // 0x20
	::System::Single APBNGHKCCJF; // 0x24
	::System::Single PNPKLFCKDIJ; // 0x28
	::DDCKFEDCLEA CDPAPCABDGE; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHOIMABHPG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOHOIMABHPG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void NHCMPLFBGEF(::System::String* AEMJPNCLHDN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BOHOIMABHPG_NHCMPLFBGEF_OFFSET))(this, AEMJPNCLHDN);
	}
};
