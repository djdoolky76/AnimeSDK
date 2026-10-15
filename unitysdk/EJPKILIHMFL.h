#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorCullingMode.h"
class PKLHDDGKKOC;
namespace RPG::Client { class CharacterMonoAvatar; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define EJPKILIHMFL_AEBFLCGMDIB_OFFSET UNITYSDK_OFFSET(0x154F91C0)
#define EJPKILIHMFL_BDABONHJDHJ_OFFSET UNITYSDK_OFFSET(0x154F9280)
#define EJPKILIHMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x154F8770)
#define EJPKILIHMFL_DAAAMHJOKHA_OFFSET UNITYSDK_OFFSET(0x154F9ED0)
#define EJPKILIHMFL_DLLBGJKDMMP_OFFSET UNITYSDK_OFFSET(0x154F94B0)
#define EJPKILIHMFL_FAPKBLGIMDF_OFFSET UNITYSDK_OFFSET(0x154F8FD0)
#define EJPKILIHMFL_FFIAAFFMELC_OFFSET UNITYSDK_OFFSET(0x154F9820)
#define EJPKILIHMFL_GET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x154F9EE0)
#define EJPKILIHMFL_GET_INITED_OFFSET UNITYSDK_OFFSET(0x154F9EB0)
#define EJPKILIHMFL_GLHFHAHHLGD_OFFSET UNITYSDK_OFFSET(0x154F8F00)
#define EJPKILIHMFL_JKBCJGOKLEJ_OFFSET UNITYSDK_OFFSET(0x154F9D80)
#define EJPKILIHMFL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154F9870)
#define EJPKILIHMFL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x154F8850)
#define EJPKILIHMFL_LJMNDFEIGJC_OFFSET UNITYSDK_OFFSET(0x154F93F0)
#define EJPKILIHMFL_OMJDJNEKLBO_OFFSET UNITYSDK_OFFSET(0x154F96E0)
#define EJPKILIHMFL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x154F90E0)
#define EJPKILIHMFL_SET_CURRENTSETTINGCULLINGMODE_OFFSET UNITYSDK_OFFSET(0x154F9EF0)
#define EJPKILIHMFL_SET_INITED_OFFSET UNITYSDK_OFFSET(0x154F9EC0)

inline static constexpr unsigned int EJPKILIHMFL_TypeDefinitionIndex = 57251;

	class EJPKILIHMFL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPG::Client::CharacterMonoAvatar* AODIIHBCFIA; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* CGAHJODFDEC; // 0x20
		::System::Collections::Generic::List_1<::System::Single>* NFIFAIKBAJO; // 0x28
		::PKLHDDGKKOC* KBLNOFHLAMD; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* FECDMJBGMOP; // 0x38
		::RPG::GameCore::PropComponent* IGLCEJGPMJN; // 0x40
		::System::Single GKMEAFNKIGB; // 0x48
		::System::Single EKLIECPPIPD; // 0x4C
		::UnityEngine::AnimatorCullingMode OPMPPFJLDJO; // 0x50
		::System::Boolean _Inited_k__BackingField; // 0x54
		::System::Boolean KPDIEBKFDID; // 0x55
		::System::Boolean CJOMCONKCFE; // 0x56
		::System::Boolean OIHMEIBDAKJ; // 0x57
		::UnityEngine::AnimatorCullingMode _CurrentSettingCullingMode_k__BackingField; // 0x58
		::System::Boolean LHMCEPHJMHD; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::GameObject* a1, ::RPG::GameCore::PropComponent* a2, ::RPG::GameCore::AdventureCharacterController* a3, ::PKLHDDGKKOC* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::AdventureCharacterController*, ::PKLHDDGKKOC*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EJPKILIHMFL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void AEBFLCGMDIB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPKILIHMFL_AEBFLCGMDIB_OFFSET))(this, a1);
		}

		::System::Void BDABONHJDHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPKILIHMFL_BDABONHJDHJ_OFFSET))(this, a1);
		}

		::System::Void GLHFHAHHLGD(::UnityEngine::AnimatorCullingMode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPKILIHMFL_GLHFHAHHLGD_OFFSET))(this, a1, a2);
		}

		::System::Void LJMNDFEIGJC(::UnityEngine::AnimatorCullingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + EJPKILIHMFL_LJMNDFEIGJC_OFFSET))(this, a1);
		}

		::System::Void DLLBGJKDMMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_DLLBGJKDMMP_OFFSET))(this);
		}

		::System::Void OMJDJNEKLBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_OMJDJNEKLBO_OFFSET))(this);
		}

		::System::Boolean FFIAAFFMELC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_FFIAAFFMELC_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJPKILIHMFL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FAPKBLGIMDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_FAPKBLGIMDF_OFFSET))(this);
		}

		::System::Boolean JKBCJGOKLEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_JKBCJGOKLEJ_OFFSET))(this);
		}

		::System::Boolean get_Inited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_GET_INITED_OFFSET))(this);
		}

		::System::Void set_Inited(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJPKILIHMFL_SET_INITED_OFFSET))(this, a1);
		}

		::UnityEngine::AnimatorCullingMode DAAAMHJOKHA()
		{
			return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_DAAAMHJOKHA_OFFSET))(this);
		}

		::UnityEngine::AnimatorCullingMode get_CurrentSettingCullingMode()
		{
			return ((::UnityEngine::AnimatorCullingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EJPKILIHMFL_GET_CURRENTSETTINGCULLINGMODE_OFFSET))(this);
		}

		::System::Void set_CurrentSettingCullingMode(::UnityEngine::AnimatorCullingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorCullingMode))((::PBYTE)hIl2Cpp + EJPKILIHMFL_SET_CURRENTSETTINGCULLINGMODE_OFFSET))(this, a1);
		}

	};
