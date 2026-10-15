#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFBKAKHFDL.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimSwitchPlatformConfig; }

#define OFIPFBKKBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EAD0)

inline static constexpr unsigned int OFIPFBKKBPL_TypeDefinitionIndex = 43467;

	class OFIPFBKKBPL : public ::System::Object
	{
	public:
		::BNFBKAKHFDL BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimSwitchPlatformConfig* EABKOHGCHFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIPFBKKBPL_CTOR_OFFSET))(this);
		}

	};
