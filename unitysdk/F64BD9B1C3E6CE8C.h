#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F64BD9B1C3E6CE8C_A55D8F491B9F11D5_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define F64BD9B1C3E6CE8C_AFF735A9D0BDC251_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define F64BD9B1C3E6CE8C_E1FE4F54F7EC39E5_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define F64BD9B1C3E6CE8C_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x26523E0)
#define F64BD9B1C3E6CE8C_F454D4FD7CA57985_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define F64BD9B1C3E6CE8C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26524A0)
#define F64BD9B1C3E6CE8C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F64BD9B1C3E6CE8C_TypeDefinitionIndex = 6139;

class F64BD9B1C3E6CE8C : public ::System::Object
{
public:
	::System::UInt32 AFC47658A0B7C785; // 0x10
	::System::UInt32 B23853E275ACF30C; // 0x14

	::System::UInt32 A55D8F491B9F11D5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_A55D8F491B9F11D5_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C__CTOR_OFFSET))(this);
	}

	::System::Void E1FE4F54F7EC39E5(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_E1FE4F54F7EC39E5_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F64BD9B1C3E6CE8C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F64BD9B1C3E6CE8C*&))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void F454D4FD7CA57985(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_F454D4FD7CA57985_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 AFF735A9D0BDC251()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + F64BD9B1C3E6CE8C_AFF735A9D0BDC251_OFFSET))(this);
	}
};
