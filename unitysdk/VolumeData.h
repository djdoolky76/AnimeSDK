#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LightblockStateEnum.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingLightEnum.h"
#include "unitysdk/System/Object.h"
class VolumeData;
namespace System { class String; }

#define VOLUMEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE9F7890)
#define VOLUMEDATA_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0xE9F7800)

inline static constexpr unsigned int VolumeData_TypeDefinitionIndex = 47396;

	class VolumeData : public ::System::Object
	{
	public:
		::System::String* blockName; // 0x10
		::RPG::Client::OpenWorld::StreamingLightEnum lightMode; // 0x18
		::LightblockStateEnum blockState1; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMEDATA_CTOR_OFFSET))(this);
		}

		::VolumeData* MJEODHKPKEB()
		{
			return ((::VolumeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMEDATA_MJEODHKPKEB_OFFSET))(this);
		}

	};
