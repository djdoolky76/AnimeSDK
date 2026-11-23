#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

class FFE1E7E72F3D4E0E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E7F6E65DFEBE5D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E7F6E65DFEBE5D0B_TypeDefinitionIndex = 8765;

class E7F6E65DFEBE5D0B : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::Dictionary_2<::ABC::Config::GUID, ::FFE1E7E72F3D4E0E*>* F28DCFCC0DAFD304; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7F6E65DFEBE5D0B__CTOR_OFFSET))(this);
	}
};
