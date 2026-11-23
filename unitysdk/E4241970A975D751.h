#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/FC814F9B9EA39DC4.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define E4241970A975D751_A7CB27EFEA502498_OFFSET UNITYSDK_OFFSET(0x1E962E0)
#define E4241970A975D751_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2658D90)
#define E4241970A975D751_F404FADBEB3B9993_OFFSET UNITYSDK_OFFSET(0x18D8920)
#define E4241970A975D751_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2658E50)
#define E4241970A975D751__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E4241970A975D751_TypeDefinitionIndex = 6290;

class E4241970A975D751 : public ::FC814F9B9EA39DC4
{
public:
	::System::UInt32 A1F7787E3D6D5C19; // 0x30

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E4241970A975D751*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E4241970A975D751*&))((::PBYTE)hIl2Cpp + E4241970A975D751_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::UInt32 F404FADBEB3B9993()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + E4241970A975D751_F404FADBEB3B9993_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E4241970A975D751_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void A7CB27EFEA502498(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + E4241970A975D751_A7CB27EFEA502498_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E4241970A975D751__CTOR_OFFSET))(this);
	}
};
