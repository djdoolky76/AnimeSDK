#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFLHEGNAGAB;
class FOJIGLHBPNG;
namespace RPG::GameCore { class CakeRaceRegionConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOJIGLHBPNG_AFFANNGBPPP_OFFSET UNITYSDK_OFFSET(0x158F5C70)
#define FOJIGLHBPNG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x158F5CB0)
#define FOJIGLHBPNG_CMJPFJNJGKI_OFFSET UNITYSDK_OFFSET(0x158F6160)
#define FOJIGLHBPNG_CTOR_OFFSET UNITYSDK_OFFSET(0x158F5D30)
#define FOJIGLHBPNG_FAACLPOJEGB_OFFSET UNITYSDK_OFFSET(0x158F5E70)
#define FOJIGLHBPNG_HIDPPLAJLLG_OFFSET UNITYSDK_OFFSET(0x158F61F0)
#define FOJIGLHBPNG_PPDMPMPJLGJ_OFFSET UNITYSDK_OFFSET(0x158F6040)

inline static constexpr unsigned int FOJIGLHBPNG_TypeDefinitionIndex = 78031;

	class FOJIGLHBPNG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* IPFDFOLOCKD; // 0x10
		::AFLHEGNAGAB* BECABMLCIAJ; // 0x18
		::RPG::GameCore::LittleGameLevelConfig* OLNKMNBCDNA; // 0x20
		::System::Void _ctor(::AFLHEGNAGAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFLHEGNAGAB*))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_CTOR_OFFSET))(this, a1);
		}

		::System::String* AFFANNGBPPP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_AFFANNGBPPP_OFFSET))(this);
		}

		static ::FOJIGLHBPNG* BPLPBPMEODA(::AFLHEGNAGAB* a1)
		{
			return ((::FOJIGLHBPNG*(*)(::AFLHEGNAGAB*))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::LittleGameEntityConfig* PPDMPMPJLGJ(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LittleGameEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_PPDMPMPJLGJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceRegionConfig* CMJPFJNJGKI(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_CMJPFJNJGKI_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceRegionConfig* HIDPPLAJLLG(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::CakeRaceRegionConfig*(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_HIDPPLAJLLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FAACLPOJEGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJIGLHBPNG_FAACLPOJEGB_OFFSET))(this);
		}

	};
