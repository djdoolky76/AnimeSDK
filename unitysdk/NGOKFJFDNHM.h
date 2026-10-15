#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHOJHPMLBCJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGOKFJFDNHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBB2D60)
#define NGOKFJFDNHM_FOHPJFLDLGG_OFFSET UNITYSDK_OFFSET(0xBBB2FC0)
#define NGOKFJFDNHM_GET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBBB30C0)
#define NGOKFJFDNHM_LMCKAHPJAEE_OFFSET UNITYSDK_OFFSET(0xBBB3010)
#define NGOKFJFDNHM_SET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0xBBB30D0)

inline static constexpr unsigned int NGOKFJFDNHM_TypeDefinitionIndex = 80723;

	class NGOKFJFDNHM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::PHOJHPMLBCJ*>* GGDKMCJBMCF; // 0x10
		::System::UInt32 _UnlockedLevel_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKFJFDNHM_CTOR_OFFSET))(this);
		}

		::System::Void FOHPJFLDLGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOKFJFDNHM_FOHPJFLDLGG_OFFSET))(this, a1);
		}

		::PHOJHPMLBCJ* LMCKAHPJAEE(::System::UInt32 a1)
		{
			return ((::PHOJHPMLBCJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOKFJFDNHM_LMCKAHPJAEE_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockedLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGOKFJFDNHM_GET_UNLOCKEDLEVEL_OFFSET))(this);
		}

		::System::Void set_UnlockedLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGOKFJFDNHM_SET_UNLOCKEDLEVEL_OFFSET))(this, a1);
		}

	};
