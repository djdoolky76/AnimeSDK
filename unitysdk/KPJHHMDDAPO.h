#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"
class KPJHHMDDAPO;
namespace RPG::Client { class ActionBarAnimation; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define KPJHHMDDAPO_AIBICDDHMIO_OFFSET UNITYSDK_OFFSET(0xB5C0A20)
#define KPJHHMDDAPO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB5C0BA0)
#define KPJHHMDDAPO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5C08C0)
#define KPJHHMDDAPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C09B0)
#define KPJHHMDDAPO_DLIIMCCKHDG_OFFSET UNITYSDK_OFFSET(0xB5C0C40)
#define KPJHHMDDAPO_EMCBHIAHJOH_OFFSET UNITYSDK_OFFSET(0xB5C0AB0)
#define KPJHHMDDAPO_FDDPBDBKEAN_OFFSET UNITYSDK_OFFSET(0xB5C0CA0)

inline static constexpr unsigned int KPJHHMDDAPO_TypeDefinitionIndex = 71243;

	class KPJHHMDDAPO : public ::System::Object
	{
	public:
		::System::String* KDODNCFEJFD; // 0x10
		::System::String* DEKOLFNNKCJ; // 0x18
		::System::String* FHDKIHEPAHF; // 0x20
		::System::String* DIDHOFMKIFH; // 0x28
		::System::String* NMHICHPNEHN; // 0x30
		::System::String* LHANMKCMPCA; // 0x38
		::System::String* OAKFDGDMHKE; // 0x40
		::UnityEngine::Animation* PMOJILOJEPE; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_CTOR_OFFSET))(this);
		}

		static ::KPJHHMDDAPO* BPLPBPMEODA(::UnityEngine::Animation* a1)
		{
			return ((::KPJHHMDDAPO*(*)(::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void AIBICDDHMIO(::RPG::Client::ActionBarItemAction a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::System::Boolean))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_AIBICDDHMIO_OFFSET))(this, a1, a2);
		}

		::System::Void DLIIMCCKHDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_DLIIMCCKHDG_OFFSET))(this);
		}

		::System::Void FDDPBDBKEAN(::RPG::Client::ActionBarAnimation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarAnimation*))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_FDDPBDBKEAN_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::String* EMCBHIAHJOH(::RPG::Client::ActionBarItemAction a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::System::Boolean))((::PBYTE)hIl2Cpp + KPJHHMDDAPO_EMCBHIAHJOH_OFFSET))(this, a1, a2);
		}

	};
