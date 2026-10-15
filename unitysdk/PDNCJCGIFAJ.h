#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONKPJKCDPJG.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimPipePortalConfig; }

#define PDNCJCGIFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A58F0)

inline static constexpr unsigned int PDNCJCGIFAJ_TypeDefinitionIndex = 43485;

	class PDNCJCGIFAJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimPipePortalConfig* EABKOHGCHFP; // 0x10
		::ONKPJKCDPJG BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNCJCGIFAJ_CTOR_OFFSET))(this);
		}

	};
