#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define CEFOCMCFGBK_CTOR_OFFSET UNITYSDK_OFFSET(0xD0F14F0)

inline static constexpr unsigned int CEFOCMCFGBK_TypeDefinitionIndex = 80466;

	class CEFOCMCFGBK : public ::System::Object
	{
	public:
		::System::Object* AOFJMKMBJJF; // 0x10
		::System::Boolean LLLGHJHHHLK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEFOCMCFGBK_CTOR_OFFSET))(this);
		}

	};
