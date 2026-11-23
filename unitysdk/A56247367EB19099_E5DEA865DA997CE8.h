#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A56247367EB19099_E5DEA865DA997CE8_E0FCBCC4EA9D7045_OFFSET UNITYSDK_OFFSET(0x29780F0)
#define A56247367EB19099_E5DEA865DA997CE8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A56247367EB19099_E5DEA865DA997CE8_TypeDefinitionIndex = 15466;

class A56247367EB19099_E5DEA865DA997CE8 : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* ED88253E324ADD1E; // 0x10
	::System::Int32 F0E2F0F4B5A83439; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A56247367EB19099_E5DEA865DA997CE8__CTOR_OFFSET))(this);
	}

	::System::Void E0FCBCC4EA9D7045(::System::String* FB27EF4D296E43E4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A56247367EB19099_E5DEA865DA997CE8_E0FCBCC4EA9D7045_OFFSET))(this, FB27EF4D296E43E4);
	}
};
