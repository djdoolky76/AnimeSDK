#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFBKAKHFDL.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSwitchPlatformConfig; }

#define OFIPFBKKBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CD90)

	class OFIPFBKKBPL : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSwitchPlatformConfig* EABKOHGCHFP; // 0x10
		::BNFBKAKHFDL BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIPFBKKBPL_CTOR_OFFSET))(this);
		}

	};
