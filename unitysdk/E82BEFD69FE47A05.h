#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A88F428B6EF6E04B;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define E82BEFD69FE47A05_A7A4A7E7B8CFA32C_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E82BEFD69FE47A05_B8E3BC8BFAD2634F_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define E82BEFD69FE47A05_E255036F55335E41_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define E82BEFD69FE47A05_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x253FCB0)
#define E82BEFD69FE47A05_F89C7B655F0BE405_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E82BEFD69FE47A05_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x253FD70)
#define E82BEFD69FE47A05__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E82BEFD69FE47A05_TypeDefinitionIndex = 5475;

class E82BEFD69FE47A05 : public ::System::Object
{
public:
	::System::UInt32 FB24F74D380C6DEB; // 0x10
	::System::Byte _padding0[0x4];
	::A88F428B6EF6E04B* E75FD758B6432207; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05__CTOR_OFFSET))(this);
	}

	::System::Void E255036F55335E41(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_E255036F55335E41_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 B8E3BC8BFAD2634F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_B8E3BC8BFAD2634F_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E82BEFD69FE47A05*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E82BEFD69FE47A05*&))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::A88F428B6EF6E04B* A7A4A7E7B8CFA32C()
	{
		return ((::A88F428B6EF6E04B*(*)(::PVOID))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_A7A4A7E7B8CFA32C_OFFSET))(this);
	}

	::System::Void F89C7B655F0BE405(::A88F428B6EF6E04B* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::A88F428B6EF6E04B*))((::PBYTE)hIl2Cpp + E82BEFD69FE47A05_F89C7B655F0BE405_OFFSET))(this, E937D4885DAA1AE8);
	}
};
