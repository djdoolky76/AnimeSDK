#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class AkCallbackInfo;
class EKFMIDBJDIA;
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class AutoFightVORow; }
namespace RPG::GameCore { class AvatarVORow; }
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPCIPPHCLGD_BHDNELECBOI_OFFSET UNITYSDK_OFFSET(0x15904050)
#define FPCIPPHCLGD_BMLIFKNODGE_OFFSET UNITYSDK_OFFSET(0x15902E60)
#define FPCIPPHCLGD_CEDIPLGINHJ_OFFSET UNITYSDK_OFFSET(0x15903880)
#define FPCIPPHCLGD_CFNLMEBDNGL_OFFSET UNITYSDK_OFFSET(0x159034F0)
#define FPCIPPHCLGD_CTOR_OFFSET UNITYSDK_OFFSET(0x159047E0)
#define FPCIPPHCLGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15902900)
#define FPCIPPHCLGD_DJGGJPCFLBJ_OFFSET UNITYSDK_OFFSET(0x15904170)
#define FPCIPPHCLGD_GET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x159047C0)
#define FPCIPPHCLGD_GET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x159047A0)
#define FPCIPPHCLGD_GJACGJJOIDB_OFFSET UNITYSDK_OFFSET(0x15903100)
#define FPCIPPHCLGD_IFLFPIALOHH_OFFSET UNITYSDK_OFFSET(0x15904710)
#define FPCIPPHCLGD_JCIICJFPDJC_OFFSET UNITYSDK_OFFSET(0x15903670)
#define FPCIPPHCLGD_KBCOJMANGMF_OFFSET UNITYSDK_OFFSET(0x159042C0)
#define FPCIPPHCLGD_KKCPLHFPEFJ_OFFSET UNITYSDK_OFFSET(0x15903ED0)
#define FPCIPPHCLGD_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x15903E40)
#define FPCIPPHCLGD_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15902B40)
#define FPCIPPHCLGD_OBFHKAMMBGH_OFFSET UNITYSDK_OFFSET(0x15903DC0)
#define FPCIPPHCLGD_OLEHFIFCLIN_OFFSET UNITYSDK_OFFSET(0x159043E0)
#define FPCIPPHCLGD_OMADNCJHKOE_OFFSET UNITYSDK_OFFSET(0x15904580)
#define FPCIPPHCLGD_PEAIDDHAFPD_OFFSET UNITYSDK_OFFSET(0x15903B80)
#define FPCIPPHCLGD_SET_HEALTHLOWPLAYED_OFFSET UNITYSDK_OFFSET(0x159047D0)
#define FPCIPPHCLGD_SET_SKILLREADYPLAYED_OFFSET UNITYSDK_OFFSET(0x159047B0)

inline static constexpr unsigned int FPCIPPHCLGD_TypeDefinitionIndex = 57214;

	class FPCIPPHCLGD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GridFightRoleOverrideVOConfigRow* BAAGDACPBMA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::CharacterVOType>* NOBJJHNNIJE; // 0x20
		::RPG::Client::GameObjectAudio* IBPBIPPHKGI; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterVOType>* MJBNOCHEHAB; // 0x30
		::System::String* LPODEFCCFML; // 0x38
		::System::String* LCFFGNLFLKJ; // 0x40
		::System::UInt32 JHADDIAJCPJ; // 0x48
		::System::UInt32 CMKFGPGPOGH; // 0x4C
		::RPG::GameCore::CharacterVOType IMMJEEBEADG; // 0x50
		::System::Boolean _SkillReadyPlayed_k__BackingField; // 0x54
		::System::Boolean OHDLLIAELPD; // 0x55
		::System::Boolean _HealthLowPlayed_k__BackingField; // 0x56
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void BMLIFKNODGE(::RPG::GameCore::CharacterVOType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_BMLIFKNODGE_OFFSET))(this, a1);
		}

		::System::Void JCIICJFPDJC(::Il2CppArray<::RPG::GameCore::CharacterVOType>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::CharacterVOType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_JCIICJFPDJC_OFFSET))(this, a1, a2);
		}

		::System::Void CEDIPLGINHJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_CEDIPLGINHJ_OFFSET))(this, a1);
		}

		::System::Void KMKEGNFJIOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_KMKEGNFJIOI_OFFSET))(this, a1);
		}

		::System::Void KKCPLHFPEFJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_KKCPLHFPEFJ_OFFSET))(this, a1);
		}

		::System::Boolean GJACGJJOIDB(::RPG::GameCore::CharacterVOType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_GJACGJJOIDB_OFFSET))(this, a1);
		}

		::System::Boolean DJGGJPCFLBJ(::RPG::GameCore::CharacterVOType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_DJGGJPCFLBJ_OFFSET))(this, a1);
		}

		::System::String* CFNLMEBDNGL(::RPG::GameCore::CharacterVOType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_CFNLMEBDNGL_OFFSET))(this, a1);
		}

		::System::Boolean PEAIDDHAFPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_PEAIDDHAFPD_OFFSET))(this);
		}

		::System::Boolean OBFHKAMMBGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_OBFHKAMMBGH_OFFSET))(this);
		}

		::System::UInt32 KBCOJMANGMF(::RPG::GameCore::AvatarVORow* a1, ::RPG::GameCore::CharacterVOType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AvatarVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_KBCOJMANGMF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 BHDNELECBOI(::RPG::GameCore::AutoFightVORow* a1, ::RPG::GameCore::CharacterVOType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AutoFightVORow*, ::RPG::GameCore::CharacterVOType))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_BHDNELECBOI_OFFSET))(this, a1, a2);
		}

		::System::Void OLEHFIFCLIN(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_OLEHFIFCLIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OMADNCJHKOE(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_OMADNCJHKOE_OFFSET))(this, a1, a2);
		}

		::System::Void IFLFPIALOHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_IFLFPIALOHH_OFFSET))(this, a1);
		}

		::System::Boolean get_SkillReadyPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_GET_SKILLREADYPLAYED_OFFSET))(this);
		}

		::System::Void set_SkillReadyPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_SET_SKILLREADYPLAYED_OFFSET))(this, a1);
		}

		::System::Boolean get_HealthLowPlayed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_GET_HEALTHLOWPLAYED_OFFSET))(this);
		}

		::System::Void set_HealthLowPlayed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FPCIPPHCLGD_SET_HEALTHLOWPLAYED_OFFSET))(this, a1);
		}

	};
