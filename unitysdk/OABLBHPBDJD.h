#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define OABLBHPBDJD_ALEBBJAFIOG_OFFSET UNITYSDK_OFFSET(0x1AB535D0)
#define OABLBHPBDJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB538F0)

inline static constexpr unsigned int OABLBHPBDJD_TypeDefinitionIndex = 66471;

	class OABLBHPBDJD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABLBHPBDJD_CTOR_OFFSET))(this);
		}

		::System::Boolean ALEBBJAFIOG(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::NDPFOOJIAIJ* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::NDPFOOJIAIJ*, ::System::String*))((::PBYTE)hIl2Cpp + OABLBHPBDJD_ALEBBJAFIOG_OFFSET))(this, a1, a2, a3, a4);
		}

	};
