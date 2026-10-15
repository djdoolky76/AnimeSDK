#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/System/Object.h"
class NOKJBIHAOCM;
namespace RPG::GameCore { class AttackDamageTypeConfig; }
namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class RtAttackData; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HPPFADGBOJJ_BHODBHGCDAM_OFFSET UNITYSDK_OFFSET(0x15DCD170)
#define HPPFADGBOJJ_CPDLGBDNDPB_OFFSET UNITYSDK_OFFSET(0x15DCD7C0)
#define HPPFADGBOJJ_DCDLKOIBNNN_OFFSET UNITYSDK_OFFSET(0x15DCE090)
#define HPPFADGBOJJ_EHCDAHIMCLE_OFFSET UNITYSDK_OFFSET(0x15DCDB10)
#define HPPFADGBOJJ_EPCMAGGKKLL_OFFSET UNITYSDK_OFFSET(0x15DCE400)
#define HPPFADGBOJJ_FBCIBDFJMKE_OFFSET UNITYSDK_OFFSET(0x15DCE140)
#define HPPFADGBOJJ_FHHBGANDFPI_OFFSET UNITYSDK_OFFSET(0x15DCE4B0)
#define HPPFADGBOJJ_IEEFFMEOOPA_1_OFFSET UNITYSDK_OFFSET(0x15DCD950)
#define HPPFADGBOJJ_IEEFFMEOOPA_OFFSET UNITYSDK_OFFSET(0x15DCD8F0)
#define HPPFADGBOJJ_IEMHBKINDKL_OFFSET UNITYSDK_OFFSET(0x15DCD270)
#define HPPFADGBOJJ_IIIFPLPDKPA_OFFSET UNITYSDK_OFFSET(0x15DCDA30)
#define HPPFADGBOJJ_KDPNAGHCGFM_OFFSET UNITYSDK_OFFSET(0x15DCE350)
#define HPPFADGBOJJ_KHJABNFNHJM_OFFSET UNITYSDK_OFFSET(0x15DCD860)
#define HPPFADGBOJJ_KLDCIOGIKNA_OFFSET UNITYSDK_OFFSET(0x15DCE2A0)
#define HPPFADGBOJJ_LBMKLKCEFJD_OFFSET UNITYSDK_OFFSET(0x15DCE1F0)
#define HPPFADGBOJJ_LDAKELHCLJG_OFFSET UNITYSDK_OFFSET(0x15DCDFE0)
#define HPPFADGBOJJ_LIDKGFDCKGO_OFFSET UNITYSDK_OFFSET(0x15DCD220)

inline static constexpr unsigned int HPPFADGBOJJ_TypeDefinitionIndex = 53846;

	class HPPFADGBOJJ : public ::System::Object
	{
	public:
		static ::RPG::GameCore::AttackDamageType BHODBHGCDAM(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_BHODBHGCDAM_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType CPDLGBDNDPB(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_CPDLGBDNDPB_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType IEMHBKINDKL(::RPG::GameCore::AttackDamageTypeConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::AttackDamageTypeConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_IEMHBKINDKL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::AttackDamageType KHJABNFNHJM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_KHJABNFNHJM_OFFSET))(a1);
		}

		static ::RPG::GameCore::DamageBehaviorTemplate* IEEFFMEOOPA(::RPG::GameCore::RtAttackData* a1)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::RtAttackData*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_IEEFFMEOOPA_OFFSET))(a1);
		}

		static ::RPG::GameCore::DamageBehaviorTemplate* IEEFFMEOOPA_1(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::RPG::GameCore::DamageBehaviorTemplate*(*)(::RPG::GameCore::JsonEnum*, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_IEEFFMEOOPA_1_OFFSET))(a1, a2);
		}

		static ::System::String* IIIFPLPDKPA(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_IIIFPLPDKPA_OFFSET))(a1, a2, a3);
		}

		static ::System::Single LDAKELHCLJG(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_LDAKELHCLJG_OFFSET))(a1, a2);
		}

		static ::System::Boolean DCDLKOIBNNN(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_DCDLKOIBNNN_OFFSET))(a1, a2);
		}

		static ::System::Single FBCIBDFJMKE(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_FBCIBDFJMKE_OFFSET))(a1, a2);
		}

		static ::System::Single LBMKLKCEFJD(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_LBMKLKCEFJD_OFFSET))(a1, a2);
		}

		static ::System::Single KLDCIOGIKNA(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_KLDCIOGIKNA_OFFSET))(a1, a2);
		}

		static ::System::Single KDPNAGHCGFM(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_KDPNAGHCGFM_OFFSET))(a1, a2);
		}

		static ::System::Single EPCMAGGKKLL(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Single(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_EPCMAGGKKLL_OFFSET))(a1, a2);
		}

		static ::System::String* FHHBGANDFPI(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_FHHBGANDFPI_OFFSET))(a1, a2);
		}

		static ::NOKJBIHAOCM* LIDKGFDCKGO(::RPG::GameCore::RtAttackData* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::NOKJBIHAOCM*(*)(::RPG::GameCore::RtAttackData*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_LIDKGFDCKGO_OFFSET))(a1, a2);
		}

		static ::System::String* EHCDAHIMCLE(::RPG::GameCore::RtAttackData* a1, ::Il2CppArray<::System::String*>* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::RtAttackData*, ::Il2CppArray<::System::String*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HPPFADGBOJJ_EHCDAHIMCLE_OFFSET))(a1, a2, a3);
		}

	};
