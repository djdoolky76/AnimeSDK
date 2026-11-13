#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightSpotlightTagConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15F2F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F330)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E15F340)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightConfig___c_TypeDefinitionIndex = 66960;

	class GridFightSpotLightConfig___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x101D0);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightSpotlightTagConfig*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightSpotlightTagConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x101D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightSpotlightTagConfig* __ctor_b__2_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotlightTagConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG___C___CTOR_B__2_0_OFFSET))(this, a1);
		}

	};
}
