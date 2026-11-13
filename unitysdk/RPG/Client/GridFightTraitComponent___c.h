#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitDisplayData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3F24D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F2510)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GETROLETRAITDISPLAYDATAS_B__18_0_OFFSET UNITYSDK_OFFSET(0x1D3F2520)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GET_TRAITCONFIGS_B__26_0_OFFSET UNITYSDK_OFFSET(0x1D3F2600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c_TypeDefinitionIndex = 67331;

	class GridFightTraitComponent___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x155B0);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightTraitDisplayData*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightTraitDisplayData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x155B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitConfigBase*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitConfigBase*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x155C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRoleTraitDisplayDatas_b__18_0(::RPG::Client::GridFightTraitDisplayData* a1, ::RPG::Client::GridFightTraitDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTraitDisplayData*, ::RPG::Client::GridFightTraitDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GETROLETRAITDISPLAYDATAS_B__18_0_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitConfigBase* _get_TraitConfigs_b__26_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GET_TRAITCONFIGS_B__26_0_OFFSET))(this, a1);
		}

	};
}
