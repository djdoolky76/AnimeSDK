#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IKFILKHGAOB;
namespace MoleMole { class UIBaseScenePageController; }

#define DGEJBBKEKCB_CDCHJEKHJIJ_OFFSET UNITYSDK_OFFSET(0x147C9200)
#define DGEJBBKEKCB_KJEOMCPAKMD_OFFSET UNITYSDK_OFFSET(0x147C9230)
#define DGEJBBKEKCB__CTOR_OFFSET UNITYSDK_OFFSET(0x147C91F0)

inline static constexpr unsigned int DGEJBBKEKCB_TypeDefinitionIndex = 56951;

class DGEJBBKEKCB : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* HDNKMBCIOHD; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + DGEJBBKEKCB__CTOR_OFFSET))(this, NCIMBHDKIJM);
	}

	::IKFILKHGAOB* CDCHJEKHJIJ()
	{
		return ((::IKFILKHGAOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEJBBKEKCB_CDCHJEKHJIJ_OFFSET))(this);
	}

	::System::Boolean KJEOMCPAKMD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEJBBKEKCB_KJEOMCPAKMD_OFFSET))(this);
	}
};
