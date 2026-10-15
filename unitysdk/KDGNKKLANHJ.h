#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimScrollAgentConfig; }

#define KDGNKKLANHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB1640)

	class KDGNKKLANHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimScrollAgentConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGNKKLANHJ_CTOR_OFFSET))(this);
		}

	};
