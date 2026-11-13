#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define DPNBFILDOFA_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0x181B2AF0)

inline static constexpr unsigned int DPNBFILDOFA_TypeDefinitionIndex = 66464;

	class DPNBFILDOFA : public ::System::Object
	{
	public:
		// static const ::System::Object AGKCOGGMIKJ; // 0x0
		static ::System::Boolean LHLALAKKKKJ(::RPG::Client::GridFightConsumableItemData* a1, ::RPG::Client::GridFightItemFrameInfo* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightConsumableItemData*, ::RPG::Client::GridFightItemFrameInfo*))((::PBYTE)hIl2Cpp + DPNBFILDOFA_LHLALAKKKKJ_OFFSET))(a1, a2);
		}

	};
