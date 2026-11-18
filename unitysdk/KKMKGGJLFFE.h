#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKMKGGJLFFE__CTOR_OFFSET UNITYSDK_OFFSET(0x17662800)

inline static constexpr unsigned int KKMKGGJLFFE_TypeDefinitionIndex = 59150;

class KKMKGGJLFFE : public ::System::Object
{
public:
	::System::String* KNPEGOBPCIJ; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* OHAALMIIDNA; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* KCKAOICGLCC; // 0x20
	::System::String* GJPOBKMCGNA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMKGGJLFFE__CTOR_OFFSET))(this);
	}
};
