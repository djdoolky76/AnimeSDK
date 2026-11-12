#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPropMoveConfig; }

#define LOBMJPNJGGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DACAD20)

inline static constexpr unsigned int LOBMJPNJGGM_TypeDefinitionIndex = 44506;

	class LOBMJPNJGGM : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPropMoveConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOBMJPNJGGM_CTOR_OFFSET))(this);
		}

	};
