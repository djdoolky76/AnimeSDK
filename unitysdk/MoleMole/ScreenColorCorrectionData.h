#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPIEIAPMKHM;
class MPKBDIJDMAP;

#define MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET UNITYSDK_OFFSET(0x19CEA530)
#define MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEA580)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenColorCorrectionData_TypeDefinitionIndex = 81393;

	class ScreenColorCorrectionData : public ::System::Object
	{
	public:
		::System::Single Hue; // 0x10
		::System::Single Saturation; // 0x14
		::System::Single Value; // 0x18
		::System::Single ContrastMidPoint; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA__CTOR_OFFSET))(this);
		}

		::MPKBDIJDMAP* CreatePlayer(::JPIEIAPMKHM* textureSheetImpl)
		{
			return ((::MPKBDIJDMAP*(*)(::PVOID, ::JPIEIAPMKHM*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENCOLORCORRECTIONDATA_CREATEPLAYER_OFFSET))(this, textureSheetImpl);
		}
	};
}
