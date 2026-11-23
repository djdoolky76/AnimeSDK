#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EB8643C182ACFE86.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A32B12A2A9CBC358_BB6E9F60E7DC326C_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define A32B12A2A9CBC358_BC6AD96F8A66E3C6_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define A32B12A2A9CBC358_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26A31C0)
#define A32B12A2A9CBC358_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26A31D0)
#define A32B12A2A9CBC358__CTOR_OFFSET UNITYSDK_OFFSET(0x268C730)

inline static constexpr unsigned int A32B12A2A9CBC358_TypeDefinitionIndex = 2534;

class A32B12A2A9CBC358 : public ::EB8643C182ACFE86
{
public:
	::System::Boolean A9AA4BA5F5CF01A7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A32B12A2A9CBC358__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A32B12A2A9CBC358_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void BB6E9F60E7DC326C(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A32B12A2A9CBC358_BB6E9F60E7DC326C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean BC6AD96F8A66E3C6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A32B12A2A9CBC358_BC6AD96F8A66E3C6_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A32B12A2A9CBC358*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A32B12A2A9CBC358*&))((::PBYTE)hIl2Cpp + A32B12A2A9CBC358_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
