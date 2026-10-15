#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINJHHBJNJP;
class NFIDNDFHJGN;
class PLFKMENCDMM;
namespace RPG::Client { class GridFightBattleResultDropInfo; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0D7B90)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0D7BD0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET UNITYSDK_OFFSET(0xD0D7BE0)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0xD0D7C00)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0xD0D7C20)
#define RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET UNITYSDK_OFFSET(0xD0D7C40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleResultInfo___c_TypeDefinitionIndex = 64411;

	class GridFightBattleResultInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x653F0);
		}

		static ::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightBattleResultDropInfo*, ::System::Int64>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x653F8);
		}

		static ::System::Func_2<::NFIDNDFHJGN*, ::System::Double>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::NFIDNDFHJGN*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65400);
		}

		static ::System::Func_2<::PLFKMENCDMM*, ::System::Double>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::PLFKMENCDMM*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65408);
		}

		static ::System::Func_2<::KINJHHBJNJP*, ::System::Double>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::KINJHHBJNJP*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int64 _GetDropCoinAdd_b__2_0(::RPG::Client::GridFightBattleResultDropInfo* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightBattleResultDropInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C__GETDROPCOINADD_B__2_0_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_0(::PLFKMENCDMM* a1)
		{
			return ((::System::Double(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_0_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Double(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_1_OFFSET))(this, a1);
		}

		::System::Double __Sync_b__6_2(::NFIDNDFHJGN* a1)
		{
			return ((::System::Double(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLERESULTINFO___C___SYNC_B__6_2_OFFSET))(this, a1);
		}

	};
}
