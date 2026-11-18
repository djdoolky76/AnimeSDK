#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOAHPEEBGI.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IHCCINOGFLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A1860)

inline static constexpr unsigned int IHCCINOGFLK_TypeDefinitionIndex = 39150;

class IHCCINOGFLK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* OCNEEFCLDID; // 0x10
	::System::Int32 HJOIHNPAHHO; // 0x18
	::System::Int32 FCLHCPKCKIG; // 0x1C
	::System::Int32 GCDMIDHHELB; // 0x20
	::BFOAHPEEBGI PLIPGLHHFDD; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCCINOGFLK__CTOR_OFFSET))(this);
	}
};
