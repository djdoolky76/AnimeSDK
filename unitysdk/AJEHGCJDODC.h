#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"
class NJKFOJJDGGG;

#define AJEHGCJDODC_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB9780)

	class AJEHGCJDODC : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::NJKFOJJDGGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFOJJDGGG*))((::PBYTE)hIl2Cpp + AJEHGCJDODC_CTOR_OFFSET))(this, a1);
		}

	};
