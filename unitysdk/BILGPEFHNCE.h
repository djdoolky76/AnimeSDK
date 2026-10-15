#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKPIJMCIPDD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimDoorConfig; }

#define BILGPEFHNCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8BAF00)

	class BILGPEFHNCE : public ::System::Object
	{
	public:
		::HKPIJMCIPDD BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimDoorConfig* EABKOHGCHFP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILGPEFHNCE_CTOR_OFFSET))(this);
		}

	};
