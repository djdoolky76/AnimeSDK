#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KNILAOHIIIG;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }

#define PIMJFBBFJPP_FHBHCKNALEC_KGEGFMELABK_OFFSET UNITYSDK_OFFSET(0x178D7F20)
#define PIMJFBBFJPP_FHBHCKNALEC__CTOR_OFFSET UNITYSDK_OFFSET(0x178D7F10)

inline static constexpr unsigned int PIMJFBBFJPP_FHBHCKNALEC_TypeDefinitionIndex = 58939;

class PIMJFBBFJPP_FHBHCKNALEC : public ::System::Object
{
public:
	::KNILAOHIIIG* IANGEGHMOOL; // 0x10
	::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* HAMHCGNCGIG; // 0x18

	::System::Void _ctor(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* OIEPDGDFNJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_FHBHCKNALEC__CTOR_OFFSET))(this, OIEPDGDFNJF);
	}

	static ::PIMJFBBFJPP_FHBHCKNALEC* KGEGFMELABK(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* OIEPDGDFNJF)
	{
		return ((::PIMJFBBFJPP_FHBHCKNALEC*(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*))((::PBYTE)hIl2Cpp + PIMJFBBFJPP_FHBHCKNALEC_KGEGFMELABK_OFFSET))(OIEPDGDFNJF);
	}
};
