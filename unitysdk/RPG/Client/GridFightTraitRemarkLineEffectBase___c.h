#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9F2E30)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F2E70)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C___GETCURRENTLAYERINDEX_B__25_0_OFFSET UNITYSDK_OFFSET(0x1C9F2E80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineEffectBase___c_TypeDefinitionIndex = 67372;

	class GridFightTraitRemarkLineEffectBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x17280);
		}

		static ::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x17288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetCurrentLayerIndex_b__25_0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEEFFECTBASE___C___GETCURRENTLAYERINDEX_B__25_0_OFFSET))(this, a1);
		}

	};
}
