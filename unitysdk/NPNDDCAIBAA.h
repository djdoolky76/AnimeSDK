#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPNDDCAIBAA_ActionState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NPNDDCAIBAA_CJDDMELFPIH_OFFSET UNITYSDK_OFFSET(0xC6006E0)
#define NPNDDCAIBAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC600650)
#define NPNDDCAIBAA_GPGEKIMHHBK_OFFSET UNITYSDK_OFFSET(0xC6007D0)
#define NPNDDCAIBAA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC600850)
#define NPNDDCAIBAA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC600780)
#define NPNDDCAIBAA_LEIFNOIKKBA_OFFSET UNITYSDK_OFFSET(0xC600660)

inline static constexpr unsigned int NPNDDCAIBAA_TypeDefinitionIndex = 62751;

	class NPNDDCAIBAA : public ::System::Object
	{
	public:
		::System::String* FGMKCOANOOK; // 0x10
		::System::Action_1<::System::String*>* BHDHBGBMEGB; // 0x18
		::NPNDDCAIBAA_ActionState DLNIGFGLPLJ; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LEIFNOIKKBA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_LEIFNOIKKBA_OFFSET))(this, a1);
		}

		::System::Void CJDDMELFPIH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_CJDDMELFPIH_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void GPGEKIMHHBK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_GPGEKIMHHBK_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNDDCAIBAA_HADOHLNHHGB_OFFSET))(this);
		}

	};
