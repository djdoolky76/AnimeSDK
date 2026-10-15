#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBLIHLMDEDB_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0xBADC5B0)

	class NBLIHLMDEDB : public ::System::Object
	{
	public:
		static ::System::Boolean MPLPCDODCKA(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NBLIHLMDEDB_MPLPCDODCKA_OFFSET))(a1, a2, a3);
		}

	};
