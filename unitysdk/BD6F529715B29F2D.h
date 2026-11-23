#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AB51B93F1D9722EF.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
class F97A61CEC64381FA;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BD6F529715B29F2D_E2C4510E38EF2583_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define BD6F529715B29F2D_E2EFDD8C0B324A9D_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define BD6F529715B29F2D_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x23E71E0)
#define BD6F529715B29F2D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x254BDF0)
#define BD6F529715B29F2D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BD6F529715B29F2D_TypeDefinitionIndex = 5431;

class BD6F529715B29F2D : public ::AB51B93F1D9722EF
{
public:
	::F97A61CEC64381FA* E36CD7A1D3502AB7; // 0x10

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BD6F529715B29F2D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BD6F529715B29F2D*&))((::PBYTE)hIl2Cpp + BD6F529715B29F2D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BD6F529715B29F2D__CTOR_OFFSET))(this);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BD6F529715B29F2D_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	::F97A61CEC64381FA* E2EFDD8C0B324A9D()
	{
		return ((::F97A61CEC64381FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BD6F529715B29F2D_E2EFDD8C0B324A9D_OFFSET))(this);
	}

	::System::Void E2C4510E38EF2583(::F97A61CEC64381FA* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::F97A61CEC64381FA*))((::PBYTE)hIl2Cpp + BD6F529715B29F2D_E2C4510E38EF2583_OFFSET))(this, E937D4885DAA1AE8);
	}
};
