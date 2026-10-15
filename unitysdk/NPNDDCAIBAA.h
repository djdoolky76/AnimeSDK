#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPNDDCAIBAA_ActionState.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NPNDDCAIBAA_CJDDMELFPIH_OFFSET UNITYSDK_OFFSET(0xBD09C60)
#define NPNDDCAIBAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBD09BD0)
#define NPNDDCAIBAA_GPGEKIMHHBK_OFFSET UNITYSDK_OFFSET(0xBD09D50)
#define NPNDDCAIBAA_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBD09DD0)
#define NPNDDCAIBAA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBD09D00)
#define NPNDDCAIBAA_LEIFNOIKKBA_OFFSET UNITYSDK_OFFSET(0xBD09BE0)

inline static constexpr unsigned int NPNDDCAIBAA_TypeDefinitionIndex = 61366;

	class NPNDDCAIBAA : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* BHDHBGBMEGB; // 0x10
		::System::String* FGMKCOANOOK; // 0x18
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
