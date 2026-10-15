#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GEIDBPKDFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x159CE3D0)

inline static constexpr unsigned int GEIDBPKDFDC_TypeDefinitionIndex = 69052;

	class GEIDBPKDFDC : public ::System::Object
	{
	public:
		::System::Boolean DOJLEMPEBDI; // 0x10
		::System::Boolean KEKMKCBCMGG; // 0x11
		::System::Boolean DNJPLJFGEFK; // 0x12
		::System::Boolean ABFIGOPLJEB; // 0x13
		::UnityEngine::Vector2 ODFEMKDMJCK; // 0x14
		::UnityEngine::Vector2 COKJLONOOFK; // 0x1C
		::System::Boolean FBLFFCNGHIH; // 0x24
		::System::Boolean LLPKBMADFLH; // 0x25
		::System::Boolean OCCFDKHILOP; // 0x26
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDBPKDFDC_CTOR_OFFSET))(this);
		}

	};
