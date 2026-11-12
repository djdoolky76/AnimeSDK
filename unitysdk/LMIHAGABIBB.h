#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBAJLKHNLHH.h"
namespace RPG::Client { class RPGAnimationEvent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define LMIHAGABIBB_CTOR_OFFSET UNITYSDK_OFFSET(0xC025530)
#define LMIHAGABIBB_JPCHJNIFDEL_OFFSET UNITYSDK_OFFSET(0xC0253A0)
#define LMIHAGABIBB_MPGLJNHHKDF_OFFSET UNITYSDK_OFFSET(0xC025340)
#define LMIHAGABIBB_PNOLNGLHDML_OFFSET UNITYSDK_OFFSET(0xC025460)
#define LMIHAGABIBB__ONBIND_OFFSET UNITYSDK_OFFSET(0xC025200)

inline static constexpr unsigned int LMIHAGABIBB_TypeDefinitionIndex = 73356;

	class LMIHAGABIBB : public ::FBAJLKHNLHH
	{
	public:
		::System::String* KDODNCFEJFD; // 0x70
		::UnityEngine::Animation* PMOJILOJEPE; // 0x78
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
