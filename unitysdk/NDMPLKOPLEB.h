#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBEMOPFLBNN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDMPLKOPLEB__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F950)

inline static constexpr unsigned int NDMPLKOPLEB_TypeDefinitionIndex = 58623;

class NDMPLKOPLEB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BBEMOPFLBNN>* NMMJOMHBDAJ; // 0x10
	::System::Collections::Generic::List_1<::BBEMOPFLBNN>* AHDCFGJGAMF; // 0x18
	::System::Int32 JNHDJFCGIFD; // 0x20
	::System::Int32 MBFHNJEBPBP; // 0x24
	::System::Int32 BBHLDFGNLAK; // 0x28
	::System::Int32 IMNINAHPMCG; // 0x2C
	::System::Int32 BJPGNHMHDLD; // 0x30
	::System::Int32 IHKIBCPNPHL; // 0x34
	::System::Int32 EACBECHGNCJ; // 0x38
	::System::Int32 JNGGLEBEPBI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPLKOPLEB__CTOR_OFFSET))(this);
	}
};
