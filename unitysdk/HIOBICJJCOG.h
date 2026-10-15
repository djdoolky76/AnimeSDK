#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define HIOBICJJCOG_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0x15CECD30)
#define HIOBICJJCOG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15CECAB0)
#define HIOBICJJCOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15CECAA0)
#define HIOBICJJCOG_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0x15CECD40)
#define HIOBICJJCOG_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0x15CECC70)

inline static constexpr unsigned int HIOBICJJCOG_TypeDefinitionIndex = 75763;

	class HIOBICJJCOG : public ::GBLEOHLLHNA
	{
	public:
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + HIOBICJJCOG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOBICJJCOG_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOBICJJCOG_PAACMDEDAIN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOBICJJCOG_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOBICJJCOG_OPNKJPKBMGH_OFFSET))(this);
		}

	};
