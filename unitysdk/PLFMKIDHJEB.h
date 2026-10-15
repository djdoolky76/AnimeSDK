#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDILGBNCFNM;

#define PLFMKIDHJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F63F0)

	class PLFMKIDHJEB : public ::System::Object
	{
	public:
		::DDILGBNCFNM* EKEFPDFCNOM; // 0x10
		::System::Int32 EHDGNHHPNMK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLFMKIDHJEB_CTOR_OFFSET))(this);
		}

	};
