#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FC21A125C38120E4;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BCBBF83CCD4A07F8_B169336DB4D4045B_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define BCBBF83CCD4A07F8_E2301AA70E1FDB57_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define BCBBF83CCD4A07F8_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x234C200)
#define BCBBF83CCD4A07F8_EF701956F908A317_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BCBBF83CCD4A07F8_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x234C230)
#define BCBBF83CCD4A07F8_FCF9E32B7A099FFF_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BCBBF83CCD4A07F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BCBBF83CCD4A07F8_TypeDefinitionIndex = 3147;

class BCBBF83CCD4A07F8 : public ::System::Object
{
public:
	::FC21A125C38120E4* E773C2B90E8A9807; // 0x10
	::System::UInt32 EB772844EA861886; // 0x18

	::System::Void EF701956F908A317(::FC21A125C38120E4* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FC21A125C38120E4*))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_EF701956F908A317_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 E2301AA70E1FDB57()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_E2301AA70E1FDB57_OFFSET))(this);
	}

	::System::Void B169336DB4D4045B(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_B169336DB4D4045B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BCBBF83CCD4A07F8*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BCBBF83CCD4A07F8*&))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8__CTOR_OFFSET))(this);
	}

	::FC21A125C38120E4* FCF9E32B7A099FFF()
	{
		return ((::FC21A125C38120E4*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCBBF83CCD4A07F8_FCF9E32B7A099FFF_OFFSET))(this);
	}
};
