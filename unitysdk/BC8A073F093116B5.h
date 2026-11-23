#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FC21A125C38120E4;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define BC8A073F093116B5_E0CAFEDD64EABA43_OFFSET UNITYSDK_OFFSET(0x26C9150)
#define BC8A073F093116B5_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BC8A073F093116B5_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define BC8A073F093116B5_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26C9310)
#define BC8A073F093116B5_FC975859F547237C_OFFSET UNITYSDK_OFFSET(0x168A070)
#define BC8A073F093116B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BC8A073F093116B5_TypeDefinitionIndex = 6636;

class BC8A073F093116B5 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10

	::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>* FC975859F547237C()
	{
		return ((::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BC8A073F093116B5_FC975859F547237C_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BC8A073F093116B5_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BC8A073F093116B5*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BC8A073F093116B5*&))((::PBYTE)hIl2Cpp + BC8A073F093116B5_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BC8A073F093116B5_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void E0CAFEDD64EABA43(::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>* E9FFEC9B0777EC02)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::B07850EA97DBB75A<::System::Collections::Generic::List_1<::FC21A125C38120E4*>*, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + BC8A073F093116B5_E0CAFEDD64EABA43_OFFSET))(this, E9FFEC9B0777EC02);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC8A073F093116B5__CTOR_OFFSET))(this);
	}
};
