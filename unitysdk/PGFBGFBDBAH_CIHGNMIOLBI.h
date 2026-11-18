#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PGFBGFBDBAH_AFICPMAJNOC;
namespace MoleMole { class UIUrbanMapPageContext; }

#define PGFBGFBDBAH_CIHGNMIOLBI_KBGIEIJPJGF_OFFSET UNITYSDK_OFFSET(0x150C76C0)
#define PGFBGFBDBAH_CIHGNMIOLBI__CTOR_OFFSET UNITYSDK_OFFSET(0x150C76B0)

inline static constexpr unsigned int PGFBGFBDBAH_CIHGNMIOLBI_TypeDefinitionIndex = 46110;

class PGFBGFBDBAH_CIHGNMIOLBI : public ::System::Object
{
public:
	::MoleMole::UIUrbanMapPageContext* AAOCANGHBDG; // 0x10
	::PGFBGFBDBAH_AFICPMAJNOC* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_CIHGNMIOLBI__CTOR_OFFSET))(this);
	}

	::System::Void KBGIEIJPJGF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFBGFBDBAH_CIHGNMIOLBI_KBGIEIJPJGF_OFFSET))(this);
	}
};
