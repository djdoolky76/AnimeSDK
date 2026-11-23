#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A3447F0FDF0B7341;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define B0EEFDF320F97E21_A10E16247FDBD7FA_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B0EEFDF320F97E21_A5DE511B9E3285D9_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B0EEFDF320F97E21_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23E4360)
#define B0EEFDF320F97E21_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B0EEFDF320F97E21_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23E44B0)
#define B0EEFDF320F97E21__CTOR_OFFSET UNITYSDK_OFFSET(0x23E4710)

inline static constexpr unsigned int B0EEFDF320F97E21_TypeDefinitionIndex = 3956;

class B0EEFDF320F97E21 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::FA9B773E8C9B97E9<::A3447F0FDF0B7341*>* FE088A88D805D970; // 0x18

	::FA9B773E8C9B97E9<::A3447F0FDF0B7341*>* A5DE511B9E3285D9()
	{
		return ((::FA9B773E8C9B97E9<::A3447F0FDF0B7341*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21_A5DE511B9E3285D9_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21__CTOR_OFFSET))(this);
	}

	::System::Void A10E16247FDBD7FA(::FA9B773E8C9B97E9<::A3447F0FDF0B7341*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::A3447F0FDF0B7341*>*))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21_A10E16247FDBD7FA_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B0EEFDF320F97E21*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B0EEFDF320F97E21*&))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B0EEFDF320F97E21_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}
};
