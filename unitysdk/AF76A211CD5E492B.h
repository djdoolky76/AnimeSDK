#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABA96B919541EF45.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A86BB68A4E72E546;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define AF76A211CD5E492B_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24B2000)
#define AF76A211CD5E492B_F723B2D0A911035A_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define AF76A211CD5E492B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24B2150)
#define AF76A211CD5E492B_FBD1C5569F628448_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define AF76A211CD5E492B__CTOR_OFFSET UNITYSDK_OFFSET(0x24B2340)

inline static constexpr unsigned int AF76A211CD5E492B_TypeDefinitionIndex = 4816;

class AF76A211CD5E492B : public ::ABA96B919541EF45
{
public:
	::FA9B773E8C9B97E9<::A86BB68A4E72E546*>* A0DD13ACC758E19C; // 0x10

	::FA9B773E8C9B97E9<::A86BB68A4E72E546*>* FBD1C5569F628448()
	{
		return ((::FA9B773E8C9B97E9<::A86BB68A4E72E546*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AF76A211CD5E492B_FBD1C5569F628448_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AF76A211CD5E492B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AF76A211CD5E492B*&))((::PBYTE)hIl2Cpp + AF76A211CD5E492B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + AF76A211CD5E492B_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AF76A211CD5E492B__CTOR_OFFSET))(this);
	}

	::System::Void F723B2D0A911035A(::FA9B773E8C9B97E9<::A86BB68A4E72E546*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::A86BB68A4E72E546*>*))((::PBYTE)hIl2Cpp + AF76A211CD5E492B_F723B2D0A911035A_OFFSET))(this, E937D4885DAA1AE8);
	}
};
