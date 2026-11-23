#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A32B12A2A9CBC358.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FE57B9E2F62E1608;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BC84BFBE88D4F4DA_B3CD34FA13B7CA06_OFFSET UNITYSDK_OFFSET(0x1962CA0)
#define BC84BFBE88D4F4DA_BAE1F62A3100C278_OFFSET UNITYSDK_OFFSET(0x169C070)
#define BC84BFBE88D4F4DA_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x263C1A0)
#define BC84BFBE88D4F4DA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x263C230)
#define BC84BFBE88D4F4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x2479470)

inline static constexpr unsigned int BC84BFBE88D4F4DA_TypeDefinitionIndex = 6103;

class BC84BFBE88D4F4DA : public ::A32B12A2A9CBC358
{
public:
	::FE57B9E2F62E1608* F051DF556F2054CE; // 0x28

	::System::Void B3CD34FA13B7CA06(::FE57B9E2F62E1608* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FE57B9E2F62E1608*))((::PBYTE)hIl2Cpp + BC84BFBE88D4F4DA_B3CD34FA13B7CA06_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BC84BFBE88D4F4DA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BC84BFBE88D4F4DA*&))((::PBYTE)hIl2Cpp + BC84BFBE88D4F4DA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::FE57B9E2F62E1608* BAE1F62A3100C278()
	{
		return ((::FE57B9E2F62E1608*(*)(::PVOID))((::PBYTE)hIl2Cpp + BC84BFBE88D4F4DA_BAE1F62A3100C278_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BC84BFBE88D4F4DA_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BC84BFBE88D4F4DA__CTOR_OFFSET))(this);
	}
};
