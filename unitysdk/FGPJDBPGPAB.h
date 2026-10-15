#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IGamePhase; }
namespace System { class Object; }
namespace System { class String; }

#define FGPJDBPGPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x157630B0)
#define FGPJDBPGPAB_EFIJDBHPINI_OFFSET UNITYSDK_OFFSET(0x157632C0)
#define FGPJDBPGPAB_GBNBNCJNLIM_OFFSET UNITYSDK_OFFSET(0x15763190)
#define FGPJDBPGPAB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15763130)
#define FGPJDBPGPAB_HILHCKLBJOM_OFFSET UNITYSDK_OFFSET(0x15763500)
#define FGPJDBPGPAB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x157630D0)
#define FGPJDBPGPAB_NPJGONHMEOD_OFFSET UNITYSDK_OFFSET(0x15763310)
#define FGPJDBPGPAB_ONIAAGDIGMB_OFFSET UNITYSDK_OFFSET(0x15763AD0)

inline static constexpr unsigned int FGPJDBPGPAB_TypeDefinitionIndex = 61184;

	class FGPJDBPGPAB : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void GBNBNCJNLIM(::RPG::Client::IGamePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGamePhase*))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_GBNBNCJNLIM_OFFSET))(this, a1);
		}

		::System::Void EFIJDBHPINI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_EFIJDBHPINI_OFFSET))(this);
		}

		::RPG::Client::TextID NPJGONHMEOD()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_NPJGONHMEOD_OFFSET))(this);
		}

		::System::Void HILHCKLBJOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_HILHCKLBJOM_OFFSET))(this);
		}

		::System::Void ONIAAGDIGMB(::System::String* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FGPJDBPGPAB_ONIAAGDIGMB_OFFSET))(this, a1, a2, a3);
		}

	};
