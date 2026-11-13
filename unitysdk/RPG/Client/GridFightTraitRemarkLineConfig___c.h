#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9F09E0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9F0A20)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__GETALLLAYERPARAMLIST_B__48_0_OFFSET UNITYSDK_OFFSET(0x1C9F0A30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineConfig___c_TypeDefinitionIndex = 67383;

	class GridFightTraitRemarkLineConfig___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x170A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x170A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllLayerParamList_b__48_0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINECONFIG___C__GETALLLAYERPARAMLIST_B__48_0_OFFSET))(this, a1);
		}

	};
}
