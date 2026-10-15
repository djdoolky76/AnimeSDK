#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PIHIPJCGCDB_CTOR_OFFSET UNITYSDK_OFFSET(0xC262050)

	class PIHIPJCGCDB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHIPJCGCDB_CTOR_OFFSET))(this);
		}

	};
