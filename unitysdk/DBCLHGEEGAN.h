#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DBCLHGEEGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A306F0)

inline static constexpr unsigned int DBCLHGEEGAN_TypeDefinitionIndex = 42780;

class DBCLHGEEGAN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* MKBOCCLMLPB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBCLHGEEGAN__CTOR_OFFSET))(this);
	}
};
