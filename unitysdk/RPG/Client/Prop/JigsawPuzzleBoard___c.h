#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE7743B0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE7743F0)
#define RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CREATEMOVEABLEITEMFROMUI_B__33_0_OFFSET UNITYSDK_OFFSET(0xE774400)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int JigsawPuzzleBoard___c_TypeDefinitionIndex = 81386;

	class JigsawPuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x5A5C0);
		}

		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x5A5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Void _CreateMoveableItemFromUI_b__33_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_JIGSAWPUZZLEBOARD___C__CREATEMOVEABLEITEMFROMUI_B__33_0_OFFSET))(this);
		}

	};
}
