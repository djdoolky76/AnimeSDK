#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPlayerStateListenerConfig; }

#define HHNGFKENDHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CACC0D0)

	class HHNGFKENDHC : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPlayerStateListenerConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNGFKENDHC_CTOR_OFFSET))(this);
		}

	};
