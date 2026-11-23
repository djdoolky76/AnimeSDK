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

#define B174189255848516_A3493AEE96C85FBE_OFFSET UNITYSDK_OFFSET(0x1E18F70)
#define B174189255848516_BF5A7975C7CC456E_OFFSET UNITYSDK_OFFSET(0x1E18F80)
#define B174189255848516_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x267BCB0)
#define B174189255848516_F851865C820797D4_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define B174189255848516_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267BDA0)
#define B174189255848516_FE3B08E3FD0D4C41_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define B174189255848516__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B174189255848516_TypeDefinitionIndex = 6409;

class B174189255848516 : public ::FBAB053B7AE41B40
{
public:
	::System::UInt32 FF9D63AC40906685; // 0x18
	::System::Boolean BFD46CAA6973DB27; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B174189255848516__CTOR_OFFSET))(this);
	}

	::System::UInt32 F851865C820797D4()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B174189255848516_F851865C820797D4_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B174189255848516*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B174189255848516*&))((::PBYTE)hIl2Cpp + B174189255848516_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B174189255848516_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Boolean A3493AEE96C85FBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B174189255848516_A3493AEE96C85FBE_OFFSET))(this);
	}

	::System::Void FE3B08E3FD0D4C41(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B174189255848516_FE3B08E3FD0D4C41_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void BF5A7975C7CC456E(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B174189255848516_BF5A7975C7CC456E_OFFSET))(this, E937D4885DAA1AE8);
	}
};
