#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFA79908EA870FE6.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/E2DE926113CB084F.h"

class BFA7338ED7F42602;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BC628135446B06FC_A5D571292BBDB4C2_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define BC628135446B06FC_AD28F245E710F173_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define BC628135446B06FC_BEFBEABE88C76A27_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define BC628135446B06FC_E169156EFBBDC778_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define BC628135446B06FC_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26A12E0)
#define BC628135446B06FC__CTOR_OFFSET UNITYSDK_OFFSET(0x26A13A0)

inline static constexpr unsigned int BC628135446B06FC_TypeDefinitionIndex = 6572;

class BC628135446B06FC : public ::AFA79908EA870FE6
{
public:
	::System::UInt32 F46FAA0CBD951B9A; // 0x18
	::System::Byte _padding0[0x4];
	::BFA7338ED7F42602* EDCE3827481D905B; // 0x20

	::System::Void AD28F245E710F173(::BFA7338ED7F42602* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::BFA7338ED7F42602*))((::PBYTE)hIl2Cpp + BC628135446B06FC_AD28F245E710F173_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC628135446B06FC__CTOR_OFFSET))(this);
	}

	::System::Void BEFBEABE88C76A27(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BC628135446B06FC_BEFBEABE88C76A27_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BC628135446B06FC_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::BFA7338ED7F42602* E169156EFBBDC778()
	{
		return ((::BFA7338ED7F42602*(*)(::PVOID))((::PBYTE)hIl2Cpp + BC628135446B06FC_E169156EFBBDC778_OFFSET))(this);
	}

	::System::UInt32 A5D571292BBDB4C2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BC628135446B06FC_A5D571292BBDB4C2_OFFSET))(this);
	}
};
