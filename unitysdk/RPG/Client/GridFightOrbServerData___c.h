#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightOrbEntityData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD1CBD50)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD1CBD90)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GETORBCOUNTBYTYPE_B__11_1_OFFSET UNITYSDK_OFFSET(0xD1CBDA0)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GET_ORBLISTWITHOUTBATTLERESULT_B__24_0_OFFSET UNITYSDK_OFFSET(0xD1CBE30)
#define RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C___GETORBLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0xD1CBDF0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightOrbServerData___c_TypeDefinitionIndex = 64446;

	class GridFightOrbServerData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DDC0);
		}

		static ::System::Comparison_1<::RPG::Client::GridFightOrbEntityData*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightOrbEntityData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DDC8);
		}

		static ::System::Func_2<::RPG::Client::GridFightOrbEntityData*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightOrbEntityData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DDD0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6DDD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetOrbCountByType_b__11_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GETORBCOUNTBYTYPE_B__11_1_OFFSET))(this, a1);
		}

		::System::Int32 __GetOrbList_b__14_0(::RPG::Client::GridFightOrbEntityData* a1, ::RPG::Client::GridFightOrbEntityData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C___GETORBLIST_B__14_0_OFFSET))(this, a1, a2);
		}

		::System::Boolean _get_OrbListWithoutBattleResult_b__24_0(::RPG::Client::GridFightOrbEntityData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTORBSERVERDATA___C__GET_ORBLISTWITHOUTBATTLERESULT_B__24_0_OFFSET))(this, a1);
		}

	};
}
