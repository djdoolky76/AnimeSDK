#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class BattleInstance; }

#define DOJPHNDNNBA_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE7EC0)
#define DOJPHNDNNBA_EIKLCEBCECK_OFFSET UNITYSDK_OFFSET(0x11FE7DF0)
#define DOJPHNDNNBA_HFKHAGNJGEA_OFFSET UNITYSDK_OFFSET(0x11FE7B80)
#define DOJPHNDNNBA_JLJDNFAAGFP_OFFSET UNITYSDK_OFFSET(0x11FE7CA0)

inline static constexpr unsigned int DOJPHNDNNBA_TypeDefinitionIndex = 81639;

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

		::System::Nullable_1<::System::Int32> JLJDNFAAGFP()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_JLJDNFAAGFP_OFFSET))(this);
		}

		::System::Nullable_1<::System::Int32> EIKLCEBCECK()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJPHNDNNBA_EIKLCEBCECK_OFFSET))(this);
		}

	};
