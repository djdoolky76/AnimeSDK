#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AACFC915B3A87430.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A0CD4F993D86508C;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F11306BFC6EAEAEC_EBAA2AFE2B0FBC45_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F11306BFC6EAEAEC_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26404B0)
#define F11306BFC6EAEAEC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2640640)
#define F11306BFC6EAEAEC_FF11B057B368AEEF_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F11306BFC6EAEAEC__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F11306BFC6EAEAEC_TypeDefinitionIndex = 6166;

class F11306BFC6EAEAEC : public ::AACFC915B3A87430
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>* E814A63B61224758; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F11306BFC6EAEAEC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F11306BFC6EAEAEC*&))((::PBYTE)hIl2Cpp + F11306BFC6EAEAEC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F11306BFC6EAEAEC_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>* FF11B057B368AEEF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F11306BFC6EAEAEC_FF11B057B368AEEF_OFFSET))(this);
	}

	::System::Void EBAA2AFE2B0FBC45(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A0CD4F993D86508C*>*))((::PBYTE)hIl2Cpp + F11306BFC6EAEAEC_EBAA2AFE2B0FBC45_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F11306BFC6EAEAEC__CTOR_OFFSET))(this);
	}
};
