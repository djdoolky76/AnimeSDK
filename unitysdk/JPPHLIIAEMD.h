#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonopolyEffectShowType.h"
#include "unitysdk/System/Object.h"
namespace Proto { class MonopolyActionResult; }

#define JPPHLIIAEMD_CTOR_OFFSET UNITYSDK_OFFSET(0x19DA48E0)
#define JPPHLIIAEMD_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x19DA4D00)
#define JPPHLIIAEMD_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x19DA4D80)
#define JPPHLIIAEMD_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19DA4D60)
#define JPPHLIIAEMD_MBLKJMFPIEO_OFFSET UNITYSDK_OFFSET(0x19DA4AB0)
#define JPPHLIIAEMD_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x19DA4D90)
#define JPPHLIIAEMD_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19DA4D70)
#define JPPHLIIAEMD_TRIGGER_OFFSET UNITYSDK_OFFSET(0x19DA4B20)

inline static constexpr unsigned int JPPHLIIAEMD_TypeDefinitionIndex = 68160;

	class JPPHLIIAEMD : public ::System::Object
	{
	public:
		::System::UInt32 _ContentID_k__BackingField; // 0x10
		::System::UInt32 COEMCOBPMKD; // 0x14
		::RPG::Client::MonopolyEffectShowType GDEIGEOELDJ; // 0x18
		::System::UInt32 _Value_k__BackingField; // 0x1C
		::System::Void _ctor(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_CTOR_OFFSET))(this, a1);
		}

		::System::Void MBLKJMFPIEO(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_MBLKJMFPIEO_OFFSET))(this, a1);
		}

		::System::Void Trigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_TRIGGER_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_EIMIIHEDKFM_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_SET_VALUE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPPHLIIAEMD_SET_CONTENTID_OFFSET))(this, a1);
		}

	};
