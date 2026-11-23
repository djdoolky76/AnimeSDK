#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FAF5D990ACAC9754.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/F7CBD3DC1F52BC40.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class EA1B3A10A2CEEB53;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F1FE90EB8302151C_A5366B6F4FD08074_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F1FE90EB8302151C_EBA983BCC07AF116_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F1FE90EB8302151C_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x238F700)
#define F1FE90EB8302151C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x238F890)
#define F1FE90EB8302151C__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int F1FE90EB8302151C_TypeDefinitionIndex = 3612;

class F1FE90EB8302151C : public ::F7CBD3DC1F52BC40
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FAF5D990ACAC9754, ::EA1B3A10A2CEEB53*>* F1FEDFFC297087A6; // 0x10

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FAF5D990ACAC9754, ::EA1B3A10A2CEEB53*>* EBA983BCC07AF116()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FAF5D990ACAC9754, ::EA1B3A10A2CEEB53*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1FE90EB8302151C_EBA983BCC07AF116_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1FE90EB8302151C__CTOR_OFFSET))(this);
	}

	::System::Void A5366B6F4FD08074(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FAF5D990ACAC9754, ::EA1B3A10A2CEEB53*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::FAF5D990ACAC9754, ::EA1B3A10A2CEEB53*>*))((::PBYTE)hIl2Cpp + F1FE90EB8302151C_A5366B6F4FD08074_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F1FE90EB8302151C_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F1FE90EB8302151C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F1FE90EB8302151C*&))((::PBYTE)hIl2Cpp + F1FE90EB8302151C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
