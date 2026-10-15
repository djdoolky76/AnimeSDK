#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define DMBHFGEKLDH_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB7630)
#define DMBHFGEKLDH_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xFEB7720)
#define DMBHFGEKLDH_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0xFEB7730)
#define DMBHFGEKLDH_TRIGGER_OFFSET UNITYSDK_OFFSET(0xFEB7490)

inline static constexpr unsigned int DMBHFGEKLDH_TypeDefinitionIndex = 66225;

	class DMBHFGEKLDH : public ::System::Object
	{
	public:
		::System::UInt32 HKAHFHHICEN; // 0x10
		::System::UInt32 _BuffID_k__BackingField; // 0x14
		::System::UInt32 IHHNMMBAAGN; // 0x18
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x1C
		::System::UInt32 HAHKHFCGDPI; // 0x20
		// static const ::System::String* NNKPLACOBCD; // 0x0
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + DMBHFGEKLDH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBHFGEKLDH_TRIGGER_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBHFGEKLDH_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMBHFGEKLDH_SET_BUFFID_OFFSET))(this, a1);
		}

	};
