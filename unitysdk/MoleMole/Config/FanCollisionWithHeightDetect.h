#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CollisionDetect.h"
#include "unitysdk/MoleMole/Config/FanCollisionWithHeightDetect_FanFollowAtkDirType.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_ATTACHPATTERNMETHOD_OFFSET UNITYSDK_OFFSET(0x11EA3880)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11EA3810)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA3780)
#define MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x11EA3940)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FanCollisionWithHeightDetect_TypeDefinitionIndex = 63582;

	class FanCollisionWithHeightDetect : public ::MoleMole::Config::CollisionDetect
	{
	public:
		::System::Single InvalidAngle; // 0x80
		::System::Single FanAngle; // 0x84
		::System::Single Height; // 0x88
		::MoleMole::Config::FanCollisionWithHeightDetect_FanFollowAtkDirType FollowAtkDirType; // 0x8C
		::System::Single Radius; // 0x90
		::System::Single InvalidRadius; // 0x94
		::System::Int32 numberOfRays; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_TOSTRING_OFFSET))(this);
		}

		::System::Void AttachPatternMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT_ATTACHPATTERNMETHOD_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FANCOLLISIONWITHHEIGHTDETECT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
