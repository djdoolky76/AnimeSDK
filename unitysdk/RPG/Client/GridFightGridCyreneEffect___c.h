#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD191020)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD191060)
#define RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CANCASTER_B__5_0_OFFSET UNITYSDK_OFFSET(0xD191070)

namespace RPG::Client
{
	class GridFightGridCyreneEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D630);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6D638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCaster_b__5_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDCYRENEEFFECT___C__CANCASTER_B__5_0_OFFSET))(this, a1);
		}

	};
}
