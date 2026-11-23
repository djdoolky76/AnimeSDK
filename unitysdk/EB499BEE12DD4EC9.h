#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FE99020EA7DB05E5.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A002D5875FA770C1;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define EB499BEE12DD4EC9_E86796D22A6640BE_OFFSET UNITYSDK_OFFSET(0x16A7BD0)
#define EB499BEE12DD4EC9_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x25435A0)
#define EB499BEE12DD4EC9_F1A58225F4A5A4AA_OFFSET UNITYSDK_OFFSET(0x2543590)
#define EB499BEE12DD4EC9_F391719252C3EF27_OFFSET UNITYSDK_OFFSET(0x16A7C90)
#define EB499BEE12DD4EC9_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2543690)
#define EB499BEE12DD4EC9__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int EB499BEE12DD4EC9_TypeDefinitionIndex = 5417;

class EB499BEE12DD4EC9 : public ::FE99020EA7DB05E5
{
public:
	::System::UInt32 E953B34BC4E14AD9; // 0x50

	::A002D5875FA770C1* F1A58225F4A5A4AA(::System::Int32 F95BFBD50DB67468)
	{
		return ((::A002D5875FA770C1*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9_F1A58225F4A5A4AA_OFFSET))(this, F95BFBD50DB67468);
	}

	::System::UInt32 E86796D22A6640BE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9_E86796D22A6640BE_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EB499BEE12DD4EC9*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EB499BEE12DD4EC9*&))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F391719252C3EF27(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EB499BEE12DD4EC9_F391719252C3EF27_OFFSET))(this, E937D4885DAA1AE8);
	}
};
