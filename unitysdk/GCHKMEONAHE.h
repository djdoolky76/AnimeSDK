#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define GCHKMEONAHE_CTOR_OFFSET UNITYSDK_OFFSET(0x15971150)

	class GCHKMEONAHE : public ::System::Object
	{
	public:
		::RPG::MVector3 DMNCKGBNJGC; // 0x10
		::RPG::MVector3 ACGINICEHML; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHKMEONAHE_CTOR_OFFSET))(this);
		}

	};
