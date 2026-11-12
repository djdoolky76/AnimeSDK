#pragma once
#include "unitysdk/unitysdk.h"
class MJAOHLLPLGK;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HBOFGNJOLDA_AIDMLNDEGPD_OFFSET UNITYSDK_OFFSET(0x16B55AD0)
#define HBOFGNJOLDA_CTOR_OFFSET UNITYSDK_OFFSET(0x16B55A50)
#define HBOFGNJOLDA_HCAONMLLGFM_OFFSET UNITYSDK_OFFSET(0x16B55A70)
#define HBOFGNJOLDA_MBNDFIAHBDJ_OFFSET UNITYSDK_OFFSET(0x16B55B90)
#define HBOFGNJOLDA_PNKHNIJIJME_OFFSET UNITYSDK_OFFSET(0x16B55B30)

inline static constexpr unsigned int HBOFGNJOLDA_TypeDefinitionIndex = 79892;

	class HBOFGNJOLDA
	{
	public:
		::MJAOHLLPLGK* FKINCGODJEP; // 0x20
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::RPG::GameCore::GameEntity* a2, ::System::Action_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::RPG::GameCore::GameEntity*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + HBOFGNJOLDA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HCAONMLLGFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOFGNJOLDA_HCAONMLLGFM_OFFSET))(this);
		}

		::System::Void AIDMLNDEGPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOFGNJOLDA_AIDMLNDEGPD_OFFSET))(this);
		}

		::System::Void PNKHNIJIJME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOFGNJOLDA_PNKHNIJIJME_OFFSET))(this);
		}

		::System::Void MBNDFIAHBDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOFGNJOLDA_MBNDFIAHBDJ_OFFSET))(this);
		}

	};
