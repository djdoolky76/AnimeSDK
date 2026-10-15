#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class MOBLPGFPLEM;
namespace RPG::AvatarSystem::Property { template <typename T> class PropertyModifierBuilder_1; }
namespace RPG::Client::ActivityIdleLive { class IIdleLiveAvatarData; }

#define GHGJAPAEJIA_BUILD_OFFSET UNITYSDK_OFFSET(0x15A1EB70)
#define GHGJAPAEJIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15A1EB50)

inline static constexpr unsigned int GHGJAPAEJIA_TypeDefinitionIndex = 75133;

	class GHGJAPAEJIA
	{
	public:
		::MOBLPGFPLEM* BIJLLNCPOKD; // 0x10
		::System::Void _ctor(::MOBLPGFPLEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOBLPGFPLEM*))((::PBYTE)hIl2Cpp + GHGJAPAEJIA_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>* Build(::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData* a1)
		{
			return ((::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IIdleLiveAvatarData*))((::PBYTE)hIl2Cpp + GHGJAPAEJIA_BUILD_OFFSET))(this, a1);
		}

	};
