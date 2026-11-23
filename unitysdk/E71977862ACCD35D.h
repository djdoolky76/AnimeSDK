#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FA9F92E8E9C904ED;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define E71977862ACCD35D_A012BEF09FA46BE0_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E71977862ACCD35D_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2746FB0)
#define E71977862ACCD35D_EFD0844EBC328DB5_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E71977862ACCD35D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2747100)
#define E71977862ACCD35D__CTOR_OFFSET UNITYSDK_OFFSET(0x27472C0)

inline static constexpr unsigned int E71977862ACCD35D_TypeDefinitionIndex = 3047;

class E71977862ACCD35D : public ::System::Object
{
public:
	::FA9B773E8C9B97E9<::FA9F92E8E9C904ED*>* F278C329FDD19ADC; // 0x10

	::System::Void EFD0844EBC328DB5(::FA9B773E8C9B97E9<::FA9F92E8E9C904ED*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::FA9F92E8E9C904ED*>*))((::PBYTE)hIl2Cpp + E71977862ACCD35D_EFD0844EBC328DB5_OFFSET))(this, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::FA9F92E8E9C904ED*>* A012BEF09FA46BE0()
	{
		return ((::FA9B773E8C9B97E9<::FA9F92E8E9C904ED*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E71977862ACCD35D_A012BEF09FA46BE0_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E71977862ACCD35D_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E71977862ACCD35D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E71977862ACCD35D*&))((::PBYTE)hIl2Cpp + E71977862ACCD35D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E71977862ACCD35D__CTOR_OFFSET))(this);
	}
};
