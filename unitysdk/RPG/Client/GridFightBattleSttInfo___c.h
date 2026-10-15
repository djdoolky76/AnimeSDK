#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINJHHBJNJP;
class NFIDNDFHJGN;
class PLFKMENCDMM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0D90F0)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D9130)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0xD0D9140)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0xD0D9160)
#define RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET UNITYSDK_OFFSET(0xD0D9180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleSttInfo___c_TypeDefinitionIndex = 64413;

	class GridFightBattleSttInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KINJHHBJNJP*, ::System::Double>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::KINJHHBJNJP*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68240);
		}

		static ::System::Func_2<::PLFKMENCDMM*, ::System::Double>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::PLFKMENCDMM*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68248);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68250);
		}

		static ::System::Func_2<::NFIDNDFHJGN*, ::System::Double>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::NFIDNDFHJGN*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Double _Sync_b__0_0(::PLFKMENCDMM* a1)
		{
			return ((::System::Double(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_0_OFFSET))(this, a1);
		}

		::System::Double _Sync_b__0_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Double(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_1_OFFSET))(this, a1);
		}

		::System::Double _Sync_b__0_2(::NFIDNDFHJGN* a1)
		{
			return ((::System::Double(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLESTTINFO___C__SYNC_B__0_2_OFFSET))(this, a1);
		}

	};
}
