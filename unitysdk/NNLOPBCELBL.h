#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNLOPBCELBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C974760)

	class NNLOPBCELBL : public ::System::Object
	{
	public:
		::System::Single KIPAGNCANAJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLOPBCELBL_CTOR_OFFSET))(this);
		}

	};
