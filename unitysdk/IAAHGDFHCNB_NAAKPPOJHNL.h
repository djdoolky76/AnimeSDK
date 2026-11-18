#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IAAHGDFHCNB_NAAKPPOJHNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15E92430)

inline static constexpr unsigned int IAAHGDFHCNB_NAAKPPOJHNL_TypeDefinitionIndex = 88134;

class IAAHGDFHCNB_NAAKPPOJHNL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* EOGNKJINJMJ; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* MJFIOGJNOFB; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* JJJCPIBBCOM; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::UInt32>*>* OMLBKPDLNJH; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* BOEKBGKGEMB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAHGDFHCNB_NAAKPPOJHNL__CTOR_OFFSET))(this);
	}
};
