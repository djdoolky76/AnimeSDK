#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityData; }

#define PMHCOEEKDON_CTOR_OFFSET UNITYSDK_OFFSET(0xC31C9A0)
#define PMHCOEEKDON_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xC31C920)

inline static constexpr unsigned int PMHCOEEKDON_TypeDefinitionIndex = 61723;

	class PMHCOEEKDON : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMHCOEEKDON_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + PMHCOEEKDON_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

	};
