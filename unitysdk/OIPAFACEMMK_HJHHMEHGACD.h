#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define OIPAFACEMMK_HJHHMEHGACD_IOJAJIGEAOC_OFFSET UNITYSDK_OFFSET(0xE1581B0)
#define OIPAFACEMMK_HJHHMEHGACD_MLAAJNMEBEO_OFFSET UNITYSDK_OFFSET(0xE1581E0)
#define OIPAFACEMMK_HJHHMEHGACD__CTOR_OFFSET UNITYSDK_OFFSET(0xE1581A0)

inline static constexpr unsigned int OIPAFACEMMK_HJHHMEHGACD_TypeDefinitionIndex = 40827;

class OIPAFACEMMK_HJHHMEHGACD : public ::System::Object
{
public:
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_HJHHMEHGACD__CTOR_OFFSET))(this);
	}

	::System::Void IOJAJIGEAOC(::System::Int32 GOCLGFBDADB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIPAFACEMMK_HJHHMEHGACD_IOJAJIGEAOC_OFFSET))(this, GOCLGFBDADB);
	}

	::System::Void MLAAJNMEBEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_HJHHMEHGACD_MLAAJNMEBEO_OFFSET))(this);
	}
};
