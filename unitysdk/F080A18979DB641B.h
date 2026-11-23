#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define F080A18979DB641B_E1E2ADCB5169CF19_OFFSET UNITYSDK_OFFSET(0x1C4F080)
#define F080A18979DB641B_E7D8C33724189BA2_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define F080A18979DB641B_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define F080A18979DB641B_F11FFC6AA9E22040_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F080A18979DB641B_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2491730)
#define F080A18979DB641B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F080A18979DB641B_TypeDefinitionIndex = 4630;

class F080A18979DB641B : public ::System::Object
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10
	::E12F55A5FCCCF1EC F44B31FDD7FE00F0; // 0x18

	::System::Void E1E2ADCB5169CF19(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + F080A18979DB641B_E1E2ADCB5169CF19_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F080A18979DB641B*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F080A18979DB641B*&))((::PBYTE)hIl2Cpp + F080A18979DB641B_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void F11FFC6AA9E22040(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + F080A18979DB641B_F11FFC6AA9E22040_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F080A18979DB641B_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::E12F55A5FCCCF1EC E7D8C33724189BA2()
	{
		return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + F080A18979DB641B_E7D8C33724189BA2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F080A18979DB641B__CTOR_OFFSET))(this);
	}
};
