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

#define F815158A5F3D3CFA_A04A42E512577B4F_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define F815158A5F3D3CFA_AA55D7C5ECAB9CAF_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F815158A5F3D3CFA_AE1CBD0A5147FDA7_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F815158A5F3D3CFA_B0A49E155CA4F2AC_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define F815158A5F3D3CFA_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26238F0)
#define F815158A5F3D3CFA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26239B0)
#define F815158A5F3D3CFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F815158A5F3D3CFA_TypeDefinitionIndex = 5982;

class F815158A5F3D3CFA : public ::System::Object
{
public:
	::System::UInt32 B1F56D72982754B5; // 0x10
	::System::UInt32 E5BA8E59574183DD; // 0x14

	::System::UInt32 AA55D7C5ECAB9CAF()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_AA55D7C5ECAB9CAF_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA__CTOR_OFFSET))(this);
	}

	::System::UInt32 B0A49E155CA4F2AC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_B0A49E155CA4F2AC_OFFSET))(this);
	}

	::System::Void A04A42E512577B4F(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_A04A42E512577B4F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void AE1CBD0A5147FDA7(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_AE1CBD0A5147FDA7_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F815158A5F3D3CFA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F815158A5F3D3CFA*&))((::PBYTE)hIl2Cpp + F815158A5F3D3CFA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
