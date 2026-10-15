#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Emo2DAtlasConfig.h"
#include "unitysdk/System/Object.h"
class PEPNFLNCDHG;

#define PEPNFLNCDHG___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F9E40)
#define PEPNFLNCDHG___C__DISPLAYCLASS3_0__SET2DATLASCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0xC200140)

	class PEPNFLNCDHG___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::PEPNFLNCDHG* __4__this; // 0x10
		::RPG::Client::Emo2DAtlasConfig config; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _Set2DAtlasConfig_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPNFLNCDHG___C__DISPLAYCLASS3_0__SET2DATLASCONFIG_B__0_OFFSET))(this);
		}

	};
