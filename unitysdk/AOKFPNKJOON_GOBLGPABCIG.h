#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOKFPNKJOON_HNIMHEIPNON;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_GOBLGPABCIG__CTOR_OFFSET UNITYSDK_OFFSET(0x185431B0)

inline static constexpr unsigned int AOKFPNKJOON_GOBLGPABCIG_TypeDefinitionIndex = 51473;

class AOKFPNKJOON_GOBLGPABCIG : public ::System::Object
{
public:
	::AOKFPNKJOON_HNIMHEIPNON* FGBNBFHOKAA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ADFMOHAMIIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_GOBLGPABCIG__CTOR_OFFSET))(this);
	}
};
