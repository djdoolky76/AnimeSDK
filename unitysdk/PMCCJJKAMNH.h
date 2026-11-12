#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define PMCCJJKAMNH_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0xCC44BB0)
#define PMCCJJKAMNH_CTOR_OFFSET UNITYSDK_OFFSET(0xCC44990)
#define PMCCJJKAMNH_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0xCC44BC0)
#define PMCCJJKAMNH_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xCC449A0)

inline static constexpr unsigned int PMCCJJKAMNH_TypeDefinitionIndex = 78096;

	class PMCCJJKAMNH : public ::GBLEOHLLHNA
	{
	public:
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + PMCCJJKAMNH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCCJJKAMNH_PAACMDEDAIN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCCJJKAMNH_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMCCJJKAMNH_OPNKJPKBMGH_OFFSET))(this);
		}

	};
