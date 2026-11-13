#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
class AKBHEIFJGBI;
class BGIKFIJNAED;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FOOEDBDMACD_AODECPINJAO_OFFSET UNITYSDK_OFFSET(0x1875FBF0)
#define FOOEDBDMACD_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1875FEB0)
#define FOOEDBDMACD_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1875FF80)
#define FOOEDBDMACD_CTOR_OFFSET UNITYSDK_OFFSET(0x18760020)
#define FOOEDBDMACD_FBIEPHFOCPA_OFFSET UNITYSDK_OFFSET(0x1875F9F0)
#define FOOEDBDMACD_GBBNHGMCEGF_OFFSET UNITYSDK_OFFSET(0x1875FCF0)
#define FOOEDBDMACD_ICILHOMLKPA_OFFSET UNITYSDK_OFFSET(0x1875F950)
#define FOOEDBDMACD_NBPNEMGGFKA_OFFSET UNITYSDK_OFFSET(0x1875FA40)
#define FOOEDBDMACD_NNDLCEIAHFA_OFFSET UNITYSDK_OFFSET(0x1875FDD0)
#define FOOEDBDMACD_NOLPLEKECJJ_OFFSET UNITYSDK_OFFSET(0x1875F810)
#define FOOEDBDMACD__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1875F650)
#define FOOEDBDMACD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1875F7C0)

inline static constexpr unsigned int FOOEDBDMACD_TypeDefinitionIndex = 73900;

	class FOOEDBDMACD : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::SkillButtonAdditionalStatusType>* ODHMLAMBLCB; // 0x60
		::BGIKFIJNAED* KHLOKFOANJC; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillButtonAdditionalStatusType, ::AKBHEIFJGBI*>* FDIGELCHJOM; // 0x70
		::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0x78
		::RPG::GameCore::ControlSkillType IGGBDDOGADM; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void ICILHOMLKPA(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + FOOEDBDMACD_ICILHOMLKPA_OFFSET))(this, a1);
		}

		::System::Void FBIEPHFOCPA(::BGIKFIJNAED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGIKFIJNAED*))((::PBYTE)hIl2Cpp + FOOEDBDMACD_FBIEPHFOCPA_OFFSET))(this, a1);
		}

		::System::Void NOLPLEKECJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD_NOLPLEKECJJ_OFFSET))(this);
		}

		::System::Void NBPNEMGGFKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD_NBPNEMGGFKA_OFFSET))(this);
		}

		::AKBHEIFJGBI* GBBNHGMCEGF(::RPG::GameCore::SkillButtonAdditionalStatusType a1)
		{
			return ((::AKBHEIFJGBI*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType))((::PBYTE)hIl2Cpp + FOOEDBDMACD_GBBNHGMCEGF_OFFSET))(this, a1);
		}

		::AKBHEIFJGBI* AODECPINJAO(::RPG::GameCore::SkillButtonAdditionalStatusType a1, ::System::String* a2)
		{
			return ((::AKBHEIFJGBI*(*)(::PVOID, ::RPG::GameCore::SkillButtonAdditionalStatusType, ::System::String*))((::PBYTE)hIl2Cpp + FOOEDBDMACD_AODECPINJAO_OFFSET))(this, a1, a2);
		}

		::System::Void NNDLCEIAHFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOOEDBDMACD_NNDLCEIAHFA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOEDBDMACD_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
