#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A1D2698E026A5FA7_AF65EDDA3A007C39_OFFSET UNITYSDK_OFFSET(0x1C28010)
#define A1D2698E026A5FA7_B1860AD0C7293138_OFFSET UNITYSDK_OFFSET(0x1C4F080)
#define A1D2698E026A5FA7_B50F0F663FC3856D_OFFSET UNITYSDK_OFFSET(0x16F77C0)
#define A1D2698E026A5FA7_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A1D2698E026A5FA7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25FCCB0)
#define A1D2698E026A5FA7_FF51534E1951CD11_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define A1D2698E026A5FA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A1D2698E026A5FA7_TypeDefinitionIndex = 5881;

class A1D2698E026A5FA7 : public ::System::Object
{
public:
	::System::Boolean ECC334548E60415B; // 0x10
	::System::Byte _padding0[0x7];
	::E12F55A5FCCCF1EC AEE9E565B5F177E4; // 0x18

	::System::Void AF65EDDA3A007C39(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_AF65EDDA3A007C39_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7__CTOR_OFFSET))(this);
	}

	::E12F55A5FCCCF1EC FF51534E1951CD11()
	{
		return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_FF51534E1951CD11_OFFSET))(this);
	}

	::System::Boolean B50F0F663FC3856D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_B50F0F663FC3856D_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A1D2698E026A5FA7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A1D2698E026A5FA7*&))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B1860AD0C7293138(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_B1860AD0C7293138_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A1D2698E026A5FA7_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}
};
