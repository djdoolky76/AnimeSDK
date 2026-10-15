#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AMBFOIOOKMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1556A590)

inline static constexpr unsigned int AMBFOIOOKMK_TypeDefinitionIndex = 64785;

	class AMBFOIOOKMK : public ::System::Object
	{
	public:
		::System::Int32 Version; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBFOIOOKMK_CTOR_OFFSET))(this);
		}

	};
