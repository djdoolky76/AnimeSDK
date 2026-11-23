#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A32B12A2A9CBC358.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BE08A46D55F3A69F;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define E44355702F9F45F1_A6BAE033FC06C404_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define E44355702F9F45F1_A75315192B820FB1_OFFSET UNITYSDK_OFFSET(0x169C070)
#define E44355702F9F45F1_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x24D4360)
#define E44355702F9F45F1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24D4370)
#define E44355702F9F45F1__CTOR_OFFSET UNITYSDK_OFFSET(0x2479470)

inline static constexpr unsigned int E44355702F9F45F1_TypeDefinitionIndex = 5053;

class E44355702F9F45F1 : public ::A32B12A2A9CBC358
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* A88EBD4F6C315B14; // 0x28

	::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* A75315192B820FB1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E44355702F9F45F1_A75315192B820FB1_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E44355702F9F45F1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E44355702F9F45F1*&))((::PBYTE)hIl2Cpp + E44355702F9F45F1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E44355702F9F45F1_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E44355702F9F45F1__CTOR_OFFSET))(this);
	}

	::System::Void A6BAE033FC06C404(::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::BE08A46D55F3A69F*>*))((::PBYTE)hIl2Cpp + E44355702F9F45F1_A6BAE033FC06C404_OFFSET))(this, E937D4885DAA1AE8);
	}
};
