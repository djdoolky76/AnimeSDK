#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BFLILCJMKDB_CTOR_OFFSET UNITYSDK_OFFSET(0xB173230)

	class BFLILCJMKDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFLILCJMKDB_CTOR_OFFSET))(this);
		}

	};
