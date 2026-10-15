#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC93C270)
#define RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC93C2B0)

namespace RPG::Client::CatGod
{
	inline static constexpr unsigned int CatGodGetShelfWindow___c_TypeDefinitionIndex = 81655;

	class CatGodGetShelfWindow___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.CatGod", "<>c")->GetStaticField(0x69790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CATGOD_CATGODGETSHELFWINDOW___C_CTOR_OFFSET))(this);
		}

	};
}
