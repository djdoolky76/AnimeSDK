#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELEOLEEDHH;
namespace RPG::GameCore { class FiveDimContactEventEmitterConfig; }

#define ICBOICBIAIH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB074A0)
#define ICBOICBIAIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB07500)

	class ICBOICBIAIH : public ::System::Object
	{
	public:
		::GELEOLEEDHH* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimContactEventEmitterConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOICBIAIH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBOICBIAIH_CLEAR_OFFSET))(this);
		}

	};
