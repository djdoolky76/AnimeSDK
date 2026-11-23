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
template <typename T> class FA9B773E8C9B97E9;

#define E278C1114D4EA27B_A9F934BEC00BA6E3_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define E278C1114D4EA27B_BC0C5643BD5AA233_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E278C1114D4EA27B_E4CE0ABF12C9CA94_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define E278C1114D4EA27B_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2539F80)
#define E278C1114D4EA27B_F1979ECDFDD536C2_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E278C1114D4EA27B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x253A1A0)
#define E278C1114D4EA27B__CTOR_OFFSET UNITYSDK_OFFSET(0x253A410)

inline static constexpr unsigned int E278C1114D4EA27B_TypeDefinitionIndex = 5397;

class E278C1114D4EA27B : public ::System::Object
{
public:
	::FA9B773E8C9B97E9<::System::UInt32>* B06090E4A298E4B6; // 0x10
	::System::UInt32 B71E07462C88246D; // 0x18

	::System::UInt32 A9F934BEC00BA6E3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_A9F934BEC00BA6E3_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E278C1114D4EA27B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E278C1114D4EA27B*&))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E4CE0ABF12C9CA94(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_E4CE0ABF12C9CA94_OFFSET))(this, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::System::UInt32>* F1979ECDFDD536C2()
	{
		return ((::FA9B773E8C9B97E9<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_F1979ECDFDD536C2_OFFSET))(this);
	}

	::System::Void BC0C5643BD5AA233(::FA9B773E8C9B97E9<::System::UInt32>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::System::UInt32>*))((::PBYTE)hIl2Cpp + E278C1114D4EA27B_BC0C5643BD5AA233_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E278C1114D4EA27B__CTOR_OFFSET))(this);
	}
};
