#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMDKNHEBFF.h"
#include "unitysdk/GDJPCNLFDLN.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define OILGIGEDELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB57000)

inline static constexpr unsigned int OILGIGEDELE_TypeDefinitionIndex = 44409;

	class OILGIGEDELE : public ::System::Object
	{
	public:
		::GDJPCNLFDLN GPMGIHIJDFN; // 0x10
		::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x40
		::BIMDKNHEBFF IPPKEEBMOEA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OILGIGEDELE_CTOR_OFFSET))(this);
		}

	};
