#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCGAEPCCCPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FBFA0)

inline static constexpr unsigned int LCGAEPCCCPB_TypeDefinitionIndex = 42147;

	class LCGAEPCCCPB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGAEPCCCPB_CTOR_OFFSET))(this);
		}

	};
