#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFFIFFNHM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCB6C9F0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCB6CA20)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCNEWLYUNLOCKEDCHIMERAS_B__39_0_OFFSET UNITYSDK_OFFSET(0xCB6CA50)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCUNLOCKEDCHIMERAS_B__38_0_OFFSET UNITYSDK_OFFSET(0xCB6CA30)

namespace RPG::Client
{
	class ChimeraWorkRoundInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x163E0);
		}

		static ::System::Func_2<::GADFFIFFNHM*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::GADFFIFFNHM*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x163E8);
		}

		static ::System::Func_2<::GADFFIFFNHM*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::GADFFIFFNHM*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x163F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SyncUnlockedChimeras_b__38_0(::GADFFIFFNHM* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCUNLOCKEDCHIMERAS_B__38_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncNewlyUnlockedChimeras_b__39_0(::GADFFIFFNHM* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO___C__SYNCNEWLYUNLOCKEDCHIMERAS_B__39_0_OFFSET))(this, a1);
		}

	};
}
