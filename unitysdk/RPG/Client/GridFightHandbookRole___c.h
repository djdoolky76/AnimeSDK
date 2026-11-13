#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC299D0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC29A10)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1CC29A20)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__16_1_OFFSET UNITYSDK_OFFSET(0x1CC29A80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole___c_TypeDefinitionIndex = 66458;

	class GridFightHandbookRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72100);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72108);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMergedTraitConfigs_b__16_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__16_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetMergedTraitConfigs_b__16_1(::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__16_1_OFFSET))(this, a1);
		}

	};
}
