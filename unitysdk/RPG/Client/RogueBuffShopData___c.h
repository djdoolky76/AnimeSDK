#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffShopItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEEB580)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDEEB5C0)
#define RPG_CLIENT_ROGUEBUFFSHOPDATA___C__SYNCITEM_B__0_0_OFFSET UNITYSDK_OFFSET(0xDEEB5D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffShopData___c_TypeDefinitionIndex = 67328;

	class RogueBuffShopData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueBuffShopItemData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::RogueBuffShopItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62E60);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x62E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SyncItem_b__0_0(::RPG::Client::RogueBuffShopItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueBuffShopItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSHOPDATA___C__SYNCITEM_B__0_0_OFFSET))(this, a1);
		}

	};
}
