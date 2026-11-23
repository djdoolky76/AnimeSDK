#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class FB20952B46DD0EF8;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
template <typename T> class FA9B773E8C9B97E9;

#define E1F92225F9A40571_A0C801790FCC68B8_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E1F92225F9A40571_B196F19D0F58C220_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E1F92225F9A40571_BE42D77A7D164882_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define E1F92225F9A40571_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x27279C0)
#define E1F92225F9A40571_F24B53F227F746A9_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define E1F92225F9A40571_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2727B10)
#define E1F92225F9A40571__CTOR_OFFSET UNITYSDK_OFFSET(0x2727D50)

inline static constexpr unsigned int E1F92225F9A40571_TypeDefinitionIndex = 3020;

class E1F92225F9A40571 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>* BC16ADBB26A28096; // 0x10
	::FA9B773E8C9B97E9<::FB20952B46DD0EF8*>* E92E14808192C7E0; // 0x18

	::FA9B773E8C9B97E9<::FB20952B46DD0EF8*>* BE42D77A7D164882()
	{
		return ((::FA9B773E8C9B97E9<::FB20952B46DD0EF8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E1F92225F9A40571_BE42D77A7D164882_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>* A0C801790FCC68B8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E1F92225F9A40571_A0C801790FCC68B8_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + E1F92225F9A40571_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1F92225F9A40571__CTOR_OFFSET))(this);
	}

	::System::Void B196F19D0F58C220(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>*))((::PBYTE)hIl2Cpp + E1F92225F9A40571_B196F19D0F58C220_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void F24B53F227F746A9(::FA9B773E8C9B97E9<::FB20952B46DD0EF8*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::FA9B773E8C9B97E9<::FB20952B46DD0EF8*>*))((::PBYTE)hIl2Cpp + E1F92225F9A40571_F24B53F227F746A9_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E1F92225F9A40571*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E1F92225F9A40571*&))((::PBYTE)hIl2Cpp + E1F92225F9A40571_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
