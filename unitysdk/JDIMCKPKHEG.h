#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBLEOHLLHNA.h"
#include "unitysdk/RPG/GameCore/ChimeraTurnBasedStage.h"
class DFHADNIAOAD;
class KBLELMJDBEA;
class MFKLCJHKNBK;

#define JDIMCKPKHEG_BHIBHMIGCAI_OFFSET UNITYSDK_OFFSET(0xB9145E0)
#define JDIMCKPKHEG_CJHJAJBJOKO_OFFSET UNITYSDK_OFFSET(0xB915000)
#define JDIMCKPKHEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB914420)
#define JDIMCKPKHEG_FBHOPINAFEM_OFFSET UNITYSDK_OFFSET(0xB914550)
#define JDIMCKPKHEG_OPNKJPKBMGH_OFFSET UNITYSDK_OFFSET(0xB915010)
#define JDIMCKPKHEG_PAACMDEDAIN_OFFSET UNITYSDK_OFFSET(0xB914430)

inline static constexpr unsigned int JDIMCKPKHEG_TypeDefinitionIndex = 78090;

	class JDIMCKPKHEG : public ::GBLEOHLLHNA
	{
	public:
		::System::Void _ctor(::DFHADNIAOAD* a1, ::MFKLCJHKNBK* a2, ::KBLELMJDBEA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::DFHADNIAOAD*, ::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAACMDEDAIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_PAACMDEDAIN_OFFSET))(this);
		}

		::System::Void BHIBHMIGCAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_BHIBHMIGCAI_OFFSET))(this);
		}

		::System::Boolean FBHOPINAFEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_FBHOPINAFEM_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTurnBasedStage CJHJAJBJOKO()
		{
			return ((::RPG::GameCore::ChimeraTurnBasedStage(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_CJHJAJBJOKO_OFFSET))(this);
		}

		::System::Boolean OPNKJPKBMGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIMCKPKHEG_OPNKJPKBMGH_OFFSET))(this);
		}

	};
