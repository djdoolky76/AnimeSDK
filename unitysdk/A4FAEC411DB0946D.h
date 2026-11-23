#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace UnityEngine { class Texture2D; }

#define A4FAEC411DB0946D_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2864110)
#define A4FAEC411DB0946D__CTOR_OFFSET UNITYSDK_OFFSET(0x28643B0)

inline static constexpr unsigned int A4FAEC411DB0946D_TypeDefinitionIndex = 16044;

class A4FAEC411DB0946D : public ::ABEBA93AD61764EF
{
public:
	::System::Single E45910464C83436D; // 0x18
	::System::Byte _padding0[0x4];
	::UnityEngine::Texture2D* E5B8C9B7AA886008; // 0x20
	::UnityEngine::Texture2D* EF89BC27DE8C14D3; // 0x28
	::System::Single F363E44E74C16B06; // 0x30
	::System::Single AC743727D480B38A; // 0x34
	::System::Single EE64398D7616F09D; // 0x38
	::System::Single F09EDB639AE23328; // 0x3C
	::UnityEngine::E46B881AA2636190 A3AE6638ED429EBD; // 0x40
	::System::Single B2213CC0E6318A79; // 0x50
	::System::Single B7EAF50A2D618B64; // 0x54
	::UnityEngine::E46B881AA2636190 F897FCA4E54A8D93; // 0x58
	::System::Single E7F31DA3C2C379F1; // 0x68
	::System::Single ECD6720336EBEE31; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4FAEC411DB0946D__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::A4FAEC411DB0946D* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::A4FAEC411DB0946D*))((::PBYTE)hIl2Cpp + A4FAEC411DB0946D_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
