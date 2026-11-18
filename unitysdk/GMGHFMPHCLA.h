#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMGHFMPHCLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7BF50)

inline static constexpr unsigned int GMGHFMPHCLA_TypeDefinitionIndex = 93458;

class GMGHFMPHCLA : public ::BIHPBFHEOOA
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* JLLLLJBMBDE; // 0x10
	::System::UInt32 HDGIELLOOEF; // 0x18
	::JGLIFHIAIEH OHOGDOMNHNK; // 0x1C
	::System::UInt32 NKGFEGLPCAB; // 0x24
	::System::UInt32 CNENMOBJBBK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGHFMPHCLA__CTOR_OFFSET))(this);
	}
};
