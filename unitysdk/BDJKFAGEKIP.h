#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDPFOOJIAIJ;
namespace RPG::Client { class GridFightConsumableInfo_GridFightConsumableItemUseParam; }
namespace RPG::Client { class GridFightConsumableItemData; }
namespace System { class String; }

#define BDJKFAGEKIP_ALEBBJAFIOG_OFFSET UNITYSDK_OFFSET(0x162FCDB0)
#define BDJKFAGEKIP_CTOR_OFFSET UNITYSDK_OFFSET(0x162FD0E0)

inline static constexpr unsigned int BDJKFAGEKIP_TypeDefinitionIndex = 64916;

	class BDJKFAGEKIP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJKFAGEKIP_CTOR_OFFSET))(this);
		}

		::System::Boolean ALEBBJAFIOG(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam* a2, ::NDPFOOJIAIJ* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightConsumableInfo_GridFightConsumableItemUseParam*, ::NDPFOOJIAIJ*, ::System::String*))((::PBYTE)hIl2Cpp + BDJKFAGEKIP_ALEBBJAFIOG_OFFSET))(this, a1, a2, a3, a4);
		}

	};
