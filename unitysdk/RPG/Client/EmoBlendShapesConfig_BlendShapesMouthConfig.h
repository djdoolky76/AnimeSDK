#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESMOUTHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xCDDCAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmoBlendShapesConfig_BlendShapesMouthConfig_TypeDefinitionIndex = 60038;

	class EmoBlendShapesConfig_BlendShapesMouthConfig : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType type; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* paramList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOBLENDSHAPESCONFIG_BLENDSHAPESMOUTHCONFIG_CTOR_OFFSET))(this);
		}

	};
}
