#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FBAB053B7AE41B40;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define FECE22F794A4D480_B0E13D9B0E3ED08C_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FECE22F794A4D480_B86982E39821637F_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FECE22F794A4D480_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x232B880)
#define FECE22F794A4D480_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x232B9D0)
#define FECE22F794A4D480__CTOR_OFFSET UNITYSDK_OFFSET(0x232BB90)

inline static constexpr unsigned int FECE22F794A4D480_TypeDefinitionIndex = 2341;

class FECE22F794A4D480 : public ::System::Object
{
public:
	::FA9B773E8C9B97E9<::FBAB053B7AE41B40*>* A009EF8AD16817AA; // 0x10

	::FA9B773E8C9B97E9<::FBAB053B7AE41B40*>* B86982E39821637F()
	{
		return ((::FA9B773E8C9B97E9<::FBAB053B7AE41B40*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FECE22F794A4D480_B86982E39821637F_OFFSET))(this);
	}

	::System::Void B0E13D9B0E3ED08C(::FA9B773E8C9B97E9<::FBAB053B7AE41B40*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::FBAB053B7AE41B40*>*))((::PBYTE)hIl2Cpp + FECE22F794A4D480_B0E13D9B0E3ED08C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FECE22F794A4D480_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FECE22F794A4D480__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FECE22F794A4D480*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FECE22F794A4D480*&))((::PBYTE)hIl2Cpp + FECE22F794A4D480_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
