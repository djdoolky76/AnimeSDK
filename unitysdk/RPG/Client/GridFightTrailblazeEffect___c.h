#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTrailblazeBoughtProperty; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCBAD80)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBADC0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__GETBOUGHTPROPERTY_B__29_0_OFFSET UNITYSDK_OFFSET(0xDCBADD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeEffect___c_TypeDefinitionIndex = 67275;

	class GridFightTrailblazeEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x120C0);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrailblazeBoughtProperty*, ::System::Int32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrailblazeBoughtProperty*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x120C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetBoughtProperty_b__29_0(::RPG::Client::GridFightTrailblazeBoughtProperty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightTrailblazeBoughtProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEEFFECT___C__GETBOUGHTPROPERTY_B__29_0_OFFSET))(this, a1);
		}

	};
}
