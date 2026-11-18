#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

inline static constexpr unsigned int BOHDKMNPDEM_TypeDefinitionIndex = 42120;

struct alignas(8) BOHDKMNPDEM
{
	::System::Boolean HFBPONNNLBA; // 0x10
	::System::Byte _padding0[0x7];
	::System::Func_1<::System::String*>* JEAKGKMMCCO; // 0x18
	::System::Nullable_1<::MoleMole::InputLogicEventType> EJAEMAAIMGJ; // 0x20
	::System::Func_2<::System::Int32, ::System::Boolean>* MGCFFHFIGAD; // 0x28
	::System::Int32 JEHLHNMFMBM; // 0x30
};
