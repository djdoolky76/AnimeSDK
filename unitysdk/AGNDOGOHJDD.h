#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AGNDOGOHJDD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF43CF0)

	class AGNDOGOHJDD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNDOGOHJDD_CTOR_OFFSET))(this);
		}

	};
