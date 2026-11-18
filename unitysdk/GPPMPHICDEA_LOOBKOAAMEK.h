#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GPPMPHICDEA_LOOBKOAAMEK__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43990)

inline static constexpr unsigned int GPPMPHICDEA_LOOBKOAAMEK_TypeDefinitionIndex = 42656;

class GPPMPHICDEA_LOOBKOAAMEK : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* ODCOCLLDHPG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_LOOBKOAAMEK__CTOR_OFFSET))(this);
	}
};
