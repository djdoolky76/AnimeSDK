#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueReadType.h"
namespace System { class String; }

#define MFDEBKGHEIO_KICKOCALNHC_OFFSET UNITYSDK_OFFSET(0x1D1569D0)

	struct alignas(8) MFDEBKGHEIO
	{
		::RPG::GameCore::DynamicValueReadType GMPGDEINODK; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AIBNIIADGOA; // 0x18
		::System::Int32 GMDBHJKEAEI; // 0x20
		/*
		static ::MFDEBKGHEIO KICKOCALNHC(::System::String* a1)
		{
			return ((::MFDEBKGHEIO(*)(::System::String*))((::PBYTE)hIl2Cpp + MFDEBKGHEIO_KICKOCALNHC_OFFSET))(a1);
		}
		*/

	};
