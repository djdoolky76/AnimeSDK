#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define LEFNFCLHAPD___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB651060)
#define LEFNFCLHAPD___C__DISPLAYCLASS4_0___SHOWCHESSROGUELAYEREXPLOREFINISHDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xB651370)

inline static constexpr unsigned int LEFNFCLHAPD___c__DisplayClass4_0_TypeDefinitionIndex = 66963;

	class LEFNFCLHAPD___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowChessRogueLayerExploreFinishDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFNFCLHAPD___C__DISPLAYCLASS4_0___SHOWCHESSROGUELAYEREXPLOREFINISHDIALOG_B__0_OFFSET))(this);
		}

	};
