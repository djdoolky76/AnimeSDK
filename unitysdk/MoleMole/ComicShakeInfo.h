#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ComicImgPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_COMICSHAKEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2FC10)

namespace MoleMole
{
	inline static constexpr unsigned int ComicShakeInfo_TypeDefinitionIndex = 32213;

	class ComicShakeInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 shakePivot; // 0x10
		::MoleMole::ComicImgPart imgTarget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSHAKEINFO__CTOR_OFFSET))(this);
		}
	};
}
