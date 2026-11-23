#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B075297E40BF6BA0.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define BDA3586670FD56B4_AD145912E360B552_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define BDA3586670FD56B4_B414DA9E4B1EEB1E_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BDA3586670FD56B4_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26D9AF0)
#define BDA3586670FD56B4_EBB7D05F36DCF5D9_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BDA3586670FD56B4_FA7BCA375093CA01_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define BDA3586670FD56B4_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26D9D20)
#define BDA3586670FD56B4__CTOR_OFFSET UNITYSDK_OFFSET(0x26D9FC0)

inline static constexpr unsigned int BDA3586670FD56B4_TypeDefinitionIndex = 2733;

class BDA3586670FD56B4 : public ::B075297E40BF6BA0
{
public:
	::FA9B773E8C9B97E9<::System::UInt32>* BF5E307AB2E9591A; // 0x10
	::System::UInt32 E1B5C96B6FF4C44B; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BDA3586670FD56B4*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BDA3586670FD56B4*&))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B414DA9E4B1EEB1E(::FA9B773E8C9B97E9<::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::System::UInt32>*))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_B414DA9E4B1EEB1E_OFFSET))(this, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::System::UInt32>* EBB7D05F36DCF5D9()
	{
		return ((::FA9B773E8C9B97E9<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_EBB7D05F36DCF5D9_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDA3586670FD56B4__CTOR_OFFSET))(this);
	}

	::System::UInt32 FA7BCA375093CA01()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_FA7BCA375093CA01_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void AD145912E360B552(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDA3586670FD56B4_AD145912E360B552_OFFSET))(this, E937D4885DAA1AE8);
	}
};
