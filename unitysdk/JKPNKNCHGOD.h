#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define JKPNKNCHGOD_APPLY_OFFSET UNITYSDK_OFFSET(0xB22EB00)
#define JKPNKNCHGOD_COMBINE_OFFSET UNITYSDK_OFFSET(0xB22ECB0)
#define JKPNKNCHGOD_CTOR_OFFSET UNITYSDK_OFFSET(0xB22EAF0)
#define JKPNKNCHGOD_RESET_OFFSET UNITYSDK_OFFSET(0xB22EE50)

inline static constexpr unsigned int JKPNKNCHGOD_TypeDefinitionIndex = 75118;

	class JKPNKNCHGOD : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveDecimal AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + JKPNKNCHGOD_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDecimal Apply(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDecimal(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + JKPNKNCHGOD_APPLY_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Combine(::RPG::Client::ActivityIdleLive::IdleLiveDecimal a1)
		{
			return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + JKPNKNCHGOD_COMBINE_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPNKNCHGOD_RESET_OFFSET))(this);
		}

	};
