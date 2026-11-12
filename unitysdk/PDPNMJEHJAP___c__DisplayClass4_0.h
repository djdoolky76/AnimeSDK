#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }

#define PDPNMJEHJAP___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC929990)
#define PDPNMJEHJAP___C__DISPLAYCLASS4_0___SHOWCHESSROGUENEWLEVELDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xC929AA0)

inline static constexpr unsigned int PDPNMJEHJAP___c__DisplayClass4_0_TypeDefinitionIndex = 68909;

	class PDPNMJEHJAP___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowChessRogueNewLevelDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP___C__DISPLAYCLASS4_0___SHOWCHESSROGUENEWLEVELDIALOG_B__0_OFFSET))(this);
		}

	};
