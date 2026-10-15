#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KBIMMCCLOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82B30)

inline static constexpr unsigned int KBIMMCCLOJM_TypeDefinitionIndex = 42954;

	class KBIMMCCLOJM : public ::System::Object
	{
	public:
		::System::String* KBBBANGNNON; // 0x10
		::System::UInt32 FALHGPLBOMC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIMMCCLOJM_CTOR_OFFSET))(this);
		}

	};
