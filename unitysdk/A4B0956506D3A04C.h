#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BB2116B7314E0DDF;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A4B0956506D3A04C_A21FF948EE60FB77_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A4B0956506D3A04C_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x234C200)
#define A4B0956506D3A04C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2430D10)
#define A4B0956506D3A04C_FEFD26CAC4AE823E_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A4B0956506D3A04C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4B0956506D3A04C_TypeDefinitionIndex = 4214;

class A4B0956506D3A04C : public ::System::Object
{
public:
	::BB2116B7314E0DDF* FF1F193FD116DF6A; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0956506D3A04C__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A4B0956506D3A04C_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::BB2116B7314E0DDF* FEFD26CAC4AE823E()
	{
		return ((::BB2116B7314E0DDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0956506D3A04C_FEFD26CAC4AE823E_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A4B0956506D3A04C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A4B0956506D3A04C*&))((::PBYTE)hIl2Cpp + A4B0956506D3A04C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A21FF948EE60FB77(::BB2116B7314E0DDF* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::BB2116B7314E0DDF*))((::PBYTE)hIl2Cpp + A4B0956506D3A04C_A21FF948EE60FB77_OFFSET))(this, E937D4885DAA1AE8);
	}
};
