#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define OLFCGKCAPMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBF03850)

	class OLFCGKCAPMF : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLFCGKCAPMF_CTOR_OFFSET))(this);
		}

	};
