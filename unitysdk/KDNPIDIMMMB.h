#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuest; }

#define KDNPIDIMMMB_ACAPCHBDIBF_OFFSET UNITYSDK_OFFSET(0xBBF3070)
#define KDNPIDIMMMB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF3060)
#define KDNPIDIMMMB_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0xBBF3270)

inline static constexpr unsigned int KDNPIDIMMMB_TypeDefinitionIndex = 66766;

	class KDNPIDIMMMB : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPrayQuest* NFALPNEJCGP; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + KDNPIDIMMMB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean ACAPCHBDIBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNPIDIMMMB_ACAPCHBDIBF_OFFSET))(this);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNPIDIMMMB_DIPFOIAKDDM_OFFSET))(this);
		}

	};
