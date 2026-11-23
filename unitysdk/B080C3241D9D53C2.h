#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B7F6D99389F2E04F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class BD8183DAED4CB631;
class F50E6E04FC902BDF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B080C3241D9D53C2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24541B0)
#define B080C3241D9D53C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B080C3241D9D53C2_TypeDefinitionIndex = 2446;

class B080C3241D9D53C2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::F50E6E04FC902BDF*>* F6894D33F1AF6DEA; // 0x10
	::BD8183DAED4CB631* EDB3045A71ED9D63; // 0x18
	::UnityEngine::Vector3 F539A4507A454175; // 0x20
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B7F6D99389F2E04F, ::System::UInt32>* BC388511A3E31037; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B080C3241D9D53C2__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B080C3241D9D53C2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B080C3241D9D53C2*&))((::PBYTE)hIl2Cpp + B080C3241D9D53C2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
