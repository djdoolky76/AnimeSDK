#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HoyoTagContainer.h"
namespace RPG::GameCore { class HoyoTagContainer; }

#define ABFAAKFMJIO_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D9F8F40)
#define ABFAAKFMJIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F9100)
#define ABFAAKFMJIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1D9F8F90)

inline static constexpr unsigned int ABFAAKFMJIO_TypeDefinitionIndex = 43012;

	class ABFAAKFMJIO : public ::RPG::GameCore::HoyoTagContainer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFAAKFMJIO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFAAKFMJIO_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::HoyoTagContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + ABFAAKFMJIO_KPJGDHLENIP_OFFSET))(this, a1);
		}

	};
