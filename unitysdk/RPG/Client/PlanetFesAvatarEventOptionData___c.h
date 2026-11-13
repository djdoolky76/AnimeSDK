#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesAvatarEventOptionResultData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D841120)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D841160)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1D841170)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAvatarEventOptionData___c_TypeDefinitionIndex = 68486;

	class PlanetFesAvatarEventOptionData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3D2B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x3D2B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAllResultGot_b__21_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarEventOptionResultData*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET))(this, a1);
		}

	};
}
