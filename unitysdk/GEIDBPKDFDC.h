#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GEIDBPKDFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x17CDB800)

inline static constexpr unsigned int GEIDBPKDFDC_TypeDefinitionIndex = 71005;

	class GEIDBPKDFDC : public ::System::Object
	{
	public:
		::System::Boolean DOJLEMPEBDI; // 0x10
		::System::Boolean OCCFDKHILOP; // 0x11
		::System::Boolean LLPKBMADFLH; // 0x12
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector2 ODFEMKDMJCK; // 0x14
		::System::Boolean KEKMKCBCMGG; // 0x1C
		::System::Boolean ABFIGOPLJEB; // 0x1D
		::System::Boolean DNJPLJFGEFK; // 0x1E
		::System::Boolean FBLFFCNGHIH; // 0x1F
		::UnityEngine::Vector2 COKJLONOOFK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDBPKDFDC_CTOR_OFFSET))(this);
		}

	};
