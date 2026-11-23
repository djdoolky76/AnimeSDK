#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BC84BFBE88D4F4DA.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class BFD1C0091E71C3E5;
class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define EC3D325403397E54_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x243EEE0)
#define EC3D325403397E54_F65CFAB8E65DB777_OFFSET UNITYSDK_OFFSET(0x17395E0)
#define EC3D325403397E54_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x243F050)
#define EC3D325403397E54_FEB156B5AE86D587_OFFSET UNITYSDK_OFFSET(0x1BF9BA0)
#define EC3D325403397E54__CTOR_OFFSET UNITYSDK_OFFSET(0x243F240)

inline static constexpr unsigned int EC3D325403397E54_TypeDefinitionIndex = 2423;

class EC3D325403397E54 : public ::BC84BFBE88D4F4DA
{
public:
	::FA9B773E8C9B97E9<::BFD1C0091E71C3E5*>* FA43B4DE7D2D6B17; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC3D325403397E54__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EC3D325403397E54*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EC3D325403397E54*&))((::PBYTE)hIl2Cpp + EC3D325403397E54_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void FEB156B5AE86D587(::FA9B773E8C9B97E9<::BFD1C0091E71C3E5*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::BFD1C0091E71C3E5*>*))((::PBYTE)hIl2Cpp + EC3D325403397E54_FEB156B5AE86D587_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + EC3D325403397E54_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::FA9B773E8C9B97E9<::BFD1C0091E71C3E5*>* F65CFAB8E65DB777()
	{
		return ((::FA9B773E8C9B97E9<::BFD1C0091E71C3E5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EC3D325403397E54_F65CFAB8E65DB777_OFFSET))(this);
	}
};
