#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/F97A61CEC64381FA.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define FDFEC1B64D7DC4E0_A880325CDFD2C086_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define FDFEC1B64D7DC4E0_BADB8FA0C31959D7_OFFSET UNITYSDK_OFFSET(0x17D6410)
#define FDFEC1B64D7DC4E0_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23B8E60)
#define FDFEC1B64D7DC4E0_F6B90E8376918E0F_OFFSET UNITYSDK_OFFSET(0x17D6440)
#define FDFEC1B64D7DC4E0_FB3A8D868152CF4A_OFFSET UNITYSDK_OFFSET(0x17D6170)
#define FDFEC1B64D7DC4E0_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23B8F20)
#define FDFEC1B64D7DC4E0__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FDFEC1B64D7DC4E0_TypeDefinitionIndex = 3636;

class FDFEC1B64D7DC4E0 : public ::F97A61CEC64381FA
{
public:
	::System::UInt32 E279A4066B128988; // 0x18
	::System::UInt32 F948FEE4BF06EBE9; // 0x1C

	::System::UInt32 FB3A8D868152CF4A()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_FB3A8D868152CF4A_OFFSET))(this);
	}

	::System::UInt32 A880325CDFD2C086()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_A880325CDFD2C086_OFFSET))(this);
	}

	::System::Void BADB8FA0C31959D7(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_BADB8FA0C31959D7_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F6B90E8376918E0F(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_F6B90E8376918E0F_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FDFEC1B64D7DC4E0*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FDFEC1B64D7DC4E0*&))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDFEC1B64D7DC4E0__CTOR_OFFSET))(this);
	}
};
