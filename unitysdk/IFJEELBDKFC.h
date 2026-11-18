#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFJEELBDKFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A98140)

inline static constexpr unsigned int IFJEELBDKFC_TypeDefinitionIndex = 63552;

class IFJEELBDKFC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DLJPHGPIANF; // 0x10
	::System::String* IOBBIDNNCHH; // 0x18
	::System::Collections::Generic::List_1<::FIDJKBDDBDD>* JNHKLHMCHJN; // 0x20
	::System::Int32 BDJOBIKPFMI; // 0x28
	::System::Boolean LKIACENPGDL; // 0x2C
	::System::Boolean KDDMOKOHBJA; // 0x2D
	::System::Byte _padding0[0x2];
	::FIDJKBDDBDD FBJCDNAGMPM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJEELBDKFC__CTOR_OFFSET))(this);
	}
};
