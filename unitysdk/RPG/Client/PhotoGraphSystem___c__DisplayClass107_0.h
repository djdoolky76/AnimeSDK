#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJMHAAOPPOP;
namespace RPG::Client { class PhotoGraphSystem; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB0DB80)
#define RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0___NOTIFYSHOTNONPOSTPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0xDB11E60)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphSystem___c__DisplayClass107_0_TypeDefinitionIndex = 60919;

	class PhotoGraphSystem___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* targetAimList; // 0x10
		::DJMHAAOPPOP* pEnvSystem; // 0x18
		::RPG::Client::PhotoGraphSystem* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0_CTOR_OFFSET))(this);
		}

		::System::Void __NotifyShotNonPostProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHSYSTEM___C__DISPLAYCLASS107_0___NOTIFYSHOTNONPOSTPROCESS_B__0_OFFSET))(this);
		}

	};
}
