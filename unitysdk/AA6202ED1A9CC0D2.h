#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E620D2A9C2CEE09F.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define AA6202ED1A9CC0D2_A02DEC39F51C7E06_OFFSET UNITYSDK_OFFSET(0x17D6410)
#define AA6202ED1A9CC0D2_B169336DB4D4045B_OFFSET UNITYSDK_OFFSET(0x233F9D0)
#define AA6202ED1A9CC0D2_BED15E5C496510EA_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define AA6202ED1A9CC0D2_E2301AA70E1FDB57_OFFSET UNITYSDK_OFFSET(0x233F9B0)
#define AA6202ED1A9CC0D2_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23DE410)
#define AA6202ED1A9CC0D2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23DE500)
#define AA6202ED1A9CC0D2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AA6202ED1A9CC0D2_TypeDefinitionIndex = 3914;

class AA6202ED1A9CC0D2 : public ::E620D2A9C2CEE09F
{
public:
	::System::Single EB772844EA861886; // 0x18
	::System::UInt32 AC90A7239C7A14DD; // 0x1C

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AA6202ED1A9CC0D2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AA6202ED1A9CC0D2*&))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::UInt32 BED15E5C496510EA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_BED15E5C496510EA_OFFSET))(this);
	}

	::System::Single E2301AA70E1FDB57()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_E2301AA70E1FDB57_OFFSET))(this);
	}

	::System::Void B169336DB4D4045B(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_B169336DB4D4045B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2__CTOR_OFFSET))(this);
	}

	::System::Void A02DEC39F51C7E06(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AA6202ED1A9CC0D2_A02DEC39F51C7E06_OFFSET))(this, E937D4885DAA1AE8);
	}
};
