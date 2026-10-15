#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FIKIBJDOEGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x157ABF70)
#define FIKIBJDOEGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x157ABFA0)
#define FIKIBJDOEGP___C__GETCOMBATPOWER_B__3_0_OFFSET UNITYSDK_OFFSET(0x157ABFB0)
#define FIKIBJDOEGP___C__GETCOMBATPOWER_B__3_1_OFFSET UNITYSDK_OFFSET(0x157ABFC0)

inline static constexpr unsigned int FIKIBJDOEGP___c_TypeDefinitionIndex = 62566;

	class FIKIBJDOEGP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CED0);
		}

		static ::System::Func_2<::System::ValueTuple, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::ValueTuple, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CED8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIKIBJDOEGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIKIBJDOEGP___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetCombatPower_b__3_0(::System::ValueTuple a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + FIKIBJDOEGP___C__GETCOMBATPOWER_B__3_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCombatPower_b__3_1(::System::ValueTuple a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + FIKIBJDOEGP___C__GETCOMBATPOWER_B__3_1_OFFSET))(this, a1);
		}

	};
