#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHKNDBLGCAA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDIJJEFFDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE5300)

inline static constexpr unsigned int GDIJJEFFDDK_TypeDefinitionIndex = 46151;

class GDIJJEFFDDK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* KIHNEBGPEEO; // 0x10
	::LHKNDBLGCAA PIDKPBLFDBG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIJJEFFDDK__CTOR_OFFSET))(this);
	}
};
