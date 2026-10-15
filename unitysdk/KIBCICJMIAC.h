#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace RPG::GameCore { class AnimationZone; }
namespace RPG::GameCore { class AnimatorStateZoneDescConfig; }
namespace RPG::GameCore { class AnimatorZoneConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define KIBCICJMIAC_ACFJJGEHCNK_OFFSET UNITYSDK_OFFSET(0xB417E10)
#define KIBCICJMIAC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB4186F0)
#define KIBCICJMIAC_CTOR_OFFSET UNITYSDK_OFFSET(0xB4163D0)
#define KIBCICJMIAC_DBHHKOICCAJ_OFFSET UNITYSDK_OFFSET(0xB417FD0)
#define KIBCICJMIAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB416B40)
#define KIBCICJMIAC_GET_ANIM_ZONE_COUNT_OFFSET UNITYSDK_OFFSET(0xB4163A0)
#define KIBCICJMIAC_INCCIJPEAKB_OFFSET UNITYSDK_OFFSET(0xB418670)
#define KIBCICJMIAC_JFEMLDKBLBJ_OFFSET UNITYSDK_OFFSET(0xB416BE0)
#define KIBCICJMIAC_LEEFMLEPGLB_OFFSET UNITYSDK_OFFSET(0xB416570)
#define KIBCICJMIAC_MPNJBFIAGHN_1_OFFSET UNITYSDK_OFFSET(0xB4175B0)
#define KIBCICJMIAC_MPNJBFIAGHN_OFFSET UNITYSDK_OFFSET(0xB416CC0)
#define KIBCICJMIAC_PMLFICBIINN_OFFSET UNITYSDK_OFFSET(0xB418020)

	class KIBCICJMIAC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* DODOMIEMOOH; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* NBADGOKJLCJ; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>* CIJMDLJEMGE; // 0x20
		::Il2CppArray<::System::String*>* MJNLPCFEOMB; // 0x28
		::System::Int32 JNODFHKKIDF; // 0x30
		static ::System::Int32* StaticGet__ANIM_ZONE_COUNT_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "KIBCICJMIAC")->GetStaticField(0x12C00);
		}

		// static const ::System::Object KNHHMHHFOIH; // 0x0
		// static const ::System::Object PEIAKJNIFKJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIBCICJMIAC_CCTOR_OFFSET))();
		}

		static ::System::Int32 get_ANIM_ZONE_COUNT()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + KIBCICJMIAC_GET_ANIM_ZONE_COUNT_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBCICJMIAC_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JFEMLDKBLBJ(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + KIBCICJMIAC_JFEMLDKBLBJ_OFFSET))(this, a1, a2);
		}

		::System::Void MPNJBFIAGHN(::UnityEngine::Animator* a1, ::Il2CppArray<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_MPNJBFIAGHN_OFFSET))(this, a1, a2);
		}

		::System::Void MPNJBFIAGHN_1(::UnityEngine::AnimatorStateInfo a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Boolean a3, ::Il2CppArray<::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Boolean, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_MPNJBFIAGHN_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ACFJJGEHCNK(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_ACFJJGEHCNK_OFFSET))(this, a1);
		}

		::System::Void LEEFMLEPGLB(::RPG::GameCore::AnimatorZoneConfig* a1, ::RPG::GameCore::AnimatorZoneConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_LEEFMLEPGLB_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>* PMLFICBIINN(::RPG::GameCore::AnimatorZoneConfig* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::RPG::GameCore::AnimatorStateZoneDescConfig*>*>*(*)(::PVOID, ::RPG::GameCore::AnimatorZoneConfig*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_PMLFICBIINN_OFFSET))(this, a1);
		}

		::System::Boolean INCCIJPEAKB(::System::Single a1, ::RPG::GameCore::AnimationZone* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + KIBCICJMIAC_INCCIJPEAKB_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean DBHHKOICCAJ(::RPG::GameCore::AnimZoneType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AnimZoneType))((::PBYTE)hIl2Cpp + KIBCICJMIAC_DBHHKOICCAJ_OFFSET))(a1);
		}

	};
