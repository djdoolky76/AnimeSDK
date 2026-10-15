#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJIJCDNNBNI.h"
#include "unitysdk/System/Object.h"
class LDMKDNCFGKL;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CILNKGMHIIE_CTOR_OFFSET UNITYSDK_OFFSET(0xCF86410)
#define CILNKGMHIIE_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0xCF864B0)
#define CILNKGMHIIE_NLDPGMIKLLG_OFFSET UNITYSDK_OFFSET(0xCF86320)

inline static constexpr unsigned int CILNKGMHIIE_TypeDefinitionIndex = 56301;

	class CILNKGMHIIE : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* JECHCODBJGI; // 0x10
		::System::Collections::Generic::List_1<::NJIJCDNNBNI>* GGLBJMFBLFB; // 0x18
		::System::UInt32 JPHDEOJGLJG; // 0x20
		::System::UInt32 LDFEJAAOLKB; // 0x24
		::System::UInt32 BDCOFIOCJFO; // 0x28
		::System::UInt32 ININNFJHJCM; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_CTOR_OFFSET))(this);
		}

		::LDMKDNCFGKL* NLDPGMIKLLG()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_NLDPGMIKLLG_OFFSET))(this);
		}

		::LDMKDNCFGKL* HEPPBBLLBPN()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_HEPPBBLLBPN_OFFSET))(this);
		}

	};
