#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LKMLFIAKFOO;
namespace System { class Action; }

#define LKMLFIAKFOO_MCCDJAKHEDK_PJDHJIHOLPP_OFFSET UNITYSDK_OFFSET(0x12D39AE0)
#define LKMLFIAKFOO_MCCDJAKHEDK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D39AD0)

inline static constexpr unsigned int LKMLFIAKFOO_MCCDJAKHEDK_TypeDefinitionIndex = 43604;

class LKMLFIAKFOO_MCCDJAKHEDK : public ::System::Object
{
public:
	::LKMLFIAKFOO* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18
	::System::Int32 ANJFMPBLEHI; // 0x20
	::System::Int32 BFBCMALKEIE; // 0x24
	::Foundation::ViewObject::GroupMemberIdentifier MGMDLMBEDJF; // 0x28
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MCCDJAKHEDK__CTOR_OFFSET))(this);
	}

	::System::Void PJDHJIHOLPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKMLFIAKFOO_MCCDJAKHEDK_PJDHJIHOLPP_OFFSET))(this);
	}
};
