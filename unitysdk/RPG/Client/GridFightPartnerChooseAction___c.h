#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1CE3E0)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1CE420)
#define RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__SYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0xD1CE430)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerChooseAction___c_TypeDefinitionIndex = 65359;

	class GridFightPartnerChooseAction___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DE00);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightRole* _Sync_b__1_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERCHOOSEACTION___C__SYNC_B__1_0_OFFSET))(this, a1);
		}

	};
}
