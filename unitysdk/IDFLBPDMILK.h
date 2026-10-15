#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IDFLBPDMILK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB075B0)

inline static constexpr unsigned int IDFLBPDMILK_TypeDefinitionIndex = 42165;

	class IDFLBPDMILK : public ::System::Object
	{
	public:
		::System::String* JIHMFHEJPDC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDFLBPDMILK_CTOR_OFFSET))(this);
		}

	};
