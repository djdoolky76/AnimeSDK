#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define CPFFEHHFKGE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD2E20)

	class CPFFEHHFKGE : public ::System::Object
	{
	public:
		::System::String* ICDNCHJJDBH; // 0x10
		::System::String* FFJLJEFAGKB; // 0x18
		::System::UInt32 OIFPEADMMCD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFFEHHFKGE_CTOR_OFFSET))(this);
		}

	};
