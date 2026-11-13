#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EOJPHAFGCJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA96DC0)
#define EOJPHAFGCJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA96E00)
#define EOJPHAFGCJH___C__TRYSHOWBOSSPERSISTENTTIPSPERFORMANCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x1BA96E10)

inline static constexpr unsigned int EOJPHAFGCJH___c_TypeDefinitionIndex = 37410;

	class EOJPHAFGCJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC70);
		}

		static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FC78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOJPHAFGCJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJPHAFGCJH___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _TryShowBossPersistentTipsPerformance_b__48_0(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOJPHAFGCJH___C__TRYSHOWBOSSPERSISTENTTIPSPERFORMANCE_B__48_0_OFFSET))(this, a1);
		}

	};
