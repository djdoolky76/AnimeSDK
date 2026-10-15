#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define LJDINJEOLCC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6E18E0)

	class LJDINJEOLCC : public ::System::Object
	{
	public:
		::System::String* ShareCode; // 0x10
		::PMDPEENJIHC* Base; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJDINJEOLCC_CTOR_OFFSET))(this);
		}

	};
