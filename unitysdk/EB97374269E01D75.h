#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A7D164E589ADC251.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class A70704C7EDBB1B6C;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define EB97374269E01D75_A3E973DCED79CDCE_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define EB97374269E01D75_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x240FF50)
#define EB97374269E01D75_F37EA1B0328ECF62_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define EB97374269E01D75_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24100C0)
#define EB97374269E01D75__CTOR_OFFSET UNITYSDK_OFFSET(0x24102B0)

inline static constexpr unsigned int EB97374269E01D75_TypeDefinitionIndex = 4099;

class EB97374269E01D75 : public ::A7D164E589ADC251
{
public:
	::FA9B773E8C9B97E9<::A70704C7EDBB1B6C*>* A75F7646F7BBA556; // 0x30

	::FA9B773E8C9B97E9<::A70704C7EDBB1B6C*>* F37EA1B0328ECF62()
	{
		return ((::FA9B773E8C9B97E9<::A70704C7EDBB1B6C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EB97374269E01D75_F37EA1B0328ECF62_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EB97374269E01D75*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EB97374269E01D75*&))((::PBYTE)hIl2Cpp + EB97374269E01D75_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void A3E973DCED79CDCE(::FA9B773E8C9B97E9<::A70704C7EDBB1B6C*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::A70704C7EDBB1B6C*>*))((::PBYTE)hIl2Cpp + EB97374269E01D75_A3E973DCED79CDCE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + EB97374269E01D75_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB97374269E01D75__CTOR_OFFSET))(this);
	}
};
