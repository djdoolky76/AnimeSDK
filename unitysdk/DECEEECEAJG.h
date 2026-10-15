#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/RPG/Client/MonopolyEffectTriggerWayType.h"
#include "unitysdk/System/Object.h"
class DECEEECEAJG;
namespace Proto { class MonopolyActionResult; }

#define DECEEECEAJG_CTOR_OFFSET UNITYSDK_OFFSET(0xE501490)
#define DECEEECEAJG_EIMIIHEDKFM_1_OFFSET UNITYSDK_OFFSET(0xE501880)
#define DECEEECEAJG_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xE501830)
#define DECEEECEAJG_FPMOHGAEKBD_OFFSET UNITYSDK_OFFSET(0xE5015D0)
#define DECEEECEAJG_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xE501900)
#define DECEEECEAJG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xE5018E0)
#define DECEEECEAJG_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0xE501560)
#define DECEEECEAJG_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0xE501910)
#define DECEEECEAJG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xE5018F0)
#define DECEEECEAJG_TRIGGER_OFFSET UNITYSDK_OFFSET(0xE501620)

inline static constexpr unsigned int DECEEECEAJG_TypeDefinitionIndex = 66246;

	class DECEEECEAJG : public ::System::Object
	{
	public:
		::System::UInt32 _ContentID_k__BackingField; // 0x10
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x14
		::System::UInt32 _Value_k__BackingField; // 0x18
		::System::UInt32 COEMCOBPMKD; // 0x1C
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + DECEEECEAJG_CTOR_OFFSET))(this, a1);
		}

		::System::Void MBLKJMFPIEO(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + DECEEECEAJG_MBLKJMFPIEO_OFFSET))(this, a1);
		}

		::RPG::Client::MonopolyEffectTriggerWayType FPMOHGAEKBD()
		{
			return ((::RPG::Client::MonopolyEffectTriggerWayType(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEECEAJG_FPMOHGAEKBD_OFFSET))(this);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEECEAJG_TRIGGER_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DECEEECEAJG_EIMIIHEDKFM_OFFSET))(this, a1);
		}

		::System::Void EIMIIHEDKFM_1(::DECEEECEAJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DECEEECEAJG*))((::PBYTE)hIl2Cpp + DECEEECEAJG_EIMIIHEDKFM_1_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEECEAJG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DECEEECEAJG_SET_VALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECEEECEAJG_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DECEEECEAJG_SET_CONTENTID_OFFSET))(this, a1);
		}

	};
