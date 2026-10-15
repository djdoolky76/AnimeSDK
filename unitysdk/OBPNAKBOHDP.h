#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class BattleSkillCustomToastParam; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OBPNAKBOHDP_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD4C850)
#define OBPNAKBOHDP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD4C7D0)
#define OBPNAKBOHDP_EMDNMNCDCAH_OFFSET UNITYSDK_OFFSET(0xBD4BE70)
#define OBPNAKBOHDP_FNOGLOMKMEI_OFFSET UNITYSDK_OFFSET(0xBD4BFF0)
#define OBPNAKBOHDP_GGCFIOKNNGN_OFFSET UNITYSDK_OFFSET(0xBD4C240)
#define OBPNAKBOHDP_IECAPCJPFND_OFFSET UNITYSDK_OFFSET(0xBD4C5B0)
#define OBPNAKBOHDP_ILLKFEJAEFD_OFFSET UNITYSDK_OFFSET(0xBD4C130)
#define OBPNAKBOHDP_JIPBBMPODME_1_OFFSET UNITYSDK_OFFSET(0xBD4C740)
#define OBPNAKBOHDP_JIPBBMPODME_OFFSET UNITYSDK_OFFSET(0xBD4BF20)
#define OBPNAKBOHDP_NMOAEMBFGBD_OFFSET UNITYSDK_OFFSET(0xBD4C080)
#define OBPNAKBOHDP_OBHPFBFHEJI_OFFSET UNITYSDK_OFFSET(0xBD4BB90)
#define OBPNAKBOHDP_PLLPHNAFIBC_OFFSET UNITYSDK_OFFSET(0xBD4C3D0)

inline static constexpr unsigned int OBPNAKBOHDP_TypeDefinitionIndex = 71949;

	class OBPNAKBOHDP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SkillType, ::RPG::Client::BattleSkillCustomToastParam*>* NFGECJDNLBL; // 0x10
		static ::System::String** StaticGet_HPLCEADCOMD()
		{
			return (::System::String**)UnitySDK::FromName("", "OBPNAKBOHDP")->GetStaticField(0x5B460);
		}

		static ::System::String** StaticGet_LOFNDIPFOCC()
		{
			return (::System::String**)UnitySDK::FromName("", "OBPNAKBOHDP")->GetStaticField(0x5B468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBPNAKBOHDP_CCTOR_OFFSET))();
		}

		::System::Void OBHPFBFHEJI(::RPG::GameCore::SkillData* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_OBHPFBFHEJI_OFFSET))(this, a1, a2);
		}

		::System::Void FNOGLOMKMEI(::Il2CppArray<::RPG::GameCore::SkillType>* a1, ::RPG::GameCore::SkillTextDialogType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_FNOGLOMKMEI_OFFSET))(this, a1, a2);
		}

		static ::System::Void JIPBBMPODME(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::Client::BattleSkillCustomToastParam* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_JIPBBMPODME_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JIPBBMPODME_1(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::GameCore::SkillTextDialogType a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_JIPBBMPODME_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IECAPCJPFND(::RPG::Client::TextID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_IECAPCJPFND_OFFSET))(a1, a2);
		}

		static ::System::Void PLLPHNAFIBC(::RPG::Client::TextID a1, ::System::Boolean a2, ::RPG::Client::BattleSkillCustomToastParam* a3)
		{
			return ((::System::Void(*)(::RPG::Client::TextID, ::System::Boolean, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_PLLPHNAFIBC_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::BattleSkillCustomToastParam* NMOAEMBFGBD(::RPG::GameCore::SkillTextDialogType a1)
		{
			return ((::RPG::Client::BattleSkillCustomToastParam*(*)(::RPG::GameCore::SkillTextDialogType))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_NMOAEMBFGBD_OFFSET))(a1);
		}

		::System::Void ILLKFEJAEFD(::Il2CppArray<::RPG::GameCore::SkillType>* a1, ::RPG::Client::BattleSkillCustomToastParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*, ::RPG::Client::BattleSkillCustomToastParam*))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_ILLKFEJAEFD_OFFSET))(this, a1, a2);
		}

		::System::Void GGCFIOKNNGN(::Il2CppArray<::RPG::GameCore::SkillType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::SkillType>*))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_GGCFIOKNNGN_OFFSET))(this, a1);
		}

		::RPG::Client::BattleSkillCustomToastParam* EMDNMNCDCAH(::RPG::GameCore::SkillType a1)
		{
			return ((::RPG::Client::BattleSkillCustomToastParam*(*)(::PVOID, ::RPG::GameCore::SkillType))((::PBYTE)hIl2Cpp + OBPNAKBOHDP_EMDNMNCDCAH_OFFSET))(this, a1);
		}

	};
