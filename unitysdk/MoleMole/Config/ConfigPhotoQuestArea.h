#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/ConfigCircularSector3D.h"
#include "unitysdk/MoleMole/Config/ConfigPhotoQuestAreaAnchor.h"

#define MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CC4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoQuestArea_TypeDefinitionIndex = 69918;

	class ConfigPhotoQuestArea : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPhotoQuestAreaAnchor Anchor; // 0x58
		::MoleMole::Config::ConfigCircularSector3D CircularSector3D; // 0x70
		::System::Boolean EnableVerticalCheck; // 0x90
		::System::Byte _padding0[0x3];
		::System::Single HeightOffsetFromOrigin; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREA__CTOR_OFFSET))(this);
		}
	};
}
