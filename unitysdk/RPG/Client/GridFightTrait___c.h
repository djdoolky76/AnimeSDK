#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTraitEditEffect; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E0EA0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E0EE0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__16_0_OFFSET UNITYSDK_OFFSET(0x1D3E0FC0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__16_1_OFFSET UNITYSDK_OFFSET(0x1D3E1020)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__14_0_OFFSET UNITYSDK_OFFSET(0x1D3E0EF0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__15_0_OFFSET UNITYSDK_OFFSET(0x1D3E0F60)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__34_0_OFFSET UNITYSDK_OFFSET(0x1D3E1080)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c_TypeDefinitionIndex = 67324;

	class GridFightTrait___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14480);
		}

		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14488);
		}

		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14490);
		}

		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x14498);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x144A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x144A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersOnBoard_b__14_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__14_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitShowEffect* _GetShownEffectList_b__15_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitShowEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEditEffectList_b__16_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__16_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEditEffect* _GetEditEffectList_b__16_1(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitEditEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__16_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_TraitProjection_b__34_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__34_0_OFFSET))(this, a1);
		}

	};
}
