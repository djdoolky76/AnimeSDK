#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class FAED0374422E783A; }

#define FE10A6119AC69419_A672C89C11F43993_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define FE10A6119AC69419_B8CA67F850B83E75_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define FE10A6119AC69419_EAD6BEE6C5511502_OFFSET UNITYSDK_OFFSET(0x2327240)
#define FE10A6119AC69419_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2423D20)
#define FE10A6119AC69419__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE10A6119AC69419_TypeDefinitionIndex = 4145;

class FE10A6119AC69419 : public ::System::Object
{
public:
	::System::Single E2EE266EE64B1102; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>* F94A4224B2C7DAE5; // 0x18

	::System::Void EAD6BEE6C5511502(::System::Single E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FE10A6119AC69419_EAD6BEE6C5511502_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE10A6119AC69419__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FE10A6119AC69419*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FE10A6119AC69419*&))((::PBYTE)hIl2Cpp + FE10A6119AC69419_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>* A672C89C11F43993()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FE10A6119AC69419_A672C89C11F43993_OFFSET))(this);
	}

	::System::Void B8CA67F850B83E75(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::FAED0374422E783A*>*))((::PBYTE)hIl2Cpp + FE10A6119AC69419_B8CA67F850B83E75_OFFSET))(this, E937D4885DAA1AE8);
	}
};
