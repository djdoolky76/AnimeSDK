#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define NPCFAHLPHKD_ALEBBJAFIOG_OFFSET UNITYSDK_OFFSET(0xBCF9F60)
#define NPCFAHLPHKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBCFA2B0)

inline static constexpr unsigned int NPCFAHLPHKD_TypeDefinitionIndex = 64915;

	class NPCFAHLPHKD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCFAHLPHKD_CTOR_OFFSET))(this);
		}

		::System::Boolean ALEBBJAFIOG(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::NDPFOOJIAIJ* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::NDPFOOJIAIJ*, ::System::String*))((::PBYTE)hIl2Cpp + NPCFAHLPHKD_ALEBBJAFIOG_OFFSET))(this, a1, a2, a3, a4);
		}

	};
