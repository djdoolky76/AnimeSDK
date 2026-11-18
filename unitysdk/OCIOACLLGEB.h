#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDDJDIGKCMD.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonBase; }

#define OCIOACLLGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5AF60)

inline static constexpr unsigned int OCIOACLLGEB_TypeDefinitionIndex = 85308;

class OCIOACLLGEB : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UIButtonBase* IHHANMBFFNC; // 0x10
	::UnityEngine::GameObject* LKFMKNGABAE; // 0x18
	::System::Boolean LOFGGHHBLBJ; // 0x20
	::System::Boolean NDOLAFGMNJL; // 0x21
	::HDDJDIGKCMD DOPMEJJOMAL; // 0x22
	::System::Boolean KOFLPBEEPEH; // 0x24
	::System::Boolean OGCMBAJABED; // 0x25
	::System::Boolean PHEEOFBPPLG; // 0x26

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCIOACLLGEB__CTOR_OFFSET))(this);
	}
};
