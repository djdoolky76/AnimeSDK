#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIAvatarGraphics; }

#define BJCLNMMLIPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15079AC0)

inline static constexpr unsigned int BJCLNMMLIPE_TypeDefinitionIndex = 80740;

class BJCLNMMLIPE : public ::System::Object
{
public:
	::MoleMole::UIAvatarGraphics* OJPJLNJOAAB; // 0x10
	::UnityEngine::Quaternion BMPBCDMPJLN; // 0x18
	::UnityEngine::Vector2 JKLHBAJCHHO; // 0x28
	::UnityEngine::Quaternion HENABMNOHBO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJCLNMMLIPE__CTOR_OFFSET))(this);
	}
};
