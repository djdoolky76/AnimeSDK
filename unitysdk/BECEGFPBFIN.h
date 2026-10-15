#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BECEGFPBFIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1630D490)

	class BECEGFPBFIN : public ::System::Object
	{
	public:
		::System::UInt32 ECPHKFMFMDF; // 0x10
		::System::Int32 AHGLPBAJMOA; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECEGFPBFIN_CTOR_OFFSET))(this);
		}

	};
