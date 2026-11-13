#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBICCEGAMM;
class JLKNHNFJLDJ;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C1BE0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C1C10)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET UNITYSDK_OFFSET(0x1C7C1C20)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET UNITYSDK_OFFSET(0x1C7C1C30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c_TypeDefinitionIndex = 69306;

	class RogueAdventureModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::AOBICCEGAMM*, ::System::Boolean>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::AOBICCEGAMM*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70DA0);
		}

		static ::System::Func_2<::JLKNHNFJLDJ*, ::System::Boolean>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::JLKNHNFJLDJ*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70DA8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x70DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_0(::JLKNHNFJLDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JLKNHNFJLDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_1(::AOBICCEGAMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AOBICCEGAMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET))(this, a1);
		}

	};
}
