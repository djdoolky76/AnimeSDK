#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIECHPAKPFL;

#define BHOGEICMOND_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BADF0)

	class BHOGEICMOND : public ::System::Object
	{
	public:
		::HIECHPAKPFL* KNAOAEGHJBA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHOGEICMOND_CTOR_OFFSET))(this);
		}

	};
