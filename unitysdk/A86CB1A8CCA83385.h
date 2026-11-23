#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A86CB1A8CCA83385_A3E79294EDB5723E_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A86CB1A8CCA83385_E2E01FDD7C888535_OFFSET UNITYSDK_OFFSET(0x1F86890)
#define A86CB1A8CCA83385_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define A86CB1A8CCA83385_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2662EB0)
#define A86CB1A8CCA83385__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A86CB1A8CCA83385_TypeDefinitionIndex = 6299;

class A86CB1A8CCA83385 : public ::System::Object
{
public:
	::AD61077CFCBEFAEA EAF7B31770A36758; // 0x10

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A86CB1A8CCA83385_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void E2E01FDD7C888535(::AD61077CFCBEFAEA E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::AD61077CFCBEFAEA))((::PBYTE)hIl2Cpp + A86CB1A8CCA83385_E2E01FDD7C888535_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A86CB1A8CCA83385*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A86CB1A8CCA83385*&))((::PBYTE)hIl2Cpp + A86CB1A8CCA83385_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::AD61077CFCBEFAEA A3E79294EDB5723E()
	{
		return ((::AD61077CFCBEFAEA(*)(::PVOID))((::PBYTE)hIl2Cpp + A86CB1A8CCA83385_A3E79294EDB5723E_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A86CB1A8CCA83385__CTOR_OFFSET))(this);
	}
};
