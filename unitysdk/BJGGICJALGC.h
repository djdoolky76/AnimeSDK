#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define BJGGICJALGC_BBHENCAIDMN_OFFSET UNITYSDK_OFFSET(0xBE5CEE0)
#define BJGGICJALGC_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0xBE5D000)
#define BJGGICJALGC_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBE5CC50)
#define BJGGICJALGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE5CC30)
#define BJGGICJALGC_KNMCBFJALJI_OFFSET UNITYSDK_OFFSET(0xBE5CCA0)
#define BJGGICJALGC_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0xBE5D010)
#define BJGGICJALGC_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xBE5CE10)

inline static constexpr unsigned int BJGGICJALGC_TypeDefinitionIndex = 78093;

	class BJGGICJALGC : public ::GBLEOHLLHNA
	{
	public:
		::KBLELMJDBEA* PDENFEFCAGN; // 0x28
		::MFKLCJHKNBK* FKINCGODJEP; // 0x30
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + BJGGICJALGC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void KNMCBFJALJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_KNMCBFJALJI_OFFSET))(this);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_PAACMDEDAIN_OFFSET))(this);
		}

		::System::Boolean BBHENCAIDMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_BBHENCAIDMN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGGICJALGC_OPNKJPKBMGH_OFFSET))(this);
		}

	};
