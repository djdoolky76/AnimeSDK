#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/INLKLJJDHLN.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimDestructiblePropConfig; }

#define NHJHGJEIFOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C937EB0)

inline static constexpr unsigned int NHJHGJEIFOE_TypeDefinitionIndex = 43453;

	class NHJHGJEIFOE : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimDestructiblePropConfig* EABKOHGCHFP; // 0x10
		::INLKLJJDHLN BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHJHGJEIFOE_CTOR_OFFSET))(this);
		}

	};
