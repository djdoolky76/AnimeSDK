#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/F080A18979DB641B.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F8D62DDE7C9168A3_A15610E105B68725_OFFSET UNITYSDK_OFFSET(0x1831260)
#define F8D62DDE7C9168A3_BB90E256D30731A7_OFFSET UNITYSDK_OFFSET(0x169C070)
#define F8D62DDE7C9168A3_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2486D80)
#define F8D62DDE7C9168A3_EF79A76D8925316A_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define F8D62DDE7C9168A3_F1D07942E7490649_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define F8D62DDE7C9168A3_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2486E70)
#define F8D62DDE7C9168A3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F8D62DDE7C9168A3_TypeDefinitionIndex = 4502;

class F8D62DDE7C9168A3 : public ::F080A18979DB641B
{
public:
	::System::UInt32 E182DBD3C64FB7B0; // 0x20
	::System::Byte _padding0[0x4];
	::System::String* FBB91BEC709C207E; // 0x28

	::System::Void F1D07942E7490649(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_F1D07942E7490649_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3__CTOR_OFFSET))(this);
	}

	::System::Void EF79A76D8925316A(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_EF79A76D8925316A_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 A15610E105B68725()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_A15610E105B68725_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F8D62DDE7C9168A3*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F8D62DDE7C9168A3*&))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::String* BB90E256D30731A7()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_BB90E256D30731A7_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F8D62DDE7C9168A3_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}
};
