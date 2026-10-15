#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDHICPODIMK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CAKERACEFIELDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC90E960)
#define RPG_CLIENT_CAKERACEFIELDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC90E9A0)
#define RPG_CLIENT_CAKERACEFIELDDATA___C__GET_FIELDEFFECTLIST_B__20_0_OFFSET UNITYSDK_OFFSET(0xC90E9B0)

namespace RPG::Client
{
	class CakeRaceFieldData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65440);
		}

		static ::System::Func_2<::KDHICPODIMK*, ::System::UInt32>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::KDHICPODIMK*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65448);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_FieldEffectList_b__20_0(::KDHICPODIMK* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::KDHICPODIMK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFIELDDATA___C__GET_FIELDEFFECTLIST_B__20_0_OFFSET))(this, a1);
		}

	};
}
