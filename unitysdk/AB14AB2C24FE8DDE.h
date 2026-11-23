#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FA14EE9263C422FF.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define AB14AB2C24FE8DDE_A9636F112A9BF735_OFFSET UNITYSDK_OFFSET(0x16855F0)
#define AB14AB2C24FE8DDE_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2360180)
#define AB14AB2C24FE8DDE_F4F098CC6B27951C_OFFSET UNITYSDK_OFFSET(0x1E45450)
#define AB14AB2C24FE8DDE_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2360270)
#define AB14AB2C24FE8DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x2360430)

inline static constexpr unsigned int AB14AB2C24FE8DDE_TypeDefinitionIndex = 3291;

class AB14AB2C24FE8DDE : public ::FA14EE9263C422FF
{
public:
	::System::UInt32 A615B0792B85C77E; // 0x58

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + AB14AB2C24FE8DDE_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::UInt32 A9636F112A9BF735()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AB14AB2C24FE8DDE_A9636F112A9BF735_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB14AB2C24FE8DDE__CTOR_OFFSET))(this);
	}

	::System::Void F4F098CC6B27951C(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AB14AB2C24FE8DDE_F4F098CC6B27951C_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AB14AB2C24FE8DDE*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AB14AB2C24FE8DDE*&))((::PBYTE)hIl2Cpp + AB14AB2C24FE8DDE_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
