#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class GHFNPKEGLGN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EIEMOAANHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x19A8EBC0)

inline static constexpr unsigned int EIEMOAANHHO_TypeDefinitionIndex = 62478;

	class EIEMOAANHHO : public ::System::Object
	{
	public:
		::System::String* JHFIFEGLDEC; // 0x10
		::System::String* NJIAFHIPAFO; // 0x18
		::System::String* PHJMDBNHNBH; // 0x20
		::System::String* BFHFGLBKHDH; // 0x28
		::GHFNPKEGLGN* OHIPGNMJDGG; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* JEGAGKHJACD; // 0x38
		::System::String* AABNPBGMOFN; // 0x40
		::System::Nullable_1<::System::Boolean> ENENJJENNOL; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIEMOAANHHO_CTOR_OFFSET))(this);
		}

	};
