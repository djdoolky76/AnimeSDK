#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CENKIMNOOFH_CTOR_OFFSET UNITYSDK_OFFSET(0xC9EC480)

inline static constexpr unsigned int CENKIMNOOFH_TypeDefinitionIndex = 67782;

	class CENKIMNOOFH : public ::System::Object
	{
	public:
		::System::String* StaticDataJsonStr; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKIMNOOFH_CTOR_OFFSET))(this);
		}

	};
