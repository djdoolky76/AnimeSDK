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

#define F97A61CEC64381FA_AEEB3A7890495EA1_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F97A61CEC64381FA_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x234C200)
#define F97A61CEC64381FA_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24E23A0)
#define F97A61CEC64381FA_FDD96FDFB4230265_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F97A61CEC64381FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F97A61CEC64381FA_TypeDefinitionIndex = 5052;

class F97A61CEC64381FA : public ::System::Object
{
public:
	::FD94128446C24CE9* E2AA6A67812385EB; // 0x10

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + F97A61CEC64381FA_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::FD94128446C24CE9* FDD96FDFB4230265()
	{
		return ((::FD94128446C24CE9*(*)(::PVOID))((::PBYTE)hIl2Cpp + F97A61CEC64381FA_FDD96FDFB4230265_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F97A61CEC64381FA__CTOR_OFFSET))(this);
	}

	::System::Void AEEB3A7890495EA1(::FD94128446C24CE9* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FD94128446C24CE9*))((::PBYTE)hIl2Cpp + F97A61CEC64381FA_AEEB3A7890495EA1_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F97A61CEC64381FA*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F97A61CEC64381FA*&))((::PBYTE)hIl2Cpp + F97A61CEC64381FA_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
