#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A7E29C816DC24019_AC14189FF3A4D344_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define A7E29C816DC24019_E466ABE4A3B43D6B_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define A7E29C816DC24019_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2486A90)
#define A7E29C816DC24019_EE11A6660124A53D_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define A7E29C816DC24019_F3CBBB593180940B_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define A7E29C816DC24019_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2486B50)
#define A7E29C816DC24019__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A7E29C816DC24019_TypeDefinitionIndex = 4495;

class A7E29C816DC24019 : public ::System::Object
{
public:
	::System::UInt32 FF3EFA2D94B55DF0; // 0x10
	::System::UInt32 EF75531842CE5CA2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A7E29C816DC24019__CTOR_OFFSET))(this);
	}

	::System::Void F3CBBB593180940B(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A7E29C816DC24019_F3CBBB593180940B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void AC14189FF3A4D344(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A7E29C816DC24019_AC14189FF3A4D344_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A7E29C816DC24019_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A7E29C816DC24019*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A7E29C816DC24019*&))((::PBYTE)hIl2Cpp + A7E29C816DC24019_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::UInt32 EE11A6660124A53D()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A7E29C816DC24019_EE11A6660124A53D_OFFSET))(this);
	}

	::System::UInt32 E466ABE4A3B43D6B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A7E29C816DC24019_E466ABE4A3B43D6B_OFFSET))(this);
	}
};
