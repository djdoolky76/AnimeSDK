#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IA_TransformAnimHoverDriveScope.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class IA_TransformAnim_HoverBehavior_KDJIBNAPKHK; }
namespace RPG::Client { class IA_TransformAnim_HoverMonoPlugin; }
namespace RPG::Client { class Scene_InstanceArrayExternalInputBridge; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xD32A830)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD32C930)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_DBHEEAHGKDP_OFFSET UNITYSDK_OFFSET(0xD32ABA0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_EGJGMHMINIM_OFFSET UNITYSDK_OFFSET(0xD32C350)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD32AC90)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_FDPHLOPDGEF_OFFSET UNITYSDK_OFFSET(0xD32B860)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_FMMEEBCMPGC_OFFSET UNITYSDK_OFFSET(0xD32C5F0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xD32A5C0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xD32A640)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GLNMMIEPAIO_OFFSET UNITYSDK_OFFSET(0xD32B110)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_HIALJDDHGBP_OFFSET UNITYSDK_OFFSET(0xD32C3C0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_IKDMEIBNGPF_OFFSET UNITYSDK_OFFSET(0xD32B7A0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_JNGDHGIEGDG_OFFSET UNITYSDK_OFFSET(0xD32C840)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD32A6A0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xD32A900)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_MMGCCLIFCKH_OFFSET UNITYSDK_OFFSET(0xD32ADE0)
#define RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_OBCIIAFGFMP_OFFSET UNITYSDK_OFFSET(0xD32A9D0)

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnim_HoverBehavior_TypeDefinitionIndex = 70841;

	class IA_TransformAnim_HoverBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _childEntries; // 0x38
		::System::Boolean _entriesBuilt; // 0x40
		::System::Boolean _hasAnySnapshot; // 0x41
		::System::Byte _padding0[0x2];
		::RPG::Client::IA_TransformAnimHoverDriveScope _resolvedDriveScope; // 0x44
		::RPG::Client::Scene_InstanceArrayExternalInputBridge* _cachedBridge; // 0x48
		::System::Boolean _bridgeLookupDone; // 0x50
		// static const ::System::Object k_PushEpsSqr; // 0x0
		// static const ::System::Object k_PushRotEpsDeg; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::RPG::Client::IA_TransformAnim_HoverMonoPlugin* get_Owner()
		{
			return ((::RPG::Client::IA_TransformAnim_HoverMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_OWNER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Target()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GET_TARGET_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void IKDMEIBNGPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_IKDMEIBNGPF_OFFSET))(this);
		}

		::System::Void MMGCCLIFCKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_MMGCCLIFCKH_OFFSET))(this);
		}

		::System::Void FDPHLOPDGEF(::UnityEngine::Transform* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_FDPHLOPDGEF_OFFSET))(this, a1, a2);
		}

		::System::Void OBCIIAFGFMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_OBCIIAFGFMP_OFFSET))(this);
		}

		static ::System::Boolean EGJGMHMINIM(::RPG::Client::IA_TransformAnim_HoverMonoPlugin* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::IA_TransformAnim_HoverMonoPlugin*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_EGJGMHMINIM_OFFSET))(a1);
		}

		::System::Void GLNMMIEPAIO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_GLNMMIEPAIO_OFFSET))(this, a1);
		}

		static ::System::Boolean FMMEEBCMPGC(::RPG::Client::IA_TransformAnim_HoverBehavior_KDJIBNAPKHK* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::IA_TransformAnim_HoverBehavior_KDJIBNAPKHK*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_FMMEEBCMPGC_OFFSET))(a1, a2);
		}

		::System::Void HIALJDDHGBP(::RPG::Client::IA_TransformAnim_HoverBehavior_KDJIBNAPKHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IA_TransformAnim_HoverBehavior_KDJIBNAPKHK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_HIALJDDHGBP_OFFSET))(this, a1);
		}

		::System::Void DBHEEAHGKDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_DBHEEAHGKDP_OFFSET))(this);
		}

		static ::RPG::Client::Scene_InstanceArrayExternalInputBridge* JNGDHGIEGDG(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::Scene_InstanceArrayExternalInputBridge*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_IA_TRANSFORMANIM_HOVERBEHAVIOR_JNGDHGIEGDG_OFFSET))(a1);
		}

	};
}
