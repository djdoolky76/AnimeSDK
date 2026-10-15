#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
class DFBAHCICJNE;

#define OBPJIBCAKEK___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C49ABA0)
#define OBPJIBCAKEK___C__DISPLAYCLASS18_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET UNITYSDK_OFFSET(0x1C49DD10)

inline static constexpr unsigned int OBPJIBCAKEK___c__DisplayClass18_0_TypeDefinitionIndex = 41423;

	class OBPJIBCAKEK___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::Client::ByteHash16 hash; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPJIBCAKEK___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsFileExistByShortPathHash_b__0(::DFBAHCICJNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFBAHCICJNE*))((::PBYTE)hIl2Cpp + OBPJIBCAKEK___C__DISPLAYCLASS18_0__ISFILEEXISTBYSHORTPATHHASH_B__0_OFFSET))(this, a1);
		}

	};
