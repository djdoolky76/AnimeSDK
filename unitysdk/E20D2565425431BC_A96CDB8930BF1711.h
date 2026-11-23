#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }

#define E20D2565425431BC_A96CDB8930BF1711_A25C984AC7CD0751_OFFSET UNITYSDK_OFFSET(0x4141880)
#define E20D2565425431BC_A96CDB8930BF1711__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E20D2565425431BC_A96CDB8930BF1711_TypeDefinitionIndex = 17118;

class E20D2565425431BC_A96CDB8930BF1711 : public ::System::Object
{
public:
	::System::Func_2<::System::String*, ::System::String*>* A4F588F3CF9FC49B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E20D2565425431BC_A96CDB8930BF1711__CTOR_OFFSET))(this);
	}

	::System::String* A25C984AC7CD0751(::System::Reflection::FieldInfo* A45600735D539BFC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + E20D2565425431BC_A96CDB8930BF1711_A25C984AC7CD0751_OFFSET))(this, A45600735D539BFC);
	}
};
