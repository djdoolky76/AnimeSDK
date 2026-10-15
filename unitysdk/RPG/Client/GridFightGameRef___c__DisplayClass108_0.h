#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCGFCHPPIDH;
namespace RPG::Client { class GridFightGameRef; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD164220)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__REQINTERECTDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD165100)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0_CTOR_OFFSET))(this);
		}

		::System::Void _ReqInterectData_b__0(::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::CCGFCHPPIDH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS108_0__REQINTERECTDATA_B__0_OFFSET))(this, a1);
		}

	};
}
