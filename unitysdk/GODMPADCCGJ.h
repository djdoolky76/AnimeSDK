#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class BCLJOEGJJOO;
class EKFMIDBJDIA;
class LHHEGNEBMLN;
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GODMPADCCGJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B20460)
#define GODMPADCCGJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B204A0)
#define GODMPADCCGJ_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0x15B1F400)
#define GODMPADCCGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B206E0)
#define GODMPADCCGJ_FNDKPBCKIOK_OFFSET UNITYSDK_OFFSET(0x15B204E0)
#define GODMPADCCGJ_GET_MUTEHANDLER_OFFSET UNITYSDK_OFFSET(0x15B206D0)
#define GODMPADCCGJ_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0x15B1FFE0)
#define GODMPADCCGJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15B1FEB0)
#define GODMPADCCGJ_MEJPCPBPMNM_OFFSET UNITYSDK_OFFSET(0x15B203E0)
#define GODMPADCCGJ_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15B20420)
#define GODMPADCCGJ_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15B1F290)

inline static constexpr unsigned int GODMPADCCGJ_TypeDefinitionIndex = 61030;

	class GODMPADCCGJ : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::LHHEGNEBMLN* DGCIKGOGMMC; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EventType, ::BCLJOEGJJOO*>* IDNFBOPGOKF; // 0x20
		::System::Boolean DOFJLCMOJML; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::LHHEGNEBMLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHEGNEBMLN*))((::PBYTE)hIl2Cpp + GODMPADCCGJ_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void MEJPCPBPMNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_MEJPCPBPMNM_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void BKJGMFOKKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_BKJGMFOKKKN_OFFSET))(this);
		}

		::System::Void GNCJAGHKEPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_GNCJAGHKEPO_OFFSET))(this);
		}

		::System::Void FNDKPBCKIOK(::RPG::GameCore::EventType a1, ::EKFMIDBJDIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventType, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GODMPADCCGJ_FNDKPBCKIOK_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_MuteHandler()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GODMPADCCGJ_GET_MUTEHANDLER_OFFSET))(this);
		}

	};
