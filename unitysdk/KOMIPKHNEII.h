#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDNCKJLMGMD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimEntryConfig; }
namespace System { class String; }

#define KOMIPKHNEII_CTOR_OFFSET UNITYSDK_OFFSET(0x1D637080)
#define KOMIPKHNEII_NOLLGGBACGD_OFFSET UNITYSDK_OFFSET(0x1D637040)

inline static constexpr unsigned int KOMIPKHNEII_TypeDefinitionIndex = 44325;

	class KOMIPKHNEII : public ::System::Object
	{
	public:
		::DDNCKJLMGMD BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimEntryConfig* EABKOHGCHFP; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMIPKHNEII_CTOR_OFFSET))(this);
		}

		::System::String* NOLLGGBACGD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMIPKHNEII_NOLLGGBACGD_OFFSET))(this);
		}

	};
