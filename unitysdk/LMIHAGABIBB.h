#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAJLKHNLHH.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define LMIHAGABIBB_CTOR_OFFSET UNITYSDK_OFFSET(0xB77EAF0)
#define LMIHAGABIBB_JPCHJNIFDEL_OFFSET UNITYSDK_OFFSET(0xB77E960)
#define LMIHAGABIBB_MPGLJNHHKDF_OFFSET UNITYSDK_OFFSET(0xB77E900)
#define LMIHAGABIBB_PNOLNGLHDML_OFFSET UNITYSDK_OFFSET(0xB77EA20)
#define LMIHAGABIBB__ONBIND_OFFSET UNITYSDK_OFFSET(0xB77E880)

inline static constexpr unsigned int LMIHAGABIBB_TypeDefinitionIndex = 71378;

	class LMIHAGABIBB : public ::FBAJLKHNLHH
	{
	public:
		::UnityEngine::Animation* PMOJILOJEPE; // 0x70
		::System::String* KDODNCFEJFD; // 0x78
		::System::String* NMHICHPNEHN; // 0x80
		::RPG::Client::RPGAnimationEvent* MEDGLNFKGDC; // 0x88
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHAGABIBB_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHAGABIBB__ONBIND_OFFSET))(this);
		}

		::System::Void MPGLJNHHKDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHAGABIBB_MPGLJNHHKDF_OFFSET))(this);
		}

		::System::Void JPCHJNIFDEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHAGABIBB_JPCHJNIFDEL_OFFSET))(this);
		}

		::System::Void PNOLNGLHDML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMIHAGABIBB_PNOLNGLHDML_OFFSET))(this);
		}

	};
