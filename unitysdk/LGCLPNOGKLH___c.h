#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LGCLPNOGKLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC9F990)
#define LGCLPNOGKLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC9F9C0)
#define LGCLPNOGKLH___C__GETMONSTERDATALIST_B__5_0_OFFSET UNITYSDK_OFFSET(0x1BC9F9D0)

inline static constexpr unsigned int LGCLPNOGKLH___c_TypeDefinitionIndex = 70202;

	class LGCLPNOGKLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62880);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::Client::MonsterData*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::MonsterData*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62888);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGCLPNOGKLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCLPNOGKLH___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MonsterData* _GetMonsterDataList_b__5_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGCLPNOGKLH___C__GETMONSTERDATALIST_B__5_0_OFFSET))(this, a1);
		}

	};
