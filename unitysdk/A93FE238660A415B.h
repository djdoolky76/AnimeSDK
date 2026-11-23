#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Cubemap; }

#define A93FE238660A415B_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2892FF0)
#define A93FE238660A415B__CTOR_OFFSET UNITYSDK_OFFSET(0x28931E0)

inline static constexpr unsigned int A93FE238660A415B_TypeDefinitionIndex = 16187;

class A93FE238660A415B : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Cubemap* F83E1D466F627FD7; // 0x18
	::System::Single A8F4AEFAE98EE9C4; // 0x20
	::UnityEngine::E46B881AA2636190 FB8A2CA1ECE8D685; // 0x24
	::UnityEngine::E46B881AA2636190 F5CCBABD55FFEA06; // 0x34
	::System::Single FC5439D6FE609F25; // 0x44
	::System::Single B8E05E9AB8880B95; // 0x48
	::System::Single EC886CF00BC355E7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A93FE238660A415B__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::A93FE238660A415B* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A93FE238660A415B*))((::PBYTE)hIl2Cpp + A93FE238660A415B_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
