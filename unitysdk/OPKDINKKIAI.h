#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace System { class String; }

#define OPKDINKKIAI_EKAFNLLJGJD_OFFSET UNITYSDK_OFFSET(0xBFAFA40)
#define OPKDINKKIAI_GBNOLEIMPKO_OFFSET UNITYSDK_OFFSET(0xBFAF9C0)
#define OPKDINKKIAI_HKBALMOBMOM_OFFSET UNITYSDK_OFFSET(0xBFAF910)
#define OPKDINKKIAI_MACIKNKIBLH_OFFSET UNITYSDK_OFFSET(0xBFAF970)

	class OPKDINKKIAI : public ::System::Object
	{
	public:
		// static const ::System::String* FAMLCHENCDE; // 0x0
		// static const ::System::String* IHHBNCFKCNB; // 0x0
		// static const ::System::String* AODBPFFILJM; // 0x0
		// static const ::System::String* EIPFFIMPDBP; // 0x0
		static ::System::Boolean HKBALMOBMOM(::GEEOPFIMJEM a1)
		{
			return ((::System::Boolean(*)(::GEEOPFIMJEM))((::PBYTE)hIl2Cpp + OPKDINKKIAI_HKBALMOBMOM_OFFSET))(a1);
		}

		static ::System::Boolean MACIKNKIBLH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + OPKDINKKIAI_MACIKNKIBLH_OFFSET))(a1);
		}

		static ::System::Boolean GBNOLEIMPKO(::DGPKLNNFELK* a1)
		{
			return ((::System::Boolean(*)(::DGPKLNNFELK*))((::PBYTE)hIl2Cpp + OPKDINKKIAI_GBNOLEIMPKO_OFFSET))(a1);
		}

		static ::System::Boolean EKAFNLLJGJD(::RPG::Client::OpenWorld::StreamingLayerDetail* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::OpenWorld::StreamingLayerDetail*))((::PBYTE)hIl2Cpp + OPKDINKKIAI_EKAFNLLJGJD_OFFSET))(a1);
		}

	};
