#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BDA36A6F4706C581;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define FC694ECC2F148206_BBFF39C4FBEB0606_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FC694ECC2F148206_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x239DDD0)
#define FC694ECC2F148206_F025FCFC4144715A_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define FC694ECC2F148206_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define FC694ECC2F148206_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x239DE00)
#define FC694ECC2F148206__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FC694ECC2F148206_TypeDefinitionIndex = 3563;

class FC694ECC2F148206 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::BDA36A6F4706C581* A4057ABD49069451; // 0x18

	::System::Void F025FCFC4144715A(::BDA36A6F4706C581* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::BDA36A6F4706C581*))((::PBYTE)hIl2Cpp + FC694ECC2F148206_F025FCFC4144715A_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FC694ECC2F148206*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FC694ECC2F148206*&))((::PBYTE)hIl2Cpp + FC694ECC2F148206_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FC694ECC2F148206_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC694ECC2F148206__CTOR_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FC694ECC2F148206_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::BDA36A6F4706C581* BBFF39C4FBEB0606()
	{
		return ((::BDA36A6F4706C581*(*)(::PVOID))((::PBYTE)hIl2Cpp + FC694ECC2F148206_BBFF39C4FBEB0606_OFFSET))(this);
	}
};
