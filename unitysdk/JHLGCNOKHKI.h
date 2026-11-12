#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightConsumableItemData; }
namespace RPG::Client { class GridFightItemFrameInfo; }

#define JHLGCNOKHKI_ABGHHBNCNLL_OFFSET UNITYSDK_OFFSET(0xB9DD120)
#define JHLGCNOKHKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DD110)

inline static constexpr unsigned int JHLGCNOKHKI_TypeDefinitionIndex = 66463;

	class JHLGCNOKHKI : public ::System::Object
	{
	public:
		::RPG::Client::GridFightItemFrameInfo* MBLBEDPLDFL; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightItemFrameInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightItemFrameInfo*))((::PBYTE)hIl2Cpp + JHLGCNOKHKI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightItemFrameInfo* ABGHHBNCNLL(::RPG::Client::GridFightConsumableItemData* a1)
		{
			return ((::RPG::Client::GridFightItemFrameInfo*(*)(::PVOID, ::RPG::Client::GridFightConsumableItemData*))((::PBYTE)hIl2Cpp + JHLGCNOKHKI_ABGHHBNCNLL_OFFSET))(this, a1);
		}

	};
