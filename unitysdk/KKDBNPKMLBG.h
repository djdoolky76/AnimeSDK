#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGONLLCBKCB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPressureSwitchConfig; }

#define KKDBNPKMLBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C906DC0)

	class KKDBNPKMLBG : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPressureSwitchConfig* EABKOHGCHFP; // 0x10
		::BGONLLCBKCB BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDBNPKMLBG_CTOR_OFFSET))(this);
		}

	};
