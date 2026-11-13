#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelGraphComponent; }

#define JHMHGMNPJKP___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x173E7520)
#define JHMHGMNPJKP___C__DISPLAYCLASS3_0___CREATEPERFORMANCELEVELGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x173E7530)

inline static constexpr unsigned int JHMHGMNPJKP___c__DisplayClass3_0_TypeDefinitionIndex = 63399;

	class JHMHGMNPJKP___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* levelGraphComponent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMHGMNPJKP___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void __CreatePerformanceLevelGraph_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHMHGMNPJKP___C__DISPLAYCLASS3_0___CREATEPERFORMANCELEVELGRAPH_B__0_OFFSET))(this);
		}

	};
