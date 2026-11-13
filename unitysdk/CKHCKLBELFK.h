#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class VoracityInvasionProgressBuffData; }
namespace RPG::GameCore { class ActivityVoracityInvasionProgressBuffRow; }

#define CKHCKLBELFK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1AD3CC40)
#define CKHCKLBELFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3CCF0)

inline static constexpr unsigned int CKHCKLBELFK_TypeDefinitionIndex = 70213;

	class CKHCKLBELFK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHCKLBELFK_CTOR_OFFSET))(this);
		}

		::RPG::Client::VoracityInvasionProgressBuffData* BPLPBPMEODA(::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow* a1)
		{
			return ((::RPG::Client::VoracityInvasionProgressBuffData*(*)(::PVOID, ::RPG::GameCore::ActivityVoracityInvasionProgressBuffRow*))((::PBYTE)hIl2Cpp + CKHCKLBELFK_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
