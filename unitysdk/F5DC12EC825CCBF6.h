#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/E4D2CA852CC7D0A3.h"
#include "unitysdk/E68AA4EB51923C98/A6E622D86E71410F.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F5DC12EC825CCBF6_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2693900)
#define F5DC12EC825CCBF6_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26939F0)
#define F5DC12EC825CCBF6__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F5DC12EC825CCBF6_TypeDefinitionIndex = 6540;

class F5DC12EC825CCBF6 : public ::E4D2CA852CC7D0A3
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::E68AA4EB51923C98::B92BBABCE5ECD236 BB0CD91BA7BC1D8F; // 0x14
	::System::UInt32 F049F77F74A2B523; // 0x18
	::System::Byte _padding0[0x4];
	::AD61077CFCBEFAEA BFEB5D3A4B66DC67; // 0x20
	::System::Boolean ED4392F3B610BEEA; // 0x28
	::System::Byte _padding1[0x3];
	::System::UInt32 E9161AE6B7C1B8D7; // 0x2C
	::System::Boolean BBE7CD9C0AA236F3; // 0x30
	::System::Byte _padding2[0x3];
	::E68AA4EB51923C98::A6E622D86E71410F AD10F637FE657757; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5DC12EC825CCBF6__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F5DC12EC825CCBF6*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F5DC12EC825CCBF6*&))((::PBYTE)hIl2Cpp + F5DC12EC825CCBF6_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F5DC12EC825CCBF6_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}
};
