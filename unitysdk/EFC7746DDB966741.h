#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A4B0956506D3A04C;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define EFC7746DDB966741_BBFF39C4FBEB0606_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define EFC7746DDB966741_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x239DDD0)
#define EFC7746DDB966741_F025FCFC4144715A_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define EFC7746DDB966741_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define EFC7746DDB966741_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26463F0)
#define EFC7746DDB966741__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int EFC7746DDB966741_TypeDefinitionIndex = 6198;

class EFC7746DDB966741 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::A4B0956506D3A04C* A4057ABD49069451; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EFC7746DDB966741*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EFC7746DDB966741*&))((::PBYTE)hIl2Cpp + EFC7746DDB966741_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFC7746DDB966741__CTOR_OFFSET))(this);
	}

	::System::Void F025FCFC4144715A(::A4B0956506D3A04C* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::A4B0956506D3A04C*))((::PBYTE)hIl2Cpp + EFC7746DDB966741_F025FCFC4144715A_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EFC7746DDB966741_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + EFC7746DDB966741_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::A4B0956506D3A04C* BBFF39C4FBEB0606()
	{
		return ((::A4B0956506D3A04C*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFC7746DDB966741_BBFF39C4FBEB0606_OFFSET))(this);
	}
};
