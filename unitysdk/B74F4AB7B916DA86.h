#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A6751F6FB7DCCC5E.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define B74F4AB7B916DA86_E611F72678E92D3A_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B74F4AB7B916DA86_EB1CB2D6D7ECB9BB_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define B74F4AB7B916DA86_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2402590)
#define B74F4AB7B916DA86_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2402680)
#define B74F4AB7B916DA86__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

inline static constexpr unsigned int B74F4AB7B916DA86_TypeDefinitionIndex = 4017;

class B74F4AB7B916DA86 : public ::A6751F6FB7DCCC5E
{
public:
	::System::UInt32 F90A966666A739F7; // 0x10

	::System::UInt32 EB1CB2D6D7ECB9BB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B74F4AB7B916DA86_EB1CB2D6D7ECB9BB_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B74F4AB7B916DA86_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B74F4AB7B916DA86__CTOR_OFFSET))(this);
	}

	::System::Void E611F72678E92D3A(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B74F4AB7B916DA86_E611F72678E92D3A_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B74F4AB7B916DA86*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B74F4AB7B916DA86*&))((::PBYTE)hIl2Cpp + B74F4AB7B916DA86_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
