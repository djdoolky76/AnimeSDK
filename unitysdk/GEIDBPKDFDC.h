#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GEIDBPKDFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x159D99D0)

	class GEIDBPKDFDC : public ::System::Object
	{
	public:
		::System::Boolean OCCFDKHILOP; // 0x10
		::System::Boolean LLPKBMADFLH; // 0x11
		::System::Boolean DOJLEMPEBDI; // 0x12
		::System::Boolean FBLFFCNGHIH; // 0x13
		::System::Boolean DNJPLJFGEFK; // 0x14
		::System::Boolean ABFIGOPLJEB; // 0x15
		::System::Boolean KEKMKCBCMGG; // 0x16
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 COKJLONOOFK; // 0x18
		::UnityEngine::Vector2 ODFEMKDMJCK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDBPKDFDC_CTOR_OFFSET))(this);
		}

	};
