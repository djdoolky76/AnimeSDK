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

#define E4D0EF4CE21C3706_E130CB0F2B7403B2_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define E4D0EF4CE21C3706_E1F8D1589BA26CBA_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define E4D0EF4CE21C3706_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24A2FF0)
#define E4D0EF4CE21C3706_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24A3070)
#define E4D0EF4CE21C3706__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4D0EF4CE21C3706_TypeDefinitionIndex = 4594;

class E4D0EF4CE21C3706 : public ::System::Object
{
public:
	::System::UInt32 B6FF2152F37179A8; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D0EF4CE21C3706__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E4D0EF4CE21C3706*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E4D0EF4CE21C3706*&))((::PBYTE)hIl2Cpp + E4D0EF4CE21C3706_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void E1F8D1589BA26CBA(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E4D0EF4CE21C3706_E1F8D1589BA26CBA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 E130CB0F2B7403B2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E4D0EF4CE21C3706_E130CB0F2B7403B2_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E4D0EF4CE21C3706_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}
};
