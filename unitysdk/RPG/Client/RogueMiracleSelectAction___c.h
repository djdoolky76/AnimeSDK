#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournMiracleData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF47F60)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF47F90)
#define RPG_CLIENT_ROGUEMIRACLESELECTACTION___C___REPORTSELECTMIRACLE_B__30_0_OFFSET UNITYSDK_OFFSET(0xDF47FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMiracleSelectAction___c_TypeDefinitionIndex = 67032;

	class RogueMiracleSelectAction___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65470);
		}

		static ::System::Func_2<::RPG::Client::RogueTournMiracleData*, ::System::Boolean>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournMiracleData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __ReportSelectMiracle_b__30_0(::RPG::Client::RogueTournMiracleData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournMiracleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMIRACLESELECTACTION___C___REPORTSELECTMIRACLE_B__30_0_OFFSET))(this, a1);
		}

	};
}
