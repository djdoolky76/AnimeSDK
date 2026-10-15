#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JNEMCHKBEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA6540)

	class JNEMCHKBEPJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEMCHKBEPJ_CTOR_OFFSET))(this);
		}

	};
