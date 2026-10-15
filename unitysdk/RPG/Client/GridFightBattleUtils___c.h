#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGFNMNGJPIC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD0DE810)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD0DE850)
#define RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET UNITYSDK_OFFSET(0xD0DE860)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleUtils___c_TypeDefinitionIndex = 72271;

	class GridFightBattleUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_3<::OGFNMNGJPIC*, ::OGFNMNGJPIC*, ::System::Int32>** StaticGet___9__38_0()
		{
			return (::System::Func_3<::OGFNMNGJPIC*, ::OGFNMNGJPIC*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68310);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetDamageStatistics_b__38_0(::OGFNMNGJPIC* a1, ::OGFNMNGJPIC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OGFNMNGJPIC*, ::OGFNMNGJPIC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEUTILS___C__GETDAMAGESTATISTICS_B__38_0_OFFSET))(this, a1, a2);
		}

	};
}
