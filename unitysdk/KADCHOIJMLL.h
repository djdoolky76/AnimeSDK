#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KADCHOIJMLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7A4A0)

inline static constexpr unsigned int KADCHOIJMLL_TypeDefinitionIndex = 42348;

	class KADCHOIJMLL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADCHOIJMLL_CTOR_OFFSET))(this);
		}

	};
