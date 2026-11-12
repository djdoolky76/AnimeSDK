#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComicDessertTutorialOperationType.h"
#include "unitysdk/System/Object.h"
class PEPPJLLGLIM;

#define HKBKBKIBLPE_AHNCOOJGGHC_OFFSET UNITYSDK_OFFSET(0x16C90130)
#define HKBKBKIBLPE_DLADNOGEAHE_1_OFFSET UNITYSDK_OFFSET(0x16C90250)
#define HKBKBKIBLPE_DLADNOGEAHE_OFFSET UNITYSDK_OFFSET(0x16C900A0)

inline static constexpr unsigned int HKBKBKIBLPE_TypeDefinitionIndex = 77047;

	class HKBKBKIBLPE : public ::System::Object
	{
	public:
		static ::System::Boolean DLADNOGEAHE(::PEPPJLLGLIM* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PEPPJLLGLIM*, ::System::UInt32))((::PBYTE)hIl2Cpp + HKBKBKIBLPE_DLADNOGEAHE_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLADNOGEAHE_1(::PEPPJLLGLIM* a1, ::System::UInt32 a2, ::RPG::GameCore::ComicDessertTutorialOperationType a3)
		{
			return ((::System::Boolean(*)(::PEPPJLLGLIM*, ::System::UInt32, ::RPG::GameCore::ComicDessertTutorialOperationType))((::PBYTE)hIl2Cpp + HKBKBKIBLPE_DLADNOGEAHE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AHNCOOJGGHC(::PEPPJLLGLIM* a1)
		{
			return ((::System::Boolean(*)(::PEPPJLLGLIM*))((::PBYTE)hIl2Cpp + HKBKBKIBLPE_AHNCOOJGGHC_OFFSET))(a1);
		}

	};
