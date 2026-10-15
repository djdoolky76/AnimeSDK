#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
class MDOLOOKKHJM;

#define FLAINONONFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C623110)

	class FLAINONONFA : public ::Entitas::Systems
	{
	public:
		::System::Void _ctor(::MDOLOOKKHJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDOLOOKKHJM*))((::PBYTE)hIl2Cpp + FLAINONONFA_CTOR_OFFSET))(this, a1);
		}

	};
