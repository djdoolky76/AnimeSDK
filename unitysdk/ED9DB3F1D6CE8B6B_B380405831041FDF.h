#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A5F7BD813DE60ED2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputBinding.h"

namespace System { class String; }

#define ED9DB3F1D6CE8B6B_B380405831041FDF_AFBA15BBB0C936B6_OFFSET UNITYSDK_OFFSET(0x3FDA0A0)
#define ED9DB3F1D6CE8B6B_B380405831041FDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ED9DB3F1D6CE8B6B_B380405831041FDF_TypeDefinitionIndex = 14409;

class ED9DB3F1D6CE8B6B_B380405831041FDF : public ::System::Object
{
public:
	::A5F7BD813DE60ED2<::UnityEngine::InputSystem::InputBinding> E57D73255644B6E0; // 0x10
	::System::Byte _padding0[0x8];
	::System::Int32 B4E69C25914B875C; // 0x20
	::System::Byte _padding1[0x4];
	::Il2CppArray<::System::String*>* E511C59F2383B23A; // 0x28
	::System::Int32 A192330958ED2BE6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_B380405831041FDF__CTOR_OFFSET))(this);
	}

	::System::String* AFBA15BBB0C936B6(::System::String* F78222C36D438E76)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ED9DB3F1D6CE8B6B_B380405831041FDF_AFBA15BBB0C936B6_OFFSET))(this, F78222C36D438E76);
	}
};
