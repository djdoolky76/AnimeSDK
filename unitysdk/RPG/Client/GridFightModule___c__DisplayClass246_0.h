#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGIENOHBMJ;
namespace RPG::Client { class GridFightModule; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBF7650)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__0_OFFSET UNITYSDK_OFFSET(0xDC03050)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__1_OFFSET UNITYSDK_OFFSET(0xDC030D0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__2_OFFSET UNITYSDK_OFFSET(0xDC03250)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__3_OFFSET UNITYSDK_OFFSET(0xDC031B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c__DisplayClass246_0_TypeDefinitionIndex = 66423;

	class GridFightModule___c__DisplayClass246_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* __9__3; // 0x10
		::System::Action* callback; // 0x18
		::RPG::Client::GridFightModule* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryGetCurDataByCdn_b__0(::IHGIENOHBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHGIENOHBMJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__0_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__1_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__3_OFFSET))(this, a1);
		}

		::System::Void __TryGetCurDataByCdn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__DISPLAYCLASS246_0___TRYGETCURDATABYCDN_B__2_OFFSET))(this);
		}

	};
}
