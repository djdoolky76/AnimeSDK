#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OFNKILCEOMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE49FA0)

	class OFNKILCEOMO : public ::System::Object
	{
	public:
		::System::String* BuildRefID; // 0x10
		::System::String* IsLikeStr; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNKILCEOMO_CTOR_OFFSET))(this);
		}

	};
