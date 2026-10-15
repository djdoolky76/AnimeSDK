#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/JOGBIBJLPJB.h"
#include "unitysdk/RPG/Client/EPedestrianV2MotionState.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FCLMONFLHFP;
class GNHANKEMGLG;
class LAJCPEFEOPN;
class MHHBDDMJOII;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class LevelPedestrianV2ChenLingStackGroupCollectionConfig; }
namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeInfo; }
namespace RPG::GameCore { class LevelPedestrianV2SpawnGroupInfo_ChenLingStack; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define KFGKNDNJKMI_BGDODOOMCDD_OFFSET UNITYSDK_OFFSET(0xB397300)
#define KFGKNDNJKMI_BHENBGMFOLJ_OFFSET UNITYSDK_OFFSET(0xB398AC0)
#define KFGKNDNJKMI_BJCIFNEHKLO_OFFSET UNITYSDK_OFFSET(0xB3957D0)
#define KFGKNDNJKMI_BJCLLMLKDCC_OFFSET UNITYSDK_OFFSET(0xB3944C0)
#define KFGKNDNJKMI_BMKNPEPHDCN_OFFSET UNITYSDK_OFFSET(0xB395760)
#define KFGKNDNJKMI_CECMLOLKCEA_OFFSET UNITYSDK_OFFSET(0xB3988F0)
#define KFGKNDNJKMI_CLLOKJKEGJA_OFFSET UNITYSDK_OFFSET(0xB393390)
#define KFGKNDNJKMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB393480)
#define KFGKNDNJKMI_DCDNCGFKKNE_OFFSET UNITYSDK_OFFSET(0xB3989A0)
#define KFGKNDNJKMI_DHCECDODIJN_OFFSET UNITYSDK_OFFSET(0xB3950F0)
#define KFGKNDNJKMI_DIEGOCNDAGH_OFFSET UNITYSDK_OFFSET(0xB3983C0)
#define KFGKNDNJKMI_EACBFKFODLI_OFFSET UNITYSDK_OFFSET(0xB3986D0)
#define KFGKNDNJKMI_EBCACBMLMBH_OFFSET UNITYSDK_OFFSET(0xB393440)
#define KFGKNDNJKMI_EEAMDGCOAPE_OFFSET UNITYSDK_OFFSET(0xB398610)
#define KFGKNDNJKMI_EMGHPOIKNED_OFFSET UNITYSDK_OFFSET(0xB395FD0)
#define KFGKNDNJKMI_FCMKHIPNDPG_OFFSET UNITYSDK_OFFSET(0xB393470)
#define KFGKNDNJKMI_FLCNIHINHCK_OFFSET UNITYSDK_OFFSET(0xB3960F0)
#define KFGKNDNJKMI_GET_ALLOWMEMBERPLAY_OFFSET UNITYSDK_OFFSET(0xB393410)
#define KFGKNDNJKMI_GET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0xB393370)
#define KFGKNDNJKMI_GET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0xB393310)
#define KFGKNDNJKMI_GET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0xB393420)
#define KFGKNDNJKMI_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0xB393300)
#define KFGKNDNJKMI_GET_STAGE_OFFSET UNITYSDK_OFFSET(0xB393330)
#define KFGKNDNJKMI_GET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0xB393350)
#define KFGKNDNJKMI_GET_WORLDINVERSEROTATION_OFFSET UNITYSDK_OFFSET(0xB3933F0)
#define KFGKNDNJKMI_GET_WORLDROTATION_OFFSET UNITYSDK_OFFSET(0xB3933E0)
#define KFGKNDNJKMI_GET_WORLDUP_OFFSET UNITYSDK_OFFSET(0xB3933C0)
#define KFGKNDNJKMI_GLDEKOPHABM_OFFSET UNITYSDK_OFFSET(0xB395210)
#define KFGKNDNJKMI_GMCOPDBFDDO_OFFSET UNITYSDK_OFFSET(0xB395630)
#define KFGKNDNJKMI_HALIHCHKGHK_OFFSET UNITYSDK_OFFSET(0xB397ED0)
#define KFGKNDNJKMI_HFJONIGFLKL_OFFSET UNITYSDK_OFFSET(0xB395F20)
#define KFGKNDNJKMI_HJCKACFIPME_OFFSET UNITYSDK_OFFSET(0xB3977C0)
#define KFGKNDNJKMI_IHBFOADLDFM_OFFSET UNITYSDK_OFFSET(0xB397650)
#define KFGKNDNJKMI_INFLPMAJFMJ_OFFSET UNITYSDK_OFFSET(0xB397F30)
#define KFGKNDNJKMI_JINAKLJMJMI_OFFSET UNITYSDK_OFFSET(0xB398290)
#define KFGKNDNJKMI_KNFLJFDILFH_OFFSET UNITYSDK_OFFSET(0xB3980A0)
#define KFGKNDNJKMI_LEJNMHBJICL_OFFSET UNITYSDK_OFFSET(0xB395AE0)
#define KFGKNDNJKMI_LLMAJLEMIDM_OFFSET UNITYSDK_OFFSET(0xB395480)
#define KFGKNDNJKMI_MAICPLMKPNM_OFFSET UNITYSDK_OFFSET(0xB394A20)
#define KFGKNDNJKMI_MGLLLJJJIFP_OFFSET UNITYSDK_OFFSET(0xB398490)
#define KFGKNDNJKMI_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xB394CA0)
#define KFGKNDNJKMI_NKJJNFGGIIA_OFFSET UNITYSDK_OFFSET(0xB394C10)
#define KFGKNDNJKMI_OELCGEJKKLC_OFFSET UNITYSDK_OFFSET(0xB393400)
#define KFGKNDNJKMI_OEOJGELDLFO_OFFSET UNITYSDK_OFFSET(0xB396930)
#define KFGKNDNJKMI_PDCIDEGIBEA_OFFSET UNITYSDK_OFFSET(0xB398B10)
#define KFGKNDNJKMI_PIIJCDLHDEO_OFFSET UNITYSDK_OFFSET(0xB3968A0)
#define KFGKNDNJKMI_PMAPOPJNKEA_OFFSET UNITYSDK_OFFSET(0xB397100)
#define KFGKNDNJKMI_PPHKCCCLINE_OFFSET UNITYSDK_OFFSET(0xB394710)
#define KFGKNDNJKMI_SET_DROPINFOS_OFFSET UNITYSDK_OFFSET(0xB393380)
#define KFGKNDNJKMI_SET_INTERSECTIONINFO_OFFSET UNITYSDK_OFFSET(0xB393320)
#define KFGKNDNJKMI_SET_ISPLAYERENTRY_OFFSET UNITYSDK_OFFSET(0xB393430)
#define KFGKNDNJKMI_SET_STAGE_OFFSET UNITYSDK_OFFSET(0xB393340)
#define KFGKNDNJKMI_SET_TRIGGERHANDLER_OFFSET UNITYSDK_OFFSET(0xB393360)

inline static constexpr unsigned int KFGKNDNJKMI_TypeDefinitionIndex = 69311;

