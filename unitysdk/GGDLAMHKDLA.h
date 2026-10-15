#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimMoneyConfig; }

#define GGDLAMHKDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA73960)

inline static constexpr unsigned int GGDLAMHKDLA_TypeDefinitionIndex = 43481;

	class GGDLAMHKDLA : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimMoneyConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDLAMHKDLA_CTOR_OFFSET))(this);
		}

	};
