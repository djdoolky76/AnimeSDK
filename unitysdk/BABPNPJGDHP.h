#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MHIDMJPLGCK.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetSkillTargetFormationByPos; }
namespace RPG::GameCore { class TargetFormationPosConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BABPNPJGDHP_BHMHHMLKFMF_OFFSET UNITYSDK_OFFSET(0x15BCFB00)
#define BABPNPJGDHP_CJNPAHEJNMP_OFFSET UNITYSDK_OFFSET(0x15BD03F0)
#define BABPNPJGDHP_DHONNHOODAM_OFFSET UNITYSDK_OFFSET(0x15BCE9A0)
#define BABPNPJGDHP_GAHADFLFOPF_OFFSET UNITYSDK_OFFSET(0x15BCEE60)
#define BABPNPJGDHP_GINHPBKBPIM_OFFSET UNITYSDK_OFFSET(0x15BD1E60)
#define BABPNPJGDHP_GPLMLHAPPNM_OFFSET UNITYSDK_OFFSET(0x15BD2110)
#define BABPNPJGDHP_HEEGBDKFHLH_1_OFFSET UNITYSDK_OFFSET(0x15BD2270)
#define BABPNPJGDHP_HEEGBDKFHLH_OFFSET UNITYSDK_OFFSET(0x15BD2060)
#define BABPNPJGDHP_HGGCKOHIKGI_OFFSET UNITYSDK_OFFSET(0x15BD18B0)
#define BABPNPJGDHP_HKCMAOOBLLO_OFFSET UNITYSDK_OFFSET(0x15BCF0F0)
#define BABPNPJGDHP_HOJKIDIPBMI_OFFSET UNITYSDK_OFFSET(0x15BCFA10)
#define BABPNPJGDHP_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0x15BCEBE0)
#define BABPNPJGDHP_LLLDKPEKJHP_OFFSET UNITYSDK_OFFSET(0x15BD13B0)
#define BABPNPJGDHP_OAGJKCIDLFA_OFFSET UNITYSDK_OFFSET(0x15BD1420)
#define BABPNPJGDHP_PAECLLDBENH_OFFSET UNITYSDK_OFFSET(0x15BCFE60)

	class BABPNPJGDHP : public ::System::Object
	{
	public:
		// static const ::System::Object GJFCPEHMGJE; // 0x0
		static ::System::Void DHONNHOODAM(::RPG::GameCore::SetSkillTargetFormationByPos* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::SetSkillTargetFormationByPos*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_DHONNHOODAM_OFFSET))(a1, a2, a3);
		}

		static ::System::ValueTuple KBOJFONKFKN(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSkillTargetFormationByPos* a2)
		{
			return ((::System::ValueTuple(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSkillTargetFormationByPos*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_KBOJFONKFKN_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple GAHADFLFOPF(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::ValueTuple(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BABPNPJGDHP_GAHADFLFOPF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HKCMAOOBLLO(::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>* a1, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>* a2, ::System::Collections::Generic::LinkedList_1<::System::Object*>* a3, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::RPG::GameCore::TargetFormationPosConfig*>*, ::System::Collections::Generic::LinkedListNode_1<::RPG::GameCore::TargetFormationPosConfig*>*, ::System::Collections::Generic::LinkedList_1<::System::Object*>*, ::System::Collections::Generic::LinkedListNode_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_HKCMAOOBLLO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single HOJKIDIPBMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_HOJKIDIPBMI_OFFSET))(a1);
		}

		static ::System::Void BHMHHMLKFMF(::System::Collections::Generic::LinkedList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_BHMHHMLKFMF_OFFSET))(a1);
		}

		static ::System::Void PAECLLDBENH(::System::Collections::Generic::LinkedList_1<::System::Object*>* a1, ::System::Single a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::System::Object*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BABPNPJGDHP_PAECLLDBENH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CJNPAHEJNMP(::System::Collections::Generic::LinkedList_1<::System::Object*>* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::System::Collections::Generic::LinkedList_1<::System::Object*>*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BABPNPJGDHP_CJNPAHEJNMP_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void LLLDKPEKJHP(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::MVector3 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + BABPNPJGDHP_LLLDKPEKJHP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OAGJKCIDLFA(::MHIDMJPLGCK a1)
		{
			return ((::System::Void(*)(::MHIDMJPLGCK))((::PBYTE)hIl2Cpp + BABPNPJGDHP_OAGJKCIDLFA_OFFSET))(a1);
		}

		static ::System::Void HGGCKOHIKGI(::MHIDMJPLGCK a1)
		{
			return ((::System::Void(*)(::MHIDMJPLGCK))((::PBYTE)hIl2Cpp + BABPNPJGDHP_HGGCKOHIKGI_OFFSET))(a1);
		}

		static ::System::Void GINHPBKBPIM(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + BABPNPJGDHP_GINHPBKBPIM_OFFSET))(a1, a2);
		}

		static ::System::Int32 HEEGBDKFHLH(::System::Boolean a1, ::RPG::GameCore::TeamType a2)
		{
			return ((::System::Int32(*)(::System::Boolean, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + BABPNPJGDHP_HEEGBDKFHLH_OFFSET))(a1, a2);
		}

		static ::System::UInt32 GPLMLHAPPNM(::RPG::GameCore::BattleInstance* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::BattleInstance*))((::PBYTE)hIl2Cpp + BABPNPJGDHP_GPLMLHAPPNM_OFFSET))(a1);
		}

		static ::System::Int32 HEEGBDKFHLH_1(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + BABPNPJGDHP_HEEGBDKFHLH_1_OFFSET))(a1);
		}

	};
