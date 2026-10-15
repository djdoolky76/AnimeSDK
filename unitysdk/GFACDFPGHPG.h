#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBHBHNNFDCM;

#define GFACDFPGHPG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159E4CC0)
#define GFACDFPGHPG_CTOR_OFFSET UNITYSDK_OFFSET(0x159E5020)

	class GFACDFPGHPG : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFACDFPGHPG_CTOR_OFFSET))(this);
		}

		static ::PBHBHNNFDCM* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::PBHBHNNFDCM*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GFACDFPGHPG_BPLPBPMEODA_OFFSET))(a1);
		}

	};
