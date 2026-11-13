#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C729000)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C729040)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__GET_ADDROLEPOSINDEXES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C729050)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentEffectData___c_TypeDefinitionIndex = 65834;

	class GridFightAugmentEffectData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FB00);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FB08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_AddRolePosIndexes_b__5_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__GET_ADDROLEPOSINDEXES_B__5_0_OFFSET))(this, a1);
		}

	};
}
