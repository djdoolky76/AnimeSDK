#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKLHNHFCDBL;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDFFE800)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0xE011350)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0xE011380)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0xE011580)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET UNITYSDK_OFFSET(0xE0115A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET UNITYSDK_OFFSET(0xE0114E0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET UNITYSDK_OFFSET(0xE011510)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass30_0_TypeDefinitionIndex = 67800;

	class RogueTournModule___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Action* __9__5; // 0x18
		::System::Action* __9__4; // 0x20
		::RPG::Client::RogueTournModule* __4__this; // 0x28
		::RPG::Client::Promises::Promise* reqPromise; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__0(::GKLHNHFCDBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKLHNHFCDBL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__4(::GKLHNHFCDBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKLHNHFCDBL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__5(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET))(this, a1);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS30_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET))(this);
		}

	};
}
