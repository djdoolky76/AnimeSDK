#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define E9AEC7546C4953BB_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28A99C0)
#define E9AEC7546C4953BB__CTOR_OFFSET UNITYSDK_OFFSET(0x28A9AD0)

inline static constexpr unsigned int E9AEC7546C4953BB_TypeDefinitionIndex = 16213;

class E9AEC7546C4953BB : public ::ABEBA93AD61764EF
{
public:
	::System::Single F3567BEF07D93DBD; // 0x18
	::UnityEngine::Vector2 EC81B8C705C9A7A0; // 0x1C
	::System::Byte _padding0[0x4];
	::UnityEngine::Texture2D* ECD87E53E69DCF99; // 0x28
	::UnityEngine::Texture2D* E58AE08BFB49E4D7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9AEC7546C4953BB__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::E9AEC7546C4953BB* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E9AEC7546C4953BB*))((::PBYTE)hIl2Cpp + E9AEC7546C4953BB_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
