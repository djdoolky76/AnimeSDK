#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class BDPDNAECJII;
class HNLKNLJBHDD;
class IAANKDNLKHL;

#define BDPDNAECJII___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5765A0)
#define BDPDNAECJII___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1C588B80)

inline static constexpr unsigned int BDPDNAECJII___c__DisplayClass18_0_TypeDefinitionIndex = 37161;

	class BDPDNAECJII___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::BDPDNAECJII* __4__this; // 0x10
		::IAANKDNLKHL* brickSpawner; // 0x18
		::HNLKNLJBHDD* playerEntity; // 0x20
		::System::UInt32 spawnBrickTypeID; // 0x28
		::RPG::MVector2 spawnPosition; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _TrySpawnBrickOnServer_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPDNAECJII___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET))(this);
		}

	};
