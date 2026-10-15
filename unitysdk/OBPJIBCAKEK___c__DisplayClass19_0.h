#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
class DFBAHCICJNE;

#define OBPJIBCAKEK___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C49AD50)
#define OBPJIBCAKEK___C__DISPLAYCLASS19_0__GETBLOCKITEMBYNAMEORHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1C49DDE0)

inline static constexpr unsigned int OBPJIBCAKEK___c__DisplayClass19_0_TypeDefinitionIndex = 41424;

	class OBPJIBCAKEK___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::RPG::Client::ByteHash16 hash; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBlockItemByNameOrHash_b__0(::DFBAHCICJNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFBAHCICJNE*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK___C__DISPLAYCLASS19_0__GETBLOCKITEMBYNAMEORHASH_B__0_OFFSET))(this, a1);
		}

	};
