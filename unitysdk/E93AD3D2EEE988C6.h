#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACFC915B3A87430.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class ACBE6BD33FB9C565;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define E93AD3D2EEE988C6_ABE9C29FEF3BCB3F_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E93AD3D2EEE988C6_AD018C9081BA1255_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E93AD3D2EEE988C6_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2678EE0)
#define E93AD3D2EEE988C6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2679050)
#define E93AD3D2EEE988C6__CTOR_OFFSET UNITYSDK_OFFSET(0x2679240)

inline static constexpr unsigned int E93AD3D2EEE988C6_TypeDefinitionIndex = 6340;

class E93AD3D2EEE988C6 : public ::AACFC915B3A87430
{
public:
	::FA9B773E8C9B97E9<::ACBE6BD33FB9C565*>* A433DB4AA0C64120; // 0x10

	::FA9B773E8C9B97E9<::ACBE6BD33FB9C565*>* AD018C9081BA1255()
	{
		return ((::FA9B773E8C9B97E9<::ACBE6BD33FB9C565*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E93AD3D2EEE988C6_AD018C9081BA1255_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E93AD3D2EEE988C6_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E93AD3D2EEE988C6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E93AD3D2EEE988C6*&))((::PBYTE)hIl2Cpp + E93AD3D2EEE988C6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void ABE9C29FEF3BCB3F(::FA9B773E8C9B97E9<::ACBE6BD33FB9C565*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::ACBE6BD33FB9C565*>*))((::PBYTE)hIl2Cpp + E93AD3D2EEE988C6_ABE9C29FEF3BCB3F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E93AD3D2EEE988C6__CTOR_OFFSET))(this);
	}
};
