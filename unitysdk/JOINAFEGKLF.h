#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define JOINAFEGKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0584A0)

	class JOINAFEGKLF : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOINAFEGKLF_CTOR_OFFSET))(this);
		}

	};
