#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCCAJMENCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB611FE0)

	class LCCAJMENCKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCCAJMENCKJ_CTOR_OFFSET))(this);
		}

	};
