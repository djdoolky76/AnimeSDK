#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"
class BDHAFMBJLNH;
class MDNEGNPBHDM;
namespace RPG::GameCore { class GameEntity; }

#define CDCALCEFINB_CTOR_OFFSET UNITYSDK_OFFSET(0xD0CA7E0)

inline static constexpr unsigned int CDCALCEFINB_TypeDefinitionIndex = 58605;

	class CDCALCEFINB : public ::System::Object
	{
	public:
		::MDNEGNPBHDM* MGJLINFADJK; // 0x10
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x18
		::BDHAFMBJLNH* AIBLKCJHCCC; // 0x20
		::RPG::GameCore::PropSteerMode FCGFFAJIBKA; // 0x28
		::System::Single CONJAMJKHBI; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::System::Single HHPCBFFNBIO; // 0x34
		::System::Single GCJMFBKLGHI; // 0x38
		::System::Single BKMEAGIICGI; // 0x3C
		::RPG::GameCore::PropSteerTarget HILNFHCPEAD; // 0x40
		::System::Boolean LGGDBEDMNMB; // 0x44
		::System::Boolean HEEFOCEALFJ; // 0x45
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCALCEFINB_CTOR_OFFSET))(this);
		}

	};
