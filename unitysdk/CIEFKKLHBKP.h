#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGOLBJCHELH.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CIEFKKLHBKP_PADHEHLKBDO_OFFSET UNITYSDK_OFFSET(0x19A0EE50)
#define CIEFKKLHBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A0EDB0)

inline static constexpr unsigned int CIEFKKLHBKP_TypeDefinitionIndex = 56561;

class CIEFKKLHBKP : public ::GGOLBJCHELH
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* NDOAFIMFLKN; // 0x18
	::System::String* IPGHICLIBEJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEFKKLHBKP__CTOR_OFFSET))(this);
	}

	::System::Boolean PADHEHLKBDO(::CIEFKKLHBKP* LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::CIEFKKLHBKP*))((::PBYTE)hIl2Cpp + CIEFKKLHBKP_PADHEHLKBDO_OFFSET))(this, LIBPKNHDIGP);
	}
};
