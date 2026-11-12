#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }

#define HOILLAOJDII_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DCB85B0)
#define HOILLAOJDII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB8690)
#define HOILLAOJDII_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DCB8450)

inline static constexpr unsigned int HOILLAOJDII_TypeDefinitionIndex = 44517;

	class HOILLAOJDII : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolList_1<::System::Int32>* MBALIALIHIB; // 0x338
		::RPG::PoolList_1<::System::Int32>* EDJGFNAPPLB; // 0x340
		::System::Int32 LFIAOELGHNA; // 0x348
		::System::Int32 OGLLMKHKMCK; // 0x34C
		::System::Int32 OPEMCAMNMNJ; // 0x350
		::System::Single PHEKBOBOFFJ; // 0x354
		::UnityEngine::Vector3 EBJFFMDHGCN; // 0x358
		::System::Single JJFKOIINBFM; // 0x364
		::UnityEngine::Vector3 PKJJCOPBCOE; // 0x368
		::System::Boolean PIADDOPBIKC; // 0x374
		::System::Byte _padding0[0x3];
		::System::Int32 PKIMFHEAFMI; // 0x378
		::System::Int32 LFNKIKGAGIE; // 0x37C
		::System::Boolean PIKFHCABDAP; // 0x380
		::System::Boolean CPILAEBAJFH; // 0x381
		::System::Boolean NBKDDFNGGBP; // 0x382
		::System::Boolean FPDAKCGPAOF; // 0x383
		::System::Int32 NFFJBAMFFDF; // 0x384
		::RPG::GameCore::FiveDimOrthoDirection LJPIOIHLLFB; // 0x388
		::System::Int32 INFDCEBMBIK; // 0x38C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOILLAOJDII_CTOR_OFFSET))(this);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOILLAOJDII_ONALLOC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOILLAOJDII_CLEAR_OFFSET))(this);
		}

	};
