#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSpecialModifyConfig; }

#define HKEOJOEPPEF___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1987ECB0)
#define HKEOJOEPPEF___C__DISPLAYCLASS7_0___ISSPECIALCONFIGACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x1987EE30)

inline static constexpr unsigned int HKEOJOEPPEF___c__DisplayClass7_0_TypeDefinitionIndex = 67059;

	class HKEOJOEPPEF___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightSpecialModifyConfig* config; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOJOEPPEF___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __IsSpecialConfigActive_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF___C__DISPLAYCLASS7_0___ISSPECIALCONFIGACTIVE_B__0_OFFSET))(this, a1);
		}

	};
