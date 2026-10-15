#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class PEDNMPONAAO;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MULTIPATHHELPER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD8D36B0)
#define RPG_CLIENT_MULTIPATHHELPER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD8D36E0)
#define RPG_CLIENT_MULTIPATHHELPER___C__GETMULTIPATHAVATARTYPESBYROLE_B__13_0_OFFSET UNITYSDK_OFFSET(0xD8D36F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPathHelper___c_TypeDefinitionIndex = 62649;

	class MultiPathHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::PEDNMPONAAO*, ::HNOHHOEPFHC>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::PEDNMPONAAO*, ::HNOHHOEPFHC>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B490);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B498);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C_CTOR_OFFSET))(this);
		}

		::HNOHHOEPFHC _GetMultiPathAvatarTypesByRole_b__13_0(::PEDNMPONAAO* a1)
		{
			return ((::HNOHHOEPFHC(*)(::PVOID, ::PEDNMPONAAO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPATHHELPER___C__GETMULTIPATHAVATARTYPESBYROLE_B__13_0_OFFSET))(this, a1);
		}

	};
}
