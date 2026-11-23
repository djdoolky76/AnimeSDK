#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FBAB053B7AE41B40.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A53EA95C5A8AACF7_A3493AEE96C85FBE_OFFSET UNITYSDK_OFFSET(0x1E18F70)
#define A53EA95C5A8AACF7_A517E613651BFC6C_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define A53EA95C5A8AACF7_BF5A7975C7CC456E_OFFSET UNITYSDK_OFFSET(0x1E18F80)
#define A53EA95C5A8AACF7_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24F51E0)
#define A53EA95C5A8AACF7_F9FF0B1F5B30E057_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define A53EA95C5A8AACF7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24F52D0)
#define A53EA95C5A8AACF7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A53EA95C5A8AACF7_TypeDefinitionIndex = 5093;

class A53EA95C5A8AACF7 : public ::FBAB053B7AE41B40
{
public:
	::System::UInt32 BA0329BC0C57017A; // 0x18
	::System::Boolean BFD46CAA6973DB27; // 0x1C

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A53EA95C5A8AACF7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A53EA95C5A8AACF7*&))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Boolean A3493AEE96C85FBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_A3493AEE96C85FBE_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7__CTOR_OFFSET))(this);
	}

	::System::UInt32 A517E613651BFC6C()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_A517E613651BFC6C_OFFSET))(this);
	}

	::System::Void BF5A7975C7CC456E(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_BF5A7975C7CC456E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F9FF0B1F5B30E057(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A53EA95C5A8AACF7_F9FF0B1F5B30E057_OFFSET))(this, E937D4885DAA1AE8);
	}
};
