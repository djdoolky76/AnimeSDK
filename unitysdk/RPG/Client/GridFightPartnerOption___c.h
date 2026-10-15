#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1C7410)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1C7450)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C___GETSHOWTRAITCONFIGS_B__10_0_OFFSET UNITYSDK_OFFSET(0xD1C7460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerOption___c_TypeDefinitionIndex = 65404;

	class GridFightPartnerOption___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B650);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetShowTraitConfigs_b__10_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C___GETSHOWTRAITCONFIGS_B__10_0_OFFSET))(this, a1);
		}

	};
}
