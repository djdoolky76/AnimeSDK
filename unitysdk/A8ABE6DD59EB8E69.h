#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3D26E29D73A2E4B.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define A8ABE6DD59EB8E69_B4F5E218AC786A8B_OFFSET UNITYSDK_OFFSET(0x181E4F0)
#define A8ABE6DD59EB8E69_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x241DC50)
#define A8ABE6DD59EB8E69_F01FC7E88A6EEABE_OFFSET UNITYSDK_OFFSET(0x16D1B90)
#define A8ABE6DD59EB8E69_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x241DD40)
#define A8ABE6DD59EB8E69__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A8ABE6DD59EB8E69_TypeDefinitionIndex = 4160;

class A8ABE6DD59EB8E69 : public ::E3D26E29D73A2E4B
{
public:
	::System::UInt32 B2A9876678B3336E; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8ABE6DD59EB8E69__CTOR_OFFSET))(this);
	}

	::System::UInt32 F01FC7E88A6EEABE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + A8ABE6DD59EB8E69_F01FC7E88A6EEABE_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A8ABE6DD59EB8E69*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A8ABE6DD59EB8E69*&))((::PBYTE)hIl2Cpp + A8ABE6DD59EB8E69_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + A8ABE6DD59EB8E69_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void B4F5E218AC786A8B(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A8ABE6DD59EB8E69_B4F5E218AC786A8B_OFFSET))(this, E937D4885DAA1AE8);
	}
};
