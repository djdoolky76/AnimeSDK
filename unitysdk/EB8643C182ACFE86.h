#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FB6C201986850D63;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define EB8643C182ACFE86_A4D9636DF5966C5D_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define EB8643C182ACFE86_ABFC35123D2E5B58_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define EB8643C182ACFE86_BA2716ADA4CE0956_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EB8643C182ACFE86_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x25D7EC0)
#define EB8643C182ACFE86_F11FFC6AA9E22040_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define EB8643C182ACFE86_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25D8010)
#define EB8643C182ACFE86__CTOR_OFFSET UNITYSDK_OFFSET(0x25D8370)

inline static constexpr unsigned int EB8643C182ACFE86_TypeDefinitionIndex = 5651;

class EB8643C182ACFE86 : public ::System::Object
{
public:
	::System::String* A9DFDE835E8FE4EF; // 0x10
	::FA9B773E8C9B97E9<::FB6C201986850D63*>* FB7C8141FA411417; // 0x18

	::System::String* BA2716ADA4CE0956()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_BA2716ADA4CE0956_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::FA9B773E8C9B97E9<::FB6C201986850D63*>* A4D9636DF5966C5D()
	{
		return ((::FA9B773E8C9B97E9<::FB6C201986850D63*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_A4D9636DF5966C5D_OFFSET))(this);
	}

	::System::Void F11FFC6AA9E22040(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_F11FFC6AA9E22040_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::EB8643C182ACFE86*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::EB8643C182ACFE86*&))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EB8643C182ACFE86__CTOR_OFFSET))(this);
	}

	::System::Void ABFC35123D2E5B58(::FA9B773E8C9B97E9<::FB6C201986850D63*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::FB6C201986850D63*>*))((::PBYTE)hIl2Cpp + EB8643C182ACFE86_ABFC35123D2E5B58_OFFSET))(this, E937D4885DAA1AE8);
	}
};
