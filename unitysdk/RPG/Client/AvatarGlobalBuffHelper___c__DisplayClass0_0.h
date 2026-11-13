#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LineUpCharacter; }

#define RPG_CLIENT_AVATARGLOBALBUFFHELPER___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C4DE0)
#define RPG_CLIENT_AVATARGLOBALBUFFHELPER___C__DISPLAYCLASS0_0__GETGLOBALBUFFPROVIDER_B__0_OFFSET UNITYSDK_OFFSET(0x1A4C5B40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarGlobalBuffHelper___c__DisplayClass0_0_TypeDefinitionIndex = 64189;

	class AvatarGlobalBuffHelper___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGlobalBuffProvider_b__0(::RPG::GameCore::LineUpCharacter* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LineUpCharacter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARGLOBALBUFFHELPER___C__DISPLAYCLASS0_0__GETGLOBALBUFFPROVIDER_B__0_OFFSET))(this, a1);
		}

	};
}
