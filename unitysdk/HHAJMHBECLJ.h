#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;

#define HHAJMHBECLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15CB3FD0)
#define HHAJMHBECLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB3FC0)
#define HHAJMHBECLJ_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15CB3FB0)

	class HHAJMHBECLJ : public ::System::Object
	{
	public:
		::HEKHCLACHJE* _Delta_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAJMHBECLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEKHCLACHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKHCLACHJE*))((::PBYTE)hIl2Cpp + HHAJMHBECLJ_CTOR_1_OFFSET))(this, a1);
		}

		::HEKHCLACHJE* get_Delta()
		{
			return ((::HEKHCLACHJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHAJMHBECLJ_GET_DELTA_OFFSET))(this);
		}

	};
