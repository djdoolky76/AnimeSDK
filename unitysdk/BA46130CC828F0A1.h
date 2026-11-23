#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class B3687AB065DF94CB;
class E289C81CCEDE2953;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BA46130CC828F0A1_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x25D61E0)
#define BA46130CC828F0A1_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D62A0)
#define BA46130CC828F0A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BA46130CC828F0A1_TypeDefinitionIndex = 5596;

class BA46130CC828F0A1 : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::Byte _padding0[0x4];
	::E865F6F8B8B44C1E E96B704915D22C2C; // 0x18
	::B3687AB065DF94CB* F3243A43F36B6DD9; // 0x20
	::E289C81CCEDE2953* FC62CA9006DAF93C; // 0x28

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BA46130CC828F0A1*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BA46130CC828F0A1*&))((::PBYTE)hIl2Cpp + BA46130CC828F0A1_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BA46130CC828F0A1_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BA46130CC828F0A1__CTOR_OFFSET))(this);
	}
};
