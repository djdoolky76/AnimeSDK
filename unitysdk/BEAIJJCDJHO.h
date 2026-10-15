#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/System/Object.h"
class BEAIJJCDJHO;
namespace System { class String; }

#define BEAIJJCDJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x16309370)
#define BEAIJJCDJHO_EHMHHDKBGIL_OFFSET UNITYSDK_OFFSET(0x16309710)
#define BEAIJJCDJHO_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x163097D0)
#define BEAIJJCDJHO_IICAABCDHPM_1_OFFSET UNITYSDK_OFFSET(0x16309660)
#define BEAIJJCDJHO_IICAABCDHPM_OFFSET UNITYSDK_OFFSET(0x163093C0)
#define BEAIJJCDJHO_MFCOINKALKA_OFFSET UNITYSDK_OFFSET(0x16309380)

	class BEAIJJCDJHO : public ::System::Object
	{
	public:
		::System::Boolean BHMGBPJCFBK; // 0x10
		::System::Boolean KCOEPCMEJCB; // 0x11
		::System::Boolean IOBJFEJFLJP; // 0x12
		::System::Byte _padding0[0x1];
		::RPG::GameCore::PPEffectFilterPriorityGroup OMJNGMHJPBD; // 0x14
		::RPG::GameCore::PPEffectFilterPriority NALMBOOCCIN; // 0x18
		::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PPEffectFilterType MFCOINKALKA()
		{
			return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_MFCOINKALKA_OFFSET))(this);
		}

		::System::Boolean IICAABCDHPM(::BEAIJJCDJHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BEAIJJCDJHO*))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_IICAABCDHPM_OFFSET))(this, a1);
		}

		::System::Boolean IICAABCDHPM_1(::System::String* a1, ::RPG::GameCore::PPEffectFilterPriorityGroup a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::PPEffectFilterPriorityGroup))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_IICAABCDHPM_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean EHMHHDKBGIL(::RPG::GameCore::PPEffectFilterType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_EHMHHDKBGIL_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEAIJJCDJHO_HADOHLNHHGB_OFFSET))(this);
		}

	};
