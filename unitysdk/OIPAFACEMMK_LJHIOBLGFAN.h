#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }

#define OIPAFACEMMK_LJHIOBLGFAN_DNHKCMBOOBM_OFFSET UNITYSDK_OFFSET(0x15FE3690)
#define OIPAFACEMMK_LJHIOBLGFAN_LDCFHCOHAAE_OFFSET UNITYSDK_OFFSET(0x15FE3660)
#define OIPAFACEMMK_LJHIOBLGFAN__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE3650)

inline static constexpr unsigned int OIPAFACEMMK_LJHIOBLGFAN_TypeDefinitionIndex = 40844;

class OIPAFACEMMK_LJHIOBLGFAN : public ::System::Object
{
public:
	::System::Threading::CancellationToken OMMEALOOOOD; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* BOIBONJOJKH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LJHIOBLGFAN__CTOR_OFFSET))(this);
	}

	::System::Void LDCFHCOHAAE(::System::Int32 GOCLGFBDADB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LJHIOBLGFAN_LDCFHCOHAAE_OFFSET))(this, GOCLGFBDADB);
	}

	::System::Void DNHKCMBOOBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIPAFACEMMK_LJHIOBLGFAN_DNHKCMBOOBM_OFFSET))(this);
	}
};
