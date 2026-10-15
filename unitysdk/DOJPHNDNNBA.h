#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Nullable; }

#define DOJPHNDNNBA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FED2E0)
#define DOJPHNDNNBA_EIKLCEBCECK_OFFSET UNITYSDK_OFFSET(0x11FED210)
#define DOJPHNDNNBA_HFKHAGNJGEA_OFFSET UNITYSDK_OFFSET(0x11FECF90)
#define DOJPHNDNNBA_JLJDNFAAGFP_OFFSET UNITYSDK_OFFSET(0x11FED0C0)

inline static constexpr unsigned int DOJPHNDNNBA_TypeDefinitionIndex = 81640;

	class DOJPHNDNNBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_CTOR_OFFSET))(this);
		}

		::System::Boolean HFKHAGNJGEA(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_HFKHAGNJGEA_OFFSET))(this, a1);
		}

		::System::Nullable* JLJDNFAAGFP()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_JLJDNFAAGFP_OFFSET))(this);
		}

		::System::Nullable* EIKLCEBCECK()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_EIKLCEBCECK_OFFSET))(this);
		}

	};
