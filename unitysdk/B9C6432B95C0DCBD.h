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
template <typename T> class FA9B773E8C9B97E9;

#define B9C6432B95C0DCBD_A62A4D3C428D0560_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B9C6432B95C0DCBD_E62CCE3BE5367C03_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B9C6432B95C0DCBD_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23CAB30)
#define B9C6432B95C0DCBD_EDCBEBA6694AA26A_OFFSET UNITYSDK_OFFSET(0x17D6270)
#define B9C6432B95C0DCBD_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23CACE0)
#define B9C6432B95C0DCBD_FDC4AFCBFB23EBCF_OFFSET UNITYSDK_OFFSET(0x17D6420)
#define B9C6432B95C0DCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x23CAF80)

inline static constexpr unsigned int B9C6432B95C0DCBD_TypeDefinitionIndex = 3751;

class B9C6432B95C0DCBD : public ::FBAB053B7AE41B40
{
public:
	::FA9B773E8C9B97E9<::System::UInt32>* B92A4AA8D2F68FC0; // 0x18
	::System::Boolean AA17B0B9D68E4C7E; // 0x20

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B9C6432B95C0DCBD*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B9C6432B95C0DCBD*&))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void FDC4AFCBFB23EBCF(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_FDC4AFCBFB23EBCF_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Boolean EDCBEBA6694AA26A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_EDCBEBA6694AA26A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD__CTOR_OFFSET))(this);
	}

	::FA9B773E8C9B97E9<::System::UInt32>* E62CCE3BE5367C03()
	{
		return ((::FA9B773E8C9B97E9<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_E62CCE3BE5367C03_OFFSET))(this);
	}

	::System::Void A62A4D3C428D0560(::FA9B773E8C9B97E9<::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::System::UInt32>*))((::PBYTE)hIl2Cpp + B9C6432B95C0DCBD_A62A4D3C428D0560_OFFSET))(this, E937D4885DAA1AE8);
	}
};
