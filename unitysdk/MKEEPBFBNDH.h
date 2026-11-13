#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class String; }

#define MKEEPBFBNDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8FE3E0)
#define MKEEPBFBNDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8FE3D0)
#define MKEEPBFBNDH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1B8FE3F0)
#define MKEEPBFBNDH_OMMPJHHHIHA_OFFSET UNITYSDK_OFFSET(0x1B8FE710)

inline static constexpr unsigned int MKEEPBFBNDH_TypeDefinitionIndex = 75231;

	class MKEEPBFBNDH : public ::System::Object
	{
	public:
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x10
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x18
		::System::Void _ctor(::RPG::Client::UIController* a1, ::RPG::Client::UIController* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + MKEEPBFBNDH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + MKEEPBFBNDH_CTOR_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* HKKFFCBJOKM()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEEPBFBNDH_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::String* OMMPJHHHIHA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEEPBFBNDH_OMMPJHHHIHA_OFFSET))(this);
		}

	};
