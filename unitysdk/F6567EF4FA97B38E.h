#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACFC915B3A87430.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FB3503DB193F1274;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define F6567EF4FA97B38E_A003EB53D7EBC57D_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F6567EF4FA97B38E_B498CB98B98B99AB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F6567EF4FA97B38E_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24759F0)
#define F6567EF4FA97B38E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2475B60)
#define F6567EF4FA97B38E__CTOR_OFFSET UNITYSDK_OFFSET(0x2475D50)

inline static constexpr unsigned int F6567EF4FA97B38E_TypeDefinitionIndex = 4592;

class F6567EF4FA97B38E : public ::AACFC915B3A87430
{
public:
	::FA9B773E8C9B97E9<::FB3503DB193F1274*>* BE4BAEF7A8EE37AB; // 0x10

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F6567EF4FA97B38E_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::FA9B773E8C9B97E9<::FB3503DB193F1274*>* A003EB53D7EBC57D()
	{
		return ((::FA9B773E8C9B97E9<::FB3503DB193F1274*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F6567EF4FA97B38E_A003EB53D7EBC57D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6567EF4FA97B38E__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F6567EF4FA97B38E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F6567EF4FA97B38E*&))((::PBYTE)hIl2Cpp + F6567EF4FA97B38E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B498CB98B98B99AB(::FA9B773E8C9B97E9<::FB3503DB193F1274*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::FB3503DB193F1274*>*))((::PBYTE)hIl2Cpp + F6567EF4FA97B38E_B498CB98B98B99AB_OFFSET))(this, E937D4885DAA1AE8);
	}
};
