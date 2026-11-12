#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMNGHKMHDOK.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class IHHFABFLIKK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define IHHFABFLIKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x173D5F90)
#define IHHFABFLIKK_CTOR_OFFSET UNITYSDK_OFFSET(0x173D5F80)

inline static constexpr unsigned int IHHFABFLIKK_TypeDefinitionIndex = 57450;

	class IHHFABFLIKK : public ::NMNGHKMHDOK
	{
	public:
		::System::String* GPDEENLPHIJ; // 0x10
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
		::RPG::GameCore::FixPoint JGNABFNOAJB; // 0x20
		::RPG::GameCore::FixPoint PIDECKOBKIJ; // 0x28
		::RPG::GameCore::FixPoint CMAAEMCBIMH; // 0x30
		static ::IHHFABFLIKK** StaticGet_HGLIFJGHADE()
		{
			return (::IHHFABFLIKK**)UnitySDK::FromName("", "IHHFABFLIKK")->GetStaticField(0x1C450);
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
