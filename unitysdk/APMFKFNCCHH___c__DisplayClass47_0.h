#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APMFKFNCCHH;
namespace System { class String; }

#define APMFKFNCCHH___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16A1BC40)
#define APMFKFNCCHH___C__DISPLAYCLASS47_0___ONTEXTLOADED_B__0_OFFSET UNITYSDK_OFFSET(0x16A1FCD0)

inline static constexpr unsigned int APMFKFNCCHH___c__DisplayClass47_0_TypeDefinitionIndex = 75901;

	class APMFKFNCCHH___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::String* binaryAssetPath; // 0x10
		::APMFKFNCCHH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnTextLoaded_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APMFKFNCCHH___C__DISPLAYCLASS47_0___ONTEXTLOADED_B__0_OFFSET))(this);
		}

	};
