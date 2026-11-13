#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotlightTagConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D693190)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6931D0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_0_OFFSET UNITYSDK_OFFSET(0x1D6931E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_1_OFFSET UNITYSDK_OFFSET(0x1D6932A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_2_OFFSET UNITYSDK_OFFSET(0x1D6932B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationSpotLightFilter___c_TypeDefinitionIndex = 66236;

	class GridFightGameFormationSpotLightFilter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Int32>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::System::Int32, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716D0);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightSpotLightConfig*>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSpotLightConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716D8);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightSpotlightTagConfig*>** StaticGet___9__23_2()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSpotlightTagConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x716E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EnsureAllLoaded_b__23_0(::RPG::Client::GridFightSpotLightConfig* a1, ::RPG::Client::GridFightSpotLightConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 __EnsureAllLoaded_b__23_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_1_OFFSET))(this, a1);
		}

		::System::Int32 __EnsureAllLoaded_b__23_2(::RPG::Client::GridFightSpotlightTagConfig* a1, ::RPG::Client::GridFightSpotlightTagConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSpotlightTagConfig*, ::RPG::Client::GridFightSpotlightTagConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONSPOTLIGHTFILTER___C___ENSUREALLLOADED_B__23_2_OFFSET))(this, a1, a2);
		}

	};
}
