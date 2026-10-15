#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMDKNHEBFF.h"
#include "unitysdk/NCFFJACLJMC.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define BPKAFDONEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DBAA0)

	class BPKAFDONEDH : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x10
		::NCFFJACLJMC IAOEFADOKKA; // 0x18
		::BIMDKNHEBFF IPPKEEBMOEA; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPKAFDONEDH_CTOR_OFFSET))(this);
		}

	};
