#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FD94128446C24CE9;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define ABC44862C852C520_A638B1AE0944B08B_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC44862C852C520_AEEB3A7890495EA1_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ABC44862C852C520_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x234C200)
#define ABC44862C852C520_F2EEC44B38FCAE94_OFFSET UNITYSDK_OFFSET(0x1873310)
#define ABC44862C852C520_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24C8780)
#define ABC44862C852C520_FDD96FDFB4230265_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ABC44862C852C520__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABC44862C852C520_TypeDefinitionIndex = 4845;

class ABC44862C852C520 : public ::System::Object
{
public:
	::FD94128446C24CE9* E2AA6A67812385EB; // 0x10
	::System::Boolean B3F490A1A1020BCF; // 0x18

	::System::Void AEEB3A7890495EA1(::FD94128446C24CE9* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FD94128446C24CE9*))((::PBYTE)hIl2Cpp + ABC44862C852C520_AEEB3A7890495EA1_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + ABC44862C852C520_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::FD94128446C24CE9* FDD96FDFB4230265()
	{
		return ((::FD94128446C24CE9*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC44862C852C520_FDD96FDFB4230265_OFFSET))(this);
	}

	::System::Boolean A638B1AE0944B08B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC44862C852C520_A638B1AE0944B08B_OFFSET))(this);
	}

	::System::Void F2EEC44B38FCAE94(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC44862C852C520_F2EEC44B38FCAE94_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC44862C852C520__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ABC44862C852C520*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ABC44862C852C520*&))((::PBYTE)hIl2Cpp + ABC44862C852C520_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
