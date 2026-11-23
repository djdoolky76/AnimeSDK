#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC44862C852C520.h"
#include "unitysdk/EE42CBC98A7AE171/FE7248E34A936E8C.h"
#include "unitysdk/BD3E6890C9C82A9E.h"
#include "unitysdk/E2DE926113CB084F.h"

class F2004B69BD346DB7;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class F980ED992BA86CD0; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }

#define BFF97C5EF9E87679_EBB13EA73EA9477A_OFFSET UNITYSDK_OFFSET(0x236CF40)
#define BFF97C5EF9E87679_F3054E3D25CEF49C_OFFSET UNITYSDK_OFFSET(0x1BCACB0)
#define BFF97C5EF9E87679_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x236D000)
#define BFF97C5EF9E87679_FC1290DA7231A485_OFFSET UNITYSDK_OFFSET(0x1831260)
#define BFF97C5EF9E87679__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BFF97C5EF9E87679_TypeDefinitionIndex = 3376;

class BFF97C5EF9E87679 : public ::ABC44862C852C520
{
public:
	::System::UInt32 A0B94AE5DD4E53BE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF97C5EF9E87679__CTOR_OFFSET))(this);
	}

	::System::Void F3054E3D25CEF49C(::System::UInt32 E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFF97C5EF9E87679_F3054E3D25CEF49C_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void EBB13EA73EA9477A(::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*& AC33919C6814AE50, ::System::Boolean F28BEDAA6C28F87C, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*& EC46AD6CF05F6889, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>* A148D02C64816912)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::Collections::Pooled::PooledList_1<::System::UInt64>*&, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::ABC::Collections::Pooled::PooledList_1<::System::UInt32>*>*&, ::System::F980ED992BA86CD0<::System::UInt64, ::F2004B69BD346DB7*, ::UnityEngine::Object*, ::System::Int32, ::EE42CBC98A7AE171::FE7248E34A936E8C>*))((::PBYTE)hIl2Cpp + BFF97C5EF9E87679_EBB13EA73EA9477A_OFFSET))(this, AC33919C6814AE50, F28BEDAA6C28F87C, EC46AD6CF05F6889, A148D02C64816912);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BFF97C5EF9E87679*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BFF97C5EF9E87679*&))((::PBYTE)hIl2Cpp + BFF97C5EF9E87679_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::UInt32 FC1290DA7231A485()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFF97C5EF9E87679_FC1290DA7231A485_OFFSET))(this);
	}
};
