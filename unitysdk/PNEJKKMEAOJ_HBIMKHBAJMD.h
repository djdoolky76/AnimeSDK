#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define PNEJKKMEAOJ_HBIMKHBAJMD_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1C2C01A0)
#define PNEJKKMEAOJ_HBIMKHBAJMD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C2C0200)
#define PNEJKKMEAOJ_HBIMKHBAJMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C0190)

inline static constexpr unsigned int PNEJKKMEAOJ_HBIMKHBAJMD_TypeDefinitionIndex = 56666;

class PNEJKKMEAOJ_HBIMKHBAJMD : public ::System::Object
{
public:
	::UnityEngine::GameObject* OKFPMFDHJOM; // 0x10
	::Foundation::AssetPath BKEIPAIOKEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_HBIMKHBAJMD__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Foundation::AssetPath OMMOFJOLHNN, ::UnityEngine::GameObject* JHINPKKNJIJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_HBIMKHBAJMD_BBOMJDBNHIC_OFFSET))(this, OMMOFJOLHNN, JHINPKKNJIJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEJKKMEAOJ_HBIMKHBAJMD_PHOADBJGFBE_OFFSET))(this);
	}
};
