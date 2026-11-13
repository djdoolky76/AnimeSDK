#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOOHPODHIAA.h"
#include "unitysdk/RPG/GameCore/FiveDimOrthoDirection.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }

#define HOILLAOJDII_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EFB9D80)
#define HOILLAOJDII_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB9E50)
#define HOILLAOJDII_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1EFB9C20)

inline static constexpr unsigned int HOILLAOJDII_TypeDefinitionIndex = 44517;

	class HOILLAOJDII : public ::NOOHPODHIAA
	{
	public:
		::RPG::PoolList_1<::System::Int32>* EDJGFNAPPLB; // 0x338
		::RPG::PoolList_1<::System::Int32>* MBALIALIHIB; // 0x340
		::System::Int32 INFDCEBMBIK; // 0x348
		::UnityEngine::Vector3 EBJFFMDHGCN; // 0x34C
		::System::Int32 PKIMFHEAFMI; // 0x358
		::UnityEngine::Vector3 PKJJCOPBCOE; // 0x35C
		::System::Boolean NBKDDFNGGBP; // 0x368
		::System::Boolean PIKFHCABDAP; // 0x369
		::System::Byte _padding0[0x2];
		::System::Int32 LFNKIKGAGIE; // 0x36C
		::RPG::GameCore::FiveDimOrthoDirection LJPIOIHLLFB; // 0x370
		::System::Int32 NFFJBAMFFDF; // 0x374
		::System::Int32 OGLLMKHKMCK; // 0x378
		::System::Int32 OPEMCAMNMNJ; // 0x37C
		::System::Int32 LFIAOELGHNA; // 0x380
		::System::Single JJFKOIINBFM; // 0x384
		::System::Single PHEKBOBOFFJ; // 0x388
		::System::Boolean PIADDOPBIKC; // 0x38C
		::System::Boolean CPILAEBAJFH; // 0x38D
		::System::Boolean FPDAKCGPAOF; // 0x38E
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
