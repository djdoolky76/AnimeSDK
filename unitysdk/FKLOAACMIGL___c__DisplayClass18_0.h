#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"
class NLOOHFMLFMM;

#define FKLOAACMIGL___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1580D220)
#define FKLOAACMIGL___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1580D910)

	class FKLOAACMIGL___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightOrbType orbType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLOAACMIGL___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetOrbPanelByType_b__0(::NLOOHFMLFMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLOOHFMLFMM*))((::PBYTE)hIl2Cpp + FKLOAACMIGL___C__DISPLAYCLASS18_0___GETORBPANELBYTYPE_B__0_OFFSET))(this, a1);
		}

	};
