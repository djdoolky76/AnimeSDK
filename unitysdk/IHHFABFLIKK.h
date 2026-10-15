#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMNGHKMHDOK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IHHFABFLIKK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IHHFABFLIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x16411ED0)
#define IHHFABFLIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x16411EC0)

inline static constexpr unsigned int IHHFABFLIKK_TypeDefinitionIndex = 56238;

	class IHHFABFLIKK : public ::NMNGHKMHDOK
	{
	public:
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x10
		::System::String* GPDEENLPHIJ; // 0x18
		::RPG::GameCore::FixPoint CMAAEMCBIMH; // 0x20
		::RPG::GameCore::FixPoint JGNABFNOAJB; // 0x28
		::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x30
		static ::IHHFABFLIKK** StaticGet_HGLIFJGHADE()
		{
			return (::IHHFABFLIKK**)UnitySDK::FromName("", "IHHFABFLIKK")->GetStaticField(0x32820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHFABFLIKK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHFABFLIKK_CCTOR_OFFSET))();
		}

	};
