#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FC814F9B9EA39DC4.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F7AAB8DC4EE93B72_B506BB0ED7765BEE_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define F7AAB8DC4EE93B72_B6C369F81F345FAD_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define F7AAB8DC4EE93B72_BDDFF5625694C33D_OFFSET UNITYSDK_OFFSET(0x165A410)
#define F7AAB8DC4EE93B72_E93052E20E6DB660_OFFSET UNITYSDK_OFFSET(0x18249E0)
#define F7AAB8DC4EE93B72_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23C0690)
#define F7AAB8DC4EE93B72_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23C0790)
#define F7AAB8DC4EE93B72__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F7AAB8DC4EE93B72_TypeDefinitionIndex = 3827;

class F7AAB8DC4EE93B72 : public ::FC814F9B9EA39DC4
{
public:
	::System::String* EAD20A5B8BE85C1B; // 0x30
	::E865F6F8B8B44C1E FE83F841A1429A0A; // 0x38

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F7AAB8DC4EE93B72*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F7AAB8DC4EE93B72*&))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::E865F6F8B8B44C1E BDDFF5625694C33D()
	{
		return ((::E865F6F8B8B44C1E(*)(::PVOID))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_BDDFF5625694C33D_OFFSET))(this);
	}

	::System::String* B506BB0ED7765BEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_B506BB0ED7765BEE_OFFSET))(this);
	}

	::System::Void E93052E20E6DB660(::E865F6F8B8B44C1E E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E865F6F8B8B44C1E))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_E93052E20E6DB660_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72__CTOR_OFFSET))(this);
	}

	::System::Void B6C369F81F345FAD(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F7AAB8DC4EE93B72_B6C369F81F345FAD_OFFSET))(this, E937D4885DAA1AE8);
	}
};
