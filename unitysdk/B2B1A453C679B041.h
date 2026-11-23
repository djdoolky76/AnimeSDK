#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/F8723C5F6F010A6E.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class F3EAD3FDD44D7DDA;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define B2B1A453C679B041_A42D4609EAB3C136_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define B2B1A453C679B041_B242A6E00350540B_OFFSET UNITYSDK_OFFSET(0x1831260)
#define B2B1A453C679B041_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2697270)
#define B2B1A453C679B041_EFDCDA2329888139_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define B2B1A453C679B041_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2697330)
#define B2B1A453C679B041__CTOR_OFFSET UNITYSDK_OFFSET(0x169A320)

inline static constexpr unsigned int B2B1A453C679B041_TypeDefinitionIndex = 6484;

class B2B1A453C679B041 : public ::F8723C5F6F010A6E
{
public:
	::System::UInt32 A834F1C8493BD75C; // 0x20
	::System::Byte _padding0[0x4];
	::F3EAD3FDD44D7DDA* B2DC80CA3BAA4D8D; // 0x28

	::System::UInt32 B242A6E00350540B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B2B1A453C679B041_B242A6E00350540B_OFFSET))(this);
	}

	::System::Void A42D4609EAB3C136(::F3EAD3FDD44D7DDA* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::F3EAD3FDD44D7DDA*))((::PBYTE)hIl2Cpp + B2B1A453C679B041_A42D4609EAB3C136_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B2B1A453C679B041__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B2B1A453C679B041_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B2B1A453C679B041*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B2B1A453C679B041*&))((::PBYTE)hIl2Cpp + B2B1A453C679B041_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EFDCDA2329888139(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B2B1A453C679B041_EFDCDA2329888139_OFFSET))(this, E937D4885DAA1AE8);
	}
};
