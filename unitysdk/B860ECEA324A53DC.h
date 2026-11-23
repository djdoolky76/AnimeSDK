#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define B860ECEA324A53DC_BBEC6D35271A17EB_OFFSET UNITYSDK_OFFSET(0x16A7BC0)
#define B860ECEA324A53DC_BD15689F5F1AA5A1_OFFSET UNITYSDK_OFFSET(0x19DB7F0)
#define B860ECEA324A53DC_E1299B6D28799307_OFFSET UNITYSDK_OFFSET(0x19DB800)
#define B860ECEA324A53DC_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x2409340)
#define B860ECEA324A53DC_F5AFED2A7EFFF097_OFFSET UNITYSDK_OFFSET(0x16A7C80)
#define B860ECEA324A53DC_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2409400)
#define B860ECEA324A53DC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B860ECEA324A53DC_TypeDefinitionIndex = 4058;

class B860ECEA324A53DC : public ::System::Object
{
public:
	::System::UInt32 AC13FFD3D5382ABC; // 0x10
	::System::UInt32 BD2A4AED14930545; // 0x14

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B860ECEA324A53DC*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B860ECEA324A53DC*&))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::UInt32 BBEC6D35271A17EB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_BBEC6D35271A17EB_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void E1299B6D28799307(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_E1299B6D28799307_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::UInt32 BD15689F5F1AA5A1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_BD15689F5F1AA5A1_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B860ECEA324A53DC__CTOR_OFFSET))(this);
	}

	::System::Void F5AFED2A7EFFF097(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B860ECEA324A53DC_F5AFED2A7EFFF097_OFFSET))(this, E937D4885DAA1AE8);
	}
};
