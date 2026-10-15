#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGCDGKOBMK.h"

#define NECJDDBANEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C572FF0)

	class NECJDDBANEJ : public ::DIGCDGKOBMK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECJDDBANEJ_CTOR_OFFSET))(this);
		}

	};
