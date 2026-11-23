#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F5BB19EB9B71F1C0_B6813AD151D548FB_FA1EC17C0C6C478B_OFFSET UNITYSDK_OFFSET(0x3A80890)
#define F5BB19EB9B71F1C0_B6813AD151D548FB__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5BB19EB9B71F1C0_B6813AD151D548FB_TypeDefinitionIndex = 12002;

class F5BB19EB9B71F1C0_B6813AD151D548FB : public ::System::Object
{
public:
	::System::String* B083BE7841B347C4; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_B6813AD151D548FB__CTOR_OFFSET))(this);
	}

	::System::Void FA1EC17C0C6C478B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5BB19EB9B71F1C0_B6813AD151D548FB_FA1EC17C0C6C478B_OFFSET))(this);
	}
};
