#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"
class BDHAFMBJLNH;
class MDNEGNPBHDM;
namespace RPG::GameCore { class GameEntity; }

#define CDCALCEFINB_CTOR_OFFSET UNITYSDK_OFFSET(0xC761C60)

inline static constexpr unsigned int CDCALCEFINB_TypeDefinitionIndex = 57377;

	class CDCALCEFINB : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x10
		::BDHAFMBJLNH* AIBLKCJHCCC; // 0x18
		::MDNEGNPBHDM* MGJLINFADJK; // 0x20
		::System::Single GCJMFBKLGHI; // 0x28
		::System::Single BKMEAGIICGI; // 0x2C
		::System::Boolean HEEFOCEALFJ; // 0x30
		::System::Boolean LGGDBEDMNMB; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single CONJAMJKHBI; // 0x34
		::RPG::GameCore::PropSteerTarget HILNFHCPEAD; // 0x38
		::System::Single HHPCBFFNBIO; // 0x3C
		::RPG::GameCore::PropSteerMode FCGFFAJIBKA; // 0x40
		::System::Single IEHPFADHJFD; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCALCEFINB_CTOR_OFFSET))(this);
		}

	};
