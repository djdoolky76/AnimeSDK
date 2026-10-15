#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define LNEMEKHMGLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C426EC0)

	class LNEMEKHMGLA : public ::System::Attribute
	{
	public:
		::System::Int32 OJMLFJCDNPC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNEMEKHMGLA_CTOR_OFFSET))(this);
		}

	};
