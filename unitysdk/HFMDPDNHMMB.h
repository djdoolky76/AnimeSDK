#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"
class JNHEPGLMAFE;

#define HFMDPDNHMMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C664D90)

	class HFMDPDNHMMB : public ::Entitas::Systems
	{
	public:
		::System::Void _ctor(::JNHEPGLMAFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNHEPGLMAFE*))((::PBYTE)hIl2Cpp + HFMDPDNHMMB_CTOR_OFFSET))(this, a1);
		}

	};
