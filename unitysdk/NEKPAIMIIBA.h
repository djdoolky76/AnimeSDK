#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define NEKPAIMIIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x16FE9270)

inline static constexpr unsigned int NEKPAIMIIBA_TypeDefinitionIndex = 58773;

	class NEKPAIMIIBA : public ::System::Object
	{
	public:
		::System::Single EKMEAGHNCDH; // 0x10
		::System::Boolean DNJPLJFGEFK; // 0x14
		::System::Boolean KEKMKCBCMGG; // 0x15
		::System::Boolean HAIJMANJPFL; // 0x16
		::System::Boolean LLPKBMADFLH; // 0x17
		::UnityEngine::Vector2 ODFEMKDMJCK; // 0x18
		::UnityEngine::Vector2 BACEJJFFPOL; // 0x20
		::System::Boolean LKFPCBFPPGP; // 0x28
		::System::Boolean ABFIGOPLJEB; // 0x29
		::System::Boolean OCCFDKHILOP; // 0x2A
		::System::Boolean FBLFFCNGHIH; // 0x2B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEKPAIMIIBA_CTOR_OFFSET))(this);
		}

	};
