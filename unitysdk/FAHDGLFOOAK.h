#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define FAHDGLFOOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA63260)

inline static constexpr unsigned int FAHDGLFOOAK_TypeDefinitionIndex = 43712;

	class FAHDGLFOOAK : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHDGLFOOAK_CTOR_OFFSET))(this);
		}

	};
