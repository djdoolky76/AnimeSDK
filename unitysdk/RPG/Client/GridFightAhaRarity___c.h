#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAHARARITY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA5DCE0)
#define RPG_CLIENT_GRIDFIGHTAHARARITY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA5DD20)
#define RPG_CLIENT_GRIDFIGHTAHARARITY___C__GETOWNEDAHA_B__28_0_OFFSET UNITYSDK_OFFSET(0xDA5DD30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAhaRarity___c_TypeDefinitionIndex = 66781;

	class GridFightAhaRarity___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AE20);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AE28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetOwnedAha_b__28_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAHARARITY___C__GETOWNEDAHA_B__28_0_OFFSET))(this, a1);
		}

	};
}
