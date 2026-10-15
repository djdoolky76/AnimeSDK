#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class GIAKECJMGIF;

#define GIAKECJMGIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE4D210)
#define GIAKECJMGIF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE4D120)

	class GIAKECJMGIF : public ::System::Object
	{
	public:
		::System::UInt32 LLDCHLHNADA; // 0x10
		::System::UInt32 GDBJDAOOCOH; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAKECJMGIF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GIAKECJMGIF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GIAKECJMGIF*))((::PBYTE)hIl2Cpp + GIAKECJMGIF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
