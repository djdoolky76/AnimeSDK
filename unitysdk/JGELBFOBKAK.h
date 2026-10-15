#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define JGELBFOBKAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F4FA0)
#define JGELBFOBKAK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6F4F60)

	class JGELBFOBKAK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELBFOBKAK_CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGELBFOBKAK_INITIALIZE_OFFSET))(this);
		}

	};
