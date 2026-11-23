#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define E3ED5C48F30DE3B1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E3ED5C48F30DE3B1_TypeDefinitionIndex = 15899;

class E3ED5C48F30DE3B1 : public ::System::Object
{
public:
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* FB071B82283F335C; // 0x10
	::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>* BFEBD55D1A94DCEE; // 0x18
	::System::Boolean E9AC3977D356A1A7; // 0x20
	::System::Byte _padding0[0x7];
	::System::String* BC4278022A37BBA4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3ED5C48F30DE3B1__CTOR_OFFSET))(this);
	}
};
