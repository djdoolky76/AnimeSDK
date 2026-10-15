#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROUNDSETTLEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE06E750)
#define RPG_CLIENT_ROUNDSETTLEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE06E790)
#define RPG_CLIENT_ROUNDSETTLEINFO___C___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xE06E7A0)

namespace RPG::Client
{
	class RoundSettleInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::OGGELMMFPKP*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E1F8);
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
