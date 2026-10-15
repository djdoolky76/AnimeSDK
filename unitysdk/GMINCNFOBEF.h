#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLNAFFPLPDC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPropMoveConfig; }

#define GMINCNFOBEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB1CF0)

inline static constexpr unsigned int GMINCNFOBEF_TypeDefinitionIndex = 43522;

	class GMINCNFOBEF : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPropMoveConfig* EABKOHGCHFP; // 0x10
		::CLNAFFPLPDC PGLKGBJAFFB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMINCNFOBEF_CTOR_OFFSET))(this);
		}

	};
