#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleInstance; }

#define MNJNHIAPNKD_IKHEMKFEAGC_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0A400)

inline static constexpr unsigned int MNJNHIAPNKD_IKHEMKFEAGC_TypeDefinitionIndex = 71951;

	class MNJNHIAPNKD_IKHEMKFEAGC : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJNHIAPNKD_IKHEMKFEAGC_CTOR_OFFSET))(this);
		}

	};