	class KFGKNDNJKMI : public ::ICOHAPENNHF
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AFHHGOBEBFN; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* _Slots_k__BackingField; // 0x88
		::RPG::Client::Stage* _Stage_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::LAJCPEFEOPN*>* FHPFKPGCCBA; // 0x98
		::Il2CppArray<::UnityEngine::Plane>* NLGMHFDMCIE; // 0xA0
		::System::Collections::Generic::List_1<::GNHANKEMGLG*>* GFGBFKPKDDL; // 0xA8
		::Il2CppArray<::System::Object*>* _DropInfos_k__BackingField; // 0xB0
		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* _IntersectionInfo_k__BackingField; // 0xB8
		::System::Collections::Generic::Dictionary_2<::GNHANKEMGLG*, ::System::Int32>* JBLPBAHALAD; // 0xC0
		::Il2CppArray<::JOGBIBJLPJB>* LBNAKGHEAOP; // 0xC8
		::FCLMONFLHFP* _TriggerHandler_k__BackingField; // 0xD0
		::RPG::GameCore::LevelPedestrianV2ChenLingStackGroupCollectionConfig* NLLCKGHLHBP; // 0xD8
		::Il2CppArray<::JOGBIBJLPJB>* KFAMJKJOIDF; // 0xE0
		::System::Collections::Generic::List_1<::System::Int32>* PIIKENFNAKA; // 0xE8
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int32>* HDOCPOKEFLM; // 0xF0
		::System::Single HALDDNCJIIK; // 0xF8
		::UnityEngine::Vector3 _WorldUp_k__BackingField; // 0xFC
		::UnityEngine::Quaternion _WorldInverseRotation_k__BackingField; // 0x108
		::System::Boolean _IsPlayerEntry_k__BackingField; // 0x118
		::System::Boolean _AllowMemberPlay_k__BackingField; // 0x119
		::System::Byte _padding0[0x2];
		::UnityEngine::Quaternion _WorldRotation_k__BackingField; // 0x11C
		::UnityEngine::Vector3 IMPMLMGENKL; // 0x12C
		::UnityEngine::Vector3 EAOEILGMPPD; // 0x138
		// static const ::System::Object CNAHIJPJIEI; // 0x0
		// static const ::System::Object JEPNLDLBCNN; // 0x0
		// static const ::System::Object HOAKNDHKAOI; // 0x0
		// static const ::System::Object GBOIMCNKLAI; // 0x0
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_Slots()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_SLOTS_OFFSET))(this);
		}

		::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* get_IntersectionInfo()
		{
			return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_INTERSECTIONINFO_OFFSET))(this);
		}

		::System::Void set_IntersectionInfo(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeInfo*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_SET_INTERSECTIONINFO_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* get_Stage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_STAGE_OFFSET))(this);
		}

		::System::Void set_Stage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_SET_STAGE_OFFSET))(this, a1);
		}

		::FCLMONFLHFP* get_TriggerHandler()
		{
			return ((::FCLMONFLHFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_TRIGGERHANDLER_OFFSET))(this);
		}

		::System::Void set_TriggerHandler(::FCLMONFLHFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLMONFLHFP*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_SET_TRIGGERHANDLER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* get_DropInfos()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_DROPINFOS_OFFSET))(this);
		}

		::System::Void set_DropInfos(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_SET_DROPINFOS_OFFSET))(this, a1);
		}

		::System::Single CLLOKJKEGJA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_CLLOKJKEGJA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_WorldUp()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_WORLDUP_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_WorldRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_WORLDROTATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_WorldInverseRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_WORLDINVERSEROTATION_OFFSET))(this);
		}

		::System::Boolean OELCGEJKKLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_OELCGEJKKLC_OFFSET))(this);
		}

		::System::Boolean get_AllowMemberPlay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_ALLOWMEMBERPLAY_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GET_ISPLAYERENTRY_OFFSET))(this);
		}

		::System::Void set_IsPlayerEntry(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_SET_ISPLAYERENTRY_OFFSET))(this, a1);
		}

		::System::Single EBCACBMLMBH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_EBCACBMLMBH_OFFSET))(this);
		}

		::RPG::Client::EPedestrianV2MotionState FCMKHIPNDPG()
		{
			return ((::RPG::Client::EPedestrianV2MotionState(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_FCMKHIPNDPG_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_MHFNJCLKNMG_OFFSET))(this);
		}

		::UnityEngine::Vector3 DHCECDODIJN(::LAJCPEFEOPN* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_DHCECDODIJN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GLDEKOPHABM(::LAJCPEFEOPN* a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::LAJCPEFEOPN*, ::System::Single))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GLDEKOPHABM_OFFSET))(this, a1, a2);
		}

		::System::Boolean LLMAJLEMIDM(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_LLMAJLEMIDM_OFFSET))(this, a1);
		}

		::System::Void GMCOPDBFDDO(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_GMCOPDBFDDO_OFFSET))(this, a1);
		}

		::System::Single BMKNPEPHDCN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_BMKNPEPHDCN_OFFSET))(this);
		}

		::JOGBIBJLPJB BJCIFNEHKLO(::JOGBIBJLPJB a1)
		{
			return ((::JOGBIBJLPJB(*)(::PVOID, ::JOGBIBJLPJB))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_BJCIFNEHKLO_OFFSET))(this, a1);
		}

		::System::Boolean LEJNMHBJICL(::LAJCPEFEOPN* a1, ::JOGBIBJLPJB a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*, ::JOGBIBJLPJB, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_LEJNMHBJICL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HFJONIGFLKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_HFJONIGFLKL_OFFSET))(this);
		}

		::LAJCPEFEOPN* FLCNIHINHCK(::System::Single a1)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_FLCNIHINHCK_OFFSET))(this, a1);
		}

		::System::Boolean OEOJGELDLFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_OEOJGELDLFO_OFFSET))(this);
		}

		::System::Boolean BGDODOOMCDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_BGDODOOMCDD_OFFSET))(this);
		}

		::System::Boolean PIIJCDLHDEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_PIIJCDLHDEO_OFFSET))(this);
		}

		::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack* PMAPOPJNKEA()
		{
			return ((::RPG::GameCore::LevelPedestrianV2SpawnGroupInfo_ChenLingStack*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_PMAPOPJNKEA_OFFSET))(this);
		}

		::System::Void IHBFOADLDFM(::GNHANKEMGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNHANKEMGLG*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_IHBFOADLDFM_OFFSET))(this, a1);
		}

		::System::Boolean HJCKACFIPME(::GNHANKEMGLG* a1, ::UnityEngine::Vector3 a2, ::System::Int32 a3, ::System::Collections::Generic::HashSet_1<::System::Int32>* a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNHANKEMGLG*, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_HJCKACFIPME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean INFLPMAJFMJ(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_INFLPMAJFMJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean KNFLJFDILFH(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_KNFLJFDILFH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean JINAKLJMJMI(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_JINAKLJMJMI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MGLLLJJJIFP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_MGLLLJJJIFP_OFFSET))(this, a1, a2);
		}

		::System::Boolean DIEGOCNDAGH(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::Int32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_DIEGOCNDAGH_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EEAMDGCOAPE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_EEAMDGCOAPE_OFFSET))(this, a1, a2);
		}

		::System::Single EACBFKFODLI(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_EACBFKFODLI_OFFSET))(this, a1);
		}

		::System::Boolean HALIHCHKGHK(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_HALIHCHKGHK_OFFSET))(this, a1);
		}

		::System::Single NKJJNFGGIIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_NKJJNFGGIIA_OFFSET))(this);
		}

		::System::Boolean PPHKCCCLINE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_PPHKCCCLINE_OFFSET))(this, a1);
		}

		::System::Boolean CECMLOLKCEA(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_CECMLOLKCEA_OFFSET))(this, a1);
		}

		::System::Void DCDNCGFKKNE(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_DCDNCGFKKNE_OFFSET))(this, a1);
		}

		::System::Int32 EMGHPOIKNED()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_EMGHPOIKNED_OFFSET))(this);
		}

		::System::Void BHENBGMFOLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_BHENBGMFOLJ_OFFSET))(this);
		}

		::System::Void PDCIDEGIBEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_PDCIDEGIBEA_OFFSET))(this);
		}

		::UnityEngine::Vector3 BJCLLMLKDCC(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_BJCLLMLKDCC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MAICPLMKPNM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFGKNDNJKMI_MAICPLMKPNM_OFFSET))(this, a1);
		}

	};
