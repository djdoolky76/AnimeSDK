#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class ABA96B919541EF45;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define BFA7338ED7F42602_AEDABFC9762EBE25_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define BFA7338ED7F42602_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2723AF0)
#define BFA7338ED7F42602_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define BFA7338ED7F42602_FA028B7183362656_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define BFA7338ED7F42602_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2723C40)
#define BFA7338ED7F42602__CTOR_OFFSET UNITYSDK_OFFSET(0x2723EA0)

inline static constexpr unsigned int BFA7338ED7F42602_TypeDefinitionIndex = 2991;

class BFA7338ED7F42602 : public ::System::Object
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::FA9B773E8C9B97E9<::ABA96B919541EF45*>* A8273FAF343615B4; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BFA7338ED7F42602*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BFA7338ED7F42602*&))((::PBYTE)hIl2Cpp + BFA7338ED7F42602_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::FA9B773E8C9B97E9<::ABA96B919541EF45*>* FA028B7183362656()
	{
		return ((::FA9B773E8C9B97E9<::ABA96B919541EF45*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFA7338ED7F42602_FA028B7183362656_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFA7338ED7F42602_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void AEDABFC9762EBE25(::FA9B773E8C9B97E9<::ABA96B919541EF45*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::ABA96B919541EF45*>*))((::PBYTE)hIl2Cpp + BFA7338ED7F42602_AEDABFC9762EBE25_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BFA7338ED7F42602_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFA7338ED7F42602__CTOR_OFFSET))(this);
	}
};
