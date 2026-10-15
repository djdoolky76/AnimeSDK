#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROUNDSETTLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE064030)
#define RPG_CLIENT_ROUNDSETTLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE064070)
#define RPG_CLIENT_ROUNDSETTLEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xE064080)

namespace RPG::Client
{
	inline static constexpr unsigned int RoundSettleInfo___c_TypeDefinitionIndex = 61441;

	class RoundSettleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6B9E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __ctor_b__0_0(::OGGELMMFPKP* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::OGGELMMFPKP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROUNDSETTLEINFO___C___CTOR_B__0_0_OFFSET))(this, a1);
		}

	};
}
