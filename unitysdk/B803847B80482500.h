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

#define B803847B80482500_A922E581429D8D9E_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define B803847B80482500_AF1DE331F6A57C4D_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define B803847B80482500_B59866357CA5C77E_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define B803847B80482500_B704E71355DA3D98_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B803847B80482500_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2341680)
#define B803847B80482500_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2341740)
#define B803847B80482500__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B803847B80482500_TypeDefinitionIndex = 2378;

class B803847B80482500 : public ::System::Object
{
public:
	::System::UInt32 A99A20E2AA9FAA0E; // 0x10
	::System::Int32 FE211C494B36BC5B; // 0x14

	::System::Int32 AF1DE331F6A57C4D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + B803847B80482500_AF1DE331F6A57C4D_OFFSET))(this);
	}

	::System::UInt32 B59866357CA5C77E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B803847B80482500_B59866357CA5C77E_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B803847B80482500_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void B704E71355DA3D98(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B803847B80482500_B704E71355DA3D98_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B803847B80482500__CTOR_OFFSET))(this);
	}

	::System::Void A922E581429D8D9E(::System::Int32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + B803847B80482500_A922E581429D8D9E_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B803847B80482500*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B803847B80482500*&))((::PBYTE)hIl2Cpp + B803847B80482500_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
