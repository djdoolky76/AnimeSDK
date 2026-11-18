#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_COMICPARTLAYOUTOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5E200)

namespace MoleMole
{
	inline static constexpr unsigned int ComicPartLayoutOverride_TypeDefinitionIndex = 32217;

	class ComicPartLayoutOverride : public ::System::Object
	{
	public:
		::MoleMole::ComicImgPart partType; // 0x10
		::UnityEngine::Vector2 imgPosDelta; // 0x14
		::UnityEngine::Vector2 imgSizeDelta; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICPARTLAYOUTOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
