#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
class HNLKNLJBHDD;
class IAANKDNLKHL;

#define BDPDNAECJII___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726260)
#define BDPDNAECJII___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1D738890)

inline static constexpr unsigned int BDPDNAECJII___c__DisplayClass18_0_TypeDefinitionIndex = 38089;

	class BDPDNAECJII___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::BDPDNAECJII* __4__this; // 0x10
		::IAANKDNLKHL* brickSpawner; // 0x18
		::HNLKNLJBHDD* playerEntity; // 0x20
		::RPG::MVector2 spawnPosition; // 0x28
		::System::UInt32 spawnBrickTypeID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _TrySpawnBrickOnServer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET))(this);
		}

	};
