#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6118068C5999743.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A5001C9941A0D59B_A3CE3BBB57CA3856_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define A5001C9941A0D59B_B028B6BA96C21E35_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define A5001C9941A0D59B_BD15689F5F1AA5A1_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define A5001C9941A0D59B_E1299B6D28799307_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define A5001C9941A0D59B_EA0ADA8481F6A994_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define A5001C9941A0D59B_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2682D00)
#define A5001C9941A0D59B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2682DF0)
#define A5001C9941A0D59B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A5001C9941A0D59B_TypeDefinitionIndex = 6405;

class A5001C9941A0D59B : public ::A6118068C5999743
{
public:
	::System::UInt32 A826A052D872C2C4; // 0x10
	::System::UInt32 BD2A4AED14930545; // 0x14
	::System::Int32 A054B4EA54E0E59E; // 0x18

	::System::UInt32 B028B6BA96C21E35()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_B028B6BA96C21E35_OFFSET))(this);
	}

	::System::Void EA0ADA8481F6A994(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_EA0ADA8481F6A994_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 BD15689F5F1AA5A1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_BD15689F5F1AA5A1_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A5001C9941A0D59B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A5001C9941A0D59B*&))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A5001C9941A0D59B__CTOR_OFFSET))(this);
	}

	::System::Void A3CE3BBB57CA3856(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_A3CE3BBB57CA3856_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void E1299B6D28799307(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A5001C9941A0D59B_E1299B6D28799307_OFFSET))(this, E937D4885DAA1AE8);
	}
};
