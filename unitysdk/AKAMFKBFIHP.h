#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define AKAMFKBFIHP_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC8C10)

	class AKAMFKBFIHP : public ::System::Object
	{
	public:
		::System::String* KDIOGNHBJNP; // 0x10
		::System::Boolean DFEBPEKDHKM; // 0x18
		::System::Boolean HIILLAKHNIB; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMFKBFIHP_CTOR_OFFSET))(this);
		}

	};
