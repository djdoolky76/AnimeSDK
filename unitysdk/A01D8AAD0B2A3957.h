#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A01D8AAD0B2A3957_B028B6BA96C21E35_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define A01D8AAD0B2A3957_BD15689F5F1AA5A1_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define A01D8AAD0B2A3957_E1299B6D28799307_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define A01D8AAD0B2A3957_EA0ADA8481F6A994_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define A01D8AAD0B2A3957_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24F2040)
#define A01D8AAD0B2A3957_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24F2100)
#define A01D8AAD0B2A3957__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A01D8AAD0B2A3957_TypeDefinitionIndex = 5084;

class A01D8AAD0B2A3957 : public ::System::Object
{
public:
	::System::UInt32 A826A052D872C2C4; // 0x10
	::System::UInt32 BD2A4AED14930545; // 0x14

	::System::UInt32 B028B6BA96C21E35()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_B028B6BA96C21E35_OFFSET))(this);
	}

	::System::Void E1299B6D28799307(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_E1299B6D28799307_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EA0ADA8481F6A994(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_EA0ADA8481F6A994_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 BD15689F5F1AA5A1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_BD15689F5F1AA5A1_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A01D8AAD0B2A3957*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A01D8AAD0B2A3957*&))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A01D8AAD0B2A3957__CTOR_OFFSET))(this);
	}
};
