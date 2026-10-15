#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesAvatarEventOptionResultData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB7FFB0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB7FFF0)
#define RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET UNITYSDK_OFFSET(0xDB80000)

namespace RPG::Client
{
	class PlanetFesAvatarEventOptionData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F750);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAllResultGot_b__21_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATAREVENTOPTIONDATA___C__GET_ISALLRESULTGOT_B__21_0_OFFSET))(this, a1);
		}

	};
}
