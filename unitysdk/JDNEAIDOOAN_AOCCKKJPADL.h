#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDNEAIDOOAN_JEHPNMNHPLJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::LDWhiteBox { class WhiteBoxPath; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JDNEAIDOOAN_AOCCKKJPADL_CTOR_OFFSET UNITYSDK_OFFSET(0x165F3FE0)
#define JDNEAIDOOAN_AOCCKKJPADL_EIDMDJFAKFG_OFFSET UNITYSDK_OFFSET(0x16600420)
#define JDNEAIDOOAN_AOCCKKJPADL_IOEPJOFCCND_OFFSET UNITYSDK_OFFSET(0x16600700)

	class JDNEAIDOOAN_AOCCKKJPADL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::System::Collections::Generic::List_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*>* EGGCADJJJOD; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxPath*, ::System::Object*>* PKIJJKHMPDO; // 0x18
		::JDNEAIDOOAN_JEHPNMNHPLJ CKNAFGPJGDP; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::System::Object*>* NEIMCKIEJPE; // 0x40
		::RPGTools::LDWhiteBox::WhiteBoxRegion* KEBAPKDMJBO; // 0x48
		::UnityEngine::Vector3 CGPOODEDNGK; // 0x50
		::UnityEngine::Vector3 BCLKMAGAIII; // 0x5C
		::System::Boolean MKEHHAKDBHG; // 0x68
		::System::Void _ctor(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_AOCCKKJPADL_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean EIDMDJFAKFG(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::JDNEAIDOOAN_JEHPNMNHPLJ a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::JDNEAIDOOAN_JEHPNMNHPLJ))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_AOCCKKJPADL_EIDMDJFAKFG_OFFSET))(this, a1, a2);
		}

		::System::Void IOEPJOFCCND(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1, ::JDNEAIDOOAN_JEHPNMNHPLJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::WhiteBoxRegion*, ::JDNEAIDOOAN_JEHPNMNHPLJ))((::PBYTE)hIl2Cpp + JDNEAIDOOAN_AOCCKKJPADL_IOEPJOFCCND_OFFSET))(this, a1, a2);
		}

	};
