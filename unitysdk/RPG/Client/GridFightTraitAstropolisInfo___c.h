#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitAstropolisTier; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCC7600)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC7640)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C__GETALLTIERS_B__19_0_OFFSET UNITYSDK_OFFSET(0xDCC7650)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitAstropolisInfo___c_TypeDefinitionIndex = 67227;

	class GridFightTraitAstropolisInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x127B0);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightTraitAstropolisTier*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightTraitAstropolisTier*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x127B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTiers_b__19_0(::RPG::Client::GridFightTraitAstropolisTier* a1, ::RPG::Client::GridFightTraitAstropolisTier* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitAstropolisTier*, ::RPG::Client::GridFightTraitAstropolisTier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO___C__GETALLTIERS_B__19_0_OFFSET))(this, a1, a2);
		}

	};
}
