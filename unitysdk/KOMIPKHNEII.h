#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDNCKJLMGMD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimEntryConfig; }
namespace System { class String; }

#define KOMIPKHNEII_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD1F0)
#define KOMIPKHNEII_NOLLGGBACGD_OFFSET UNITYSDK_OFFSET(0x1C8DD1B0)

inline static constexpr unsigned int KOMIPKHNEII_TypeDefinitionIndex = 43344;

	class KOMIPKHNEII : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimEntryConfig* EABKOHGCHFP; // 0x10
		::DDNCKJLMGMD BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMIPKHNEII_CTOR_OFFSET))(this);
		}

		::System::String* NOLLGGBACGD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOMIPKHNEII_NOLLGGBACGD_OFFSET))(this);
		}

	};
