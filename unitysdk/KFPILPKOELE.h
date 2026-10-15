#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OODEOHIDMEG;

#define KFPILPKOELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB80C0)

	class KFPILPKOELE : public ::System::Object
	{
	public:
		::OODEOHIDMEG* EJJOKPFJBDE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFPILPKOELE_CTOR_OFFSET))(this);
		}

	};
