#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimLadderConfig; }

#define IPMOGHMLJLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB8A9E0)

	class IPMOGHMLJLP : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimLadderConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPMOGHMLJLP_CTOR_OFFSET))(this);
		}

	};
