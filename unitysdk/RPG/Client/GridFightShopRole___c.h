#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD280410)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD280450)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__20_0_OFFSET UNITYSDK_OFFSET(0xD280460)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__42_0_OFFSET UNITYSDK_OFFSET(0xD280530)

namespace RPG::Client
{
	class GridFightShopRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E920);
		}

		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E928);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsTraitTracked_b__20_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__20_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _get_Traits_b__42_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__42_0_OFFSET))(this, a1);
		}

	};
}
