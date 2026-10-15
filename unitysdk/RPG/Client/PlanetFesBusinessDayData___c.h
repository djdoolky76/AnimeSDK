#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesEventDataBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB8B950)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB8B990)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_CUREVENTCOUNT_B__12_0_OFFSET UNITYSDK_OFFSET(0xDB8B9A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_TOTALEVENTCOUNT_B__14_0_OFFSET UNITYSDK_OFFSET(0xDB8BA60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayData___c_TypeDefinitionIndex = 66563;

	class PlanetFesBusinessDayData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FC60);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int64>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FC68);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int64>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2FC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _get_CurEventCount_b__12_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_CUREVENTCOUNT_B__12_0_OFFSET))(this, a1);
		}

		::System::Int64 _get_TotalEventCount_b__14_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYDATA___C__GET_TOTALEVENTCOUNT_B__14_0_OFFSET))(this, a1);
		}

	};
}
