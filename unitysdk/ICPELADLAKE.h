#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define ICPELADLAKE__CTOR_OFFSET UNITYSDK_OFFSET(0xF8380B0)

inline static constexpr unsigned int ICPELADLAKE_TypeDefinitionIndex = 65671;

class ICPELADLAKE : public ::System::Object
{
public:
	::System::Action* EDDDLIKPMLA; // 0x10
	::System::String* KONPMOGCPID; // 0x18
	::System::Nullable_1<::System::Boolean> IMAPMLBHJLL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPELADLAKE__CTOR_OFFSET))(this);
	}
};
