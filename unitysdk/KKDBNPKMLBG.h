#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGONLLCBKCB.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPressureSwitchConfig; }

#define KKDBNPKMLBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB2FE0)

inline static constexpr unsigned int KKDBNPKMLBG_TypeDefinitionIndex = 44446;

	class KKDBNPKMLBG : public ::System::Object
	{
	public:
		::BGONLLCBKCB BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimPressureSwitchConfig* EABKOHGCHFP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDBNPKMLBG_CTOR_OFFSET))(this);
		}

	};
