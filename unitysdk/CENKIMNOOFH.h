#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CENKIMNOOFH_CTOR_OFFSET UNITYSDK_OFFSET(0x18828020)

inline static constexpr unsigned int CENKIMNOOFH_TypeDefinitionIndex = 69727;

	class CENKIMNOOFH : public ::System::Object
	{
	public:
		::System::String* StaticDataJsonStr; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENKIMNOOFH_CTOR_OFFSET))(this);
		}

	};
