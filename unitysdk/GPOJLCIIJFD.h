#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCALBBHOKCK;
namespace RPG::GameCore { class SpecialAvatarRow; }

#define GPOJLCIIJFD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B5A0E0)
#define GPOJLCIIJFD_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5A180)

inline static constexpr unsigned int GPOJLCIIJFD_TypeDefinitionIndex = 62819;

	class GPOJLCIIJFD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJLCIIJFD_CTOR_OFFSET))(this);
		}

		::OCALBBHOKCK* BPLPBPMEODA(::RPG::GameCore::SpecialAvatarRow* a1)
		{
			return ((::OCALBBHOKCK*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + GPOJLCIIJFD_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
