#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKPPFKOEOEM_IPAOKGGOHAF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }

#define DKPPFKOEOEM_ENIAFBNJKBI_AKKEGILIJCN_OFFSET UNITYSDK_OFFSET(0x1241FDC0)
#define DKPPFKOEOEM_ENIAFBNJKBI_COMHNCIFAFO_OFFSET UNITYSDK_OFFSET(0x1241FD90)
#define DKPPFKOEOEM_ENIAFBNJKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1241FD80)

inline static constexpr unsigned int DKPPFKOEOEM_ENIAFBNJKBI_TypeDefinitionIndex = 53220;

class DKPPFKOEOEM_ENIAFBNJKBI : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x10
	::DKPPFKOEOEM_IPAOKGGOHAF* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_ENIAFBNJKBI__CTOR_OFFSET))(this);
	}

	::System::Void COMHNCIFAFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_ENIAFBNJKBI_COMHNCIFAFO_OFFSET))(this);
	}

	::System::Void AKKEGILIJCN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKPPFKOEOEM_ENIAFBNJKBI_AKKEGILIJCN_OFFSET))(this);
	}
};
