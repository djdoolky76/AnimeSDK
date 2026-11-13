#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtSkillState.h"
#include "unitysdk/System/Object.h"
class CENEFPOMFKG;
class ILMMNCLCDIM;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MAGCCADNIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E16A0)
#define MAGCCADNIAL_EJNBJPPGNJF_OFFSET UNITYSDK_OFFSET(0x1B6E10B0)
#define MAGCCADNIAL_IGECCCCAJKG_OFFSET UNITYSDK_OFFSET(0x1B6E1130)
#define MAGCCADNIAL_MPLLJNAGDBA_OFFSET UNITYSDK_OFFSET(0x1B6E14A0)
#define MAGCCADNIAL_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0x1B6E0F50)
#define MAGCCADNIAL_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0x1B6E0FF0)

inline static constexpr unsigned int MAGCCADNIAL_TypeDefinitionIndex = 55296;

	class MAGCCADNIAL : public ::System::Object
	{
	public:
		::ILMMNCLCDIM* FIDOJLHKINO; // 0x10
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x18
		::System::Collections::Generic::Dictionary_2<::CENEFPOMFKG*, ::RPG::GameCore::GameEntityList*>* EEBPGILKFFC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCCADNIAL_CTOR_OFFSET))(this);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + MAGCCADNIAL_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCCADNIAL_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Void EJNBJPPGNJF(::CENEFPOMFKG* a1, ::RPG::GameCore::RtSkillState a2, ::RPG::GameCore::RtSkillState a3)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*, ::RPG::GameCore::RtSkillState, ::RPG::GameCore::RtSkillState))((::PBYTE)hIl2Cpp + MAGCCADNIAL_EJNBJPPGNJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IGECCCCAJKG(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + MAGCCADNIAL_IGECCCCAJKG_OFFSET))(this, a1);
		}

		::System::Void MPLLJNAGDBA(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + MAGCCADNIAL_MPLLJNAGDBA_OFFSET))(this, a1);
		}

	};
