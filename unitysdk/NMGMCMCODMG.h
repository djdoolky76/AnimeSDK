#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NMGMCMCODMG__CTOR_OFFSET UNITYSDK_OFFSET(0x13169530)

inline static constexpr unsigned int NMGMCMCODMG_TypeDefinitionIndex = 62668;

class NMGMCMCODMG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LEKCMEBPLOP; // 0x10
	::System::Boolean PCOHPMMCFDO; // 0x18
	::System::Byte _padding0[0x3];
	::System::Int32 ANEOEOJPFPL; // 0x1C
	::System::Int32 FJDKHLAEBHA; // 0x20
	::System::Int32 MCEHFLNPGFA; // 0x24
	::System::Int32 IHHNLMNNEFF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGMCMCODMG__CTOR_OFFSET))(this);
	}
};
