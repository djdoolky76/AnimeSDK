#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B7B8795FB90C86A7.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define AAF2E94A6AECAFEF_B8422D732CF33BDB_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define AAF2E94A6AECAFEF_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23808D0)
#define AAF2E94A6AECAFEF_EF6A6535B93523FE_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define AAF2E94A6AECAFEF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2380990)
#define AAF2E94A6AECAFEF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AAF2E94A6AECAFEF_TypeDefinitionIndex = 3447;

class AAF2E94A6AECAFEF : public ::B7B8795FB90C86A7
{
public:
	::System::UInt32 F4F6339366294E44; // 0x10

	::System::Void EF6A6535B93523FE(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AAF2E94A6AECAFEF_EF6A6535B93523FE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAF2E94A6AECAFEF__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + AAF2E94A6AECAFEF_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AAF2E94A6AECAFEF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AAF2E94A6AECAFEF*&))((::PBYTE)hIl2Cpp + AAF2E94A6AECAFEF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::UInt32 B8422D732CF33BDB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAF2E94A6AECAFEF_B8422D732CF33BDB_OFFSET))(this);
	}
};
