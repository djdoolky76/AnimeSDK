#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightPreparationTraitEffectIndicator; }
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB59540)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB59580)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__20_0_OFFSET UNITYSDK_OFFSET(0xDB596F0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETPREPARATIONTRAITEFFECTINDICATORS_B__19_0_OFFSET UNITYSDK_OFFSET(0xDB595E0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__18_0_OFFSET UNITYSDK_OFFSET(0xDB59590)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__32_0_OFFSET UNITYSDK_OFFSET(0xDB59710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c_TypeDefinitionIndex = 67299;

	class GridFightGameTrait___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F90);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71F98);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightPreparationTraitEffectIndicator*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightPreparationTraitEffectIndicator*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71FA0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71FA8);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraits_b__18_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__18_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetPreparationTraitEffectIndicators_b__19_0(::RPG::Client::GridFightPreparationTraitEffectIndicator* a1, ::RPG::Client::GridFightPreparationTraitEffectIndicator* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightPreparationTraitEffectIndicator*, ::RPG::Client::GridFightPreparationTraitEffectIndicator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETPREPARATIONTRAITEFFECTINDICATORS_B__19_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _GetAllTraitCanEffectSlot_b__20_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__20_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsShowSpecialFrontBackTypeTrait_b__32_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__32_0_OFFSET))(this, a1);
		}

	};
}
