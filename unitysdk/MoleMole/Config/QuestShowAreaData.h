#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLJOBMIPNEL.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class String; }

#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x849FF0)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x84A090)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x84A000)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x84A120)
#define MOLEMOLE_CONFIG_QUESTSHOWAREADATA_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x84A0F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int QuestShowAreaData_TypeDefinitionIndex = 73857;

	struct alignas(8) QuestShowAreaData
	{
		::HLJOBMIPNEL AreaShapeType; // 0x10
		::System::Single RectAreaLength; // 0x14
		::System::Single RectAreaWidth; // 0x18
		::System::Single CircleAreaRadius; // 0x1C
		::System::Single DecalHeightTop; // 0x20
		::System::Single DecalHeightBottom; // 0x24
		::System::Single RadarHeightTop; // 0x28
		::System::Single RadarHeightBottom; // 0x2C
		::System::Boolean ShowEffect; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* EffectName; // 0x38

		::System::Void ExposeMember(::OHDHAGLCAEB* NLKHAICJJAL, ::System::String* GLBEOLEENIJ)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_EXPOSEMEMBER_OFFSET))(this, NLKHAICJJAL, GLBEOLEENIJ);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_QUESTSHOWAREADATA_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
