#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NORENAME_CTOR_OFFSET UNITYSDK_OFFSET(0x209778F0)

inline static constexpr unsigned int NoRename_TypeDefinitionIndex = 5601;

	class NoRename : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NORENAME_CTOR_OFFSET))(this);
		}

	};
