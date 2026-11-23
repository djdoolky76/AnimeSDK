#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A002D5875FA770C1;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace ABC::Entity { class CommonData; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F08677DD76453A70_A259D4F6A5047FA2_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F08677DD76453A70_A2E318F100AB961F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F08677DD76453A70_AD69DA8E3528C7A1_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F08677DD76453A70_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F08677DD76453A70_F1A58225F4A5A4AA_OFFSET UNITYSDK_OFFSET(0x168A070)
#define F08677DD76453A70_FADCDD8264F053E9_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F08677DD76453A70_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23A2250)
#define F08677DD76453A70__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F08677DD76453A70_TypeDefinitionIndex = 3602;

class F08677DD76453A70 : public ::System::Object
{
public:
	::System::Int32 A52592440A5881A8; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::Entity::CommonData*>* F5BD3475DFEEF72F; // 0x18

	::System::Void A259D4F6A5047FA2(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F08677DD76453A70_A259D4F6A5047FA2_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F08677DD76453A70__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::Entity::CommonData*>* A2E318F100AB961F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::Entity::CommonData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F08677DD76453A70_A2E318F100AB961F_OFFSET))(this);
	}

	::System::Void AD69DA8E3528C7A1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::Entity::CommonData*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::ABC::Entity::CommonData*>*))((::PBYTE)hIl2Cpp + F08677DD76453A70_AD69DA8E3528C7A1_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F08677DD76453A70_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F08677DD76453A70*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F08677DD76453A70*&))((::PBYTE)hIl2Cpp + F08677DD76453A70_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::A002D5875FA770C1* F1A58225F4A5A4AA(::System::Int32 F95BFBD50DB67468)
	{
		return ((::A002D5875FA770C1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F08677DD76453A70_F1A58225F4A5A4AA_OFFSET))(this, F95BFBD50DB67468);
	}

	::System::Int32 FADCDD8264F053E9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F08677DD76453A70_FADCDD8264F053E9_OFFSET))(this);
	}
};
