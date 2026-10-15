#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0C8B40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0C8B80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__GET_ADDROLEPOSINDEXES_B__5_0_OFFSET UNITYSDK_OFFSET(0xD0C8B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentEffectData___c_TypeDefinitionIndex = 64387;

	class GridFightAugmentEffectData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65240);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65248);
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
