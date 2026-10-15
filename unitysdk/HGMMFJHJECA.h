#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;

#define HGMMFJHJECA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB24D0)
#define HGMMFJHJECA_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x15CB2390)

	class HGMMFJHJECA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMMFJHJECA_CTOR_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + HGMMFJHJECA_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
