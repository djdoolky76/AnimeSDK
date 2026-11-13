#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropSteerMode.h"
#include "unitysdk/RPG/GameCore/PropSteerTarget.h"
#include "unitysdk/System/Object.h"
class BDHAFMBJLNH;
class MDNEGNPBHDM;
namespace RPG::GameCore { class GameEntity; }

#define CDCALCEFINB_CTOR_OFFSET UNITYSDK_OFFSET(0x173A9340)

inline static constexpr unsigned int CDCALCEFINB_TypeDefinitionIndex = 58605;

	class CDCALCEFINB : public ::System::Object
	{
	public:
		::MDNEGNPBHDM* MGJLINFADJK; // 0x10
		::BDHAFMBJLNH* AIBLKCJHCCC; // 0x18
		::RPG::GameCore::GameEntity* BBMMBAKDJBC; // 0x20
		::System::Single CONJAMJKHBI; // 0x28
		::RPG::GameCore::PropSteerMode FCGFFAJIBKA; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::System::Boolean HEEFOCEALFJ; // 0x34
		::System::Boolean LGGDBEDMNMB; // 0x35
		::System::Byte _padding0[0x2];
		::System::Single BKMEAGIICGI; // 0x38
		::System::Single GCJMFBKLGHI; // 0x3C
		::RPG::GameCore::PropSteerTarget HILNFHCPEAD; // 0x40
		::System::Single HHPCBFFNBIO; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDCALCEFINB_CTOR_OFFSET))(this);
		}

	};
