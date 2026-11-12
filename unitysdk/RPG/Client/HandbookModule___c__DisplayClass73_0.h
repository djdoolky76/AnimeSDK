#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDD31D10)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0__GETMATERIALGUIDEIDLISTBYAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xDD38D80)
#define RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0__GETMATERIALGUIDEIDLISTBYAVATAR_B__1_OFFSET UNITYSDK_OFFSET(0xDD38E20)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookModule___c__DisplayClass73_0_TypeDefinitionIndex = 67561;

	class HandbookModule___c__DisplayClass73_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* world_materials; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMaterialGuideIDListByAvatar_b__0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0__GETMATERIALGUIDEIDLISTBYAVATAR_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetMaterialGuideIDListByAvatar_b__1(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMODULE___C__DISPLAYCLASS73_0__GETMATERIALGUIDEIDLISTBYAVATAR_B__1_OFFSET))(this, a1);
		}

	};
}
