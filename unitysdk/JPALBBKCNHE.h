#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class DIBNHEICGAF;
class GIOCDNCMJPD;
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define JPALBBKCNHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A8880)
#define JPALBBKCNHE_GKJANNLBOOH_OFFSET UNITYSDK_OFFSET(0x1C4A8910)
#define JPALBBKCNHE_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C4A88D0)
#define JPALBBKCNHE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C4A8890)
#define JPALBBKCNHE_PIHIHEGGAHC_1_OFFSET UNITYSDK_OFFSET(0x1C4A8A30)
#define JPALBBKCNHE_PIHIHEGGAHC_OFFSET UNITYSDK_OFFSET(0x1C4A89B0)

	class JPALBBKCNHE : public ::System::Object
	{
	public:
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPALBBKCNHE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPALBBKCNHE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPALBBKCNHE_HADOHLNHHGB_OFFSET))(this);
		}

		::GIOCDNCMJPD* GKJANNLBOOH()
		{
			return ((::GIOCDNCMJPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPALBBKCNHE_GKJANNLBOOH_OFFSET))(this);
		}

		::GIOCDNCMJPD* PIHIHEGGAHC(::System::String* a1, ::DIBNHEICGAF* a2)
		{
			return ((::GIOCDNCMJPD*(*)(::PVOID, ::System::String*, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + JPALBBKCNHE_PIHIHEGGAHC_OFFSET))(this, a1, a2);
		}

		::GIOCDNCMJPD* PIHIHEGGAHC_1(::RPG::Client::DesignDataShortNameHash a1, ::DIBNHEICGAF* a2)
		{
			return ((::GIOCDNCMJPD*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + JPALBBKCNHE_PIHIHEGGAHC_1_OFFSET))(this, a1, a2);
		}

	};
