#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMDKNHEBFF.h"
#include "unitysdk/NCFFJACLJMC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define BPKAFDONEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D8410)

inline static constexpr unsigned int BPKAFDONEDH_TypeDefinitionIndex = 44356;

	class BPKAFDONEDH : public ::System::Object
	{
	public:
		::NCFFJACLJMC IAOEFADOKKA; // 0x10
		::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x58
		::BIMDKNHEBFF IPPKEEBMOEA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFDONEDH_CTOR_OFFSET))(this);
		}

	};
