#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJCHKDLALDN;

#define OKEBGEBIPNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7D0A90)

	class OKEBGEBIPNE : public ::System::Object
	{
	public:
		::CJCHKDLALDN* CJJMDMOCPDJ; // 0x10
		::CJCHKDLALDN* OIBCHBJCHJE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBGEBIPNE_CTOR_OFFSET))(this);
		}

	};
