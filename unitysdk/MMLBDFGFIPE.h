#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMLBDFGFIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1302C300)

inline static constexpr unsigned int MMLBDFGFIPE_TypeDefinitionIndex = 58327;

class MMLBDFGFIPE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* HEIAEFIDLAK; // 0x10
	::System::String* MKIPIJHPGED; // 0x18
	::System::Boolean DCKPOGIAHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLBDFGFIPE__CTOR_OFFSET))(this);
	}
};
