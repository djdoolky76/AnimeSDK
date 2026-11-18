#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBJCBKKAJOH__CTOR_OFFSET UNITYSDK_OFFSET(0x145A8510)

inline static constexpr unsigned int CBJCBKKAJOH_TypeDefinitionIndex = 76915;

class CBJCBKKAJOH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* GGDOGINNEKJ; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* OCBMBICKNLB; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* PCFLICNBKIO; // 0x20
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* NFEHHKLLIGA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBJCBKKAJOH__CTOR_OFFSET))(this);
	}
};
