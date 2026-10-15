#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define KMBFMHKNIND_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0xB535790)
#define KMBFMHKNIND_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB5354D0)
#define KMBFMHKNIND_CTOR_OFFSET UNITYSDK_OFFSET(0xB5354C0)
#define KMBFMHKNIND_DABGBLONBED_OFFSET UNITYSDK_OFFSET(0xB535690)
#define KMBFMHKNIND_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0xB5357A0)
#define KMBFMHKNIND_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xB5355D0)

inline static constexpr unsigned int KMBFMHKNIND_TypeDefinitionIndex = 75761;

	class KMBFMHKNIND : public ::GBLEOHLLHNA
	{
	public:
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + KMBFMHKNIND_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBFMHKNIND_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBFMHKNIND_PAACMDEDAIN_OFFSET))(this);
		}

		::System::Boolean DABGBLONBED()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBFMHKNIND_DABGBLONBED_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBFMHKNIND_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KMBFMHKNIND_OPNKJPKBMGH_OFFSET))(this);
		}

	};
