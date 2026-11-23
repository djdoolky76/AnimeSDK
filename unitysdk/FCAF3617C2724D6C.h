#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E4D2CA852CC7D0A3.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FD8A9AD5A20F5206;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define FCAF3617C2724D6C_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x250F140)
#define FCAF3617C2724D6C_EDDC83EB18060F73_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define FCAF3617C2724D6C_F016FEED488F0D70_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define FCAF3617C2724D6C_F6696792C4A7E8D6_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define FCAF3617C2724D6C_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x250F230)
#define FCAF3617C2724D6C_FFAF2EAE7DBC0CCB_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FCAF3617C2724D6C__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FCAF3617C2724D6C_TypeDefinitionIndex = 5180;

class FCAF3617C2724D6C : public ::E4D2CA852CC7D0A3
{
public:
	::System::UInt32 F78CFA0C288DDEF6; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FD8A9AD5A20F5206*>* AC8C0759DBE14906; // 0x18

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FD8A9AD5A20F5206*>* FFAF2EAE7DBC0CCB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FD8A9AD5A20F5206*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_FFAF2EAE7DBC0CCB_OFFSET))(this);
	}

	::System::UInt32 EDDC83EB18060F73()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_EDDC83EB18060F73_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void F016FEED488F0D70(::System::Collections::Generic::Dictionary_2<::System::Int32, ::FD8A9AD5A20F5206*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FD8A9AD5A20F5206*>*))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_F016FEED488F0D70_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C__CTOR_OFFSET))(this);
	}

	::System::Void F6696792C4A7E8D6(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_F6696792C4A7E8D6_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FCAF3617C2724D6C*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FCAF3617C2724D6C*&))((::PBYTE)hIl2Cpp + FCAF3617C2724D6C_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
