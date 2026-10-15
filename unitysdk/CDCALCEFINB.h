#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"
class BDHAFMBJLNH;
class MDNEGNPBHDM;
namespace RPG::GameCore { class GameEntity; }

#define CDCALCEFINB_CTOR_OFFSET UNITYSDK_OFFSET(0xC75ECC0)

inline static constexpr unsigned int CDCALCEFINB_TypeDefinitionIndex = 57377;

	class CDCALCEFINB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::MDNEGNPBHDM* MGJLINFADJK; // 0x18
		::BDHAFMBJLNH* AIBLKCJHCCC; // 0x20
		::RPG::GameCore::PropSteerTarget HILNFHCPEAD; // 0x28
		::System::Single CONJAMJKHBI; // 0x2C
		::System::Single GCJMFBKLGHI; // 0x30
		::RPG::GameCore::PropSteerMode FCGFFAJIBKA; // 0x34
		::System::Boolean LGGDBEDMNMB; // 0x38
		::System::Boolean HEEFOCEALFJ; // 0x39
		::System::Byte _padding0[0x2];
		::System::Single IEHPFADHJFD; // 0x3C
		::System::Single HHPCBFFNBIO; // 0x40
		::System::Single BKMEAGIICGI; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCALCEFINB_CTOR_OFFSET))(this);
		}

	};
