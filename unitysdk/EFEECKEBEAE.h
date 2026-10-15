#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPrayQuest; }

#define EFEECKEBEAE_ACAPCHBDIBF_OFFSET UNITYSDK_OFFSET(0x13A4A910)
#define EFEECKEBEAE_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4A900)
#define EFEECKEBEAE_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x13A4AB00)

inline static constexpr unsigned int EFEECKEBEAE_TypeDefinitionIndex = 65096;

	class EFEECKEBEAE : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPrayQuest* NFALPNEJCGP; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + EFEECKEBEAE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean ACAPCHBDIBF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEECKEBEAE_ACAPCHBDIBF_OFFSET))(this);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEECKEBEAE_DIPFOIAKDDM_OFFSET))(this);
		}

	};
