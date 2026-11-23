#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define A6F93B1E803A2E18_A83BD201FCBCE144_OFFSET UNITYSDK_OFFSET(0x1EC0650)
#define A6F93B1E803A2E18_B996A70283B60FAC_OFFSET UNITYSDK_OFFSET(0x1EC05B0)
#define A6F93B1E803A2E18_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x1EC0700)
#define A6F93B1E803A2E18_FC3208D7B8C7EE04_1_OFFSET UNITYSDK_OFFSET(0x1EC0470)
#define A6F93B1E803A2E18_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x1EC0500)

inline static constexpr unsigned int A6F93B1E803A2E18_TypeDefinitionIndex = 6774;

struct alignas(4) A6F93B1E803A2E18
{
	::System::Int32 EA7CFF2710F5BB56; // 0x10
	::System::Int32 A61806D1B8904679; // 0x14

	::System::Boolean A83BD201FCBCE144(::System::Text::StringBuilder* B076D6911116907A)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + A6F93B1E803A2E18_A83BD201FCBCE144_OFFSET))(this, B076D6911116907A);
	}

	::System::Int32 B996A70283B60FAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A6F93B1E803A2E18_B996A70283B60FAC_OFFSET))(this);
	}

	/*
	::System::Boolean FC3208D7B8C7EE04(::A6F93B1E803A2E18 BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A6F93B1E803A2E18))((::PBYTE)hIl2Cpp + A6F93B1E803A2E18_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
	*/

	::System::Boolean FC3208D7B8C7EE04_1(::System::Object* A86A90C31A146E9C)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + A6F93B1E803A2E18_FC3208D7B8C7EE04_1_OFFSET))(this, A86A90C31A146E9C);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A6F93B1E803A2E18_EA28CF291EBB2931_OFFSET))(this);
	}
};
