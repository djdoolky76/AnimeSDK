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

#define BBD2A66465D9F514_A1CF366DEF0C4BD0_OFFSET UNITYSDK_OFFSET(0x2327230)
#define BBD2A66465D9F514_B15059D6112FC4A3_OFFSET UNITYSDK_OFFSET(0x2327240)
#define BBD2A66465D9F514_BD461BDED99BEFE8_OFFSET UNITYSDK_OFFSET(0x1ACD0A0)
#define BBD2A66465D9F514_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define BBD2A66465D9F514_EFA27315B85D9693_OFFSET UNITYSDK_OFFSET(0x1ACD080)
#define BBD2A66465D9F514_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26BB760)
#define BBD2A66465D9F514__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BBD2A66465D9F514_TypeDefinitionIndex = 2565;

class BBD2A66465D9F514 : public ::System::Object
{
public:
	::System::Single AEBABA41CCB3A94B; // 0x10
	::System::Boolean B2A272B48C9A62CB; // 0x14

	::System::Boolean EFA27315B85D9693()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_EFA27315B85D9693_OFFSET))(this);
	}

	::System::Void B15059D6112FC4A3(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_B15059D6112FC4A3_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BBD2A66465D9F514*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BBD2A66465D9F514*&))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBD2A66465D9F514__CTOR_OFFSET))(this);
	}

	::System::Void BD461BDED99BEFE8(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_BD461BDED99BEFE8_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Single A1CF366DEF0C4BD0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BBD2A66465D9F514_A1CF366DEF0C4BD0_OFFSET))(this);
	}
};
