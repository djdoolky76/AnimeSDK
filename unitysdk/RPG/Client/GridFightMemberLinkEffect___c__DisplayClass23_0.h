#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC30E60)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT___C__DISPLAYCLASS23_0__HIDE_B__0_OFFSET UNITYSDK_OFFSET(0x1CC31040)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberLinkEffect___c__DisplayClass23_0_TypeDefinitionIndex = 66019;

	class GridFightMemberLinkEffect___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _Hide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKEFFECT___C__DISPLAYCLASS23_0__HIDE_B__0_OFFSET))(this);
		}

	};
}
