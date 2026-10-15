#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIMDKNHEBFF.h"
#include "unitysdk/GDJPCNLFDLN.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define OILGIGEDELE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C966E60)

inline static constexpr unsigned int OILGIGEDELE_TypeDefinitionIndex = 43427;

	class OILGIGEDELE : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x10
		::GDJPCNLFDLN GPMGIHIJDFN; // 0x18
		::BIMDKNHEBFF IPPKEEBMOEA; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OILGIGEDELE_CTOR_OFFSET))(this);
		}

	};
