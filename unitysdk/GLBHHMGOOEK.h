#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GLBHHMGOOEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA837D0)

inline static constexpr unsigned int GLBHHMGOOEK_TypeDefinitionIndex = 43261;

	class GLBHHMGOOEK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBHHMGOOEK_CTOR_OFFSET))(this);
		}

	};
