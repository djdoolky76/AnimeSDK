#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BE08A46D55F3A69F;
class F2004B69BD346DB7;
class FE57B9E2F62E1608;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F1CE7CCF4D819D87_B3CD34FA13B7CA06_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define F1CE7CCF4D819D87_B49542A617935DF0_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define F1CE7CCF4D819D87_BAE1F62A3100C278_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F1CE7CCF4D819D87_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x239DDD0)
#define F1CE7CCF4D819D87_F4E0D0268F06A047_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define F1CE7CCF4D819D87_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F1CE7CCF4D819D87_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D6D60)
#define F1CE7CCF4D819D87__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1CE7CCF4D819D87_TypeDefinitionIndex = 5673;

class F1CE7CCF4D819D87 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::FE57B9E2F62E1608* F051DF556F2054CE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* B51A04FD2FA81372; // 0x20

	::FE57B9E2F62E1608* BAE1F62A3100C278()
	{
		return ((::FE57B9E2F62E1608*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_BAE1F62A3100C278_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void B3CD34FA13B7CA06(::FE57B9E2F62E1608* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FE57B9E2F62E1608*))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_B3CD34FA13B7CA06_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F4E0D0268F06A047(::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_F4E0D0268F06A047_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* B49542A617935DF0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_B49542A617935DF0_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F1CE7CCF4D819D87*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F1CE7CCF4D819D87*&))((::PBYTE)hIl2Cpp + F1CE7CCF4D819D87_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
