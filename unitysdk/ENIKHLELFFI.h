#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class ENIKHLELFFI;
namespace RPG::GameCore { class AdventureModifierInstance; }

#define ENIKHLELFFI_CLEAR_OFFSET UNITYSDK_OFFSET(0x155B00F0)
#define ENIKHLELFFI_CTOR_OFFSET UNITYSDK_OFFSET(0x155B0250)
#define ENIKHLELFFI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x155B0200)
#define ENIKHLELFFI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x155B0160)
#define ENIKHLELFFI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x155B00A0)

inline static constexpr unsigned int ENIKHLELFFI_TypeDefinitionIndex = 56622;

	class ENIKHLELFFI : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::AdventureModifierInstance* EAEJGPLLGMI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIKHLELFFI_CTOR_OFFSET))(this);
		}

		::ENIKHLELFFI* KPJGDHLENIP(::RPG::GameCore::AdventureModifierInstance* a1)
		{
			return ((::ENIKHLELFFI*(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + ENIKHLELFFI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIKHLELFFI_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIKHLELFFI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + ENIKHLELFFI_GETEVENTTYPE_OFFSET))(this);
		}

	};
