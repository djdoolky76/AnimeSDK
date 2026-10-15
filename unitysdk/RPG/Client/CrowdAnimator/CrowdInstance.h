#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"
class OEIPELDMAAE;
namespace RPG::Client::CrowdAnimator { class CrowdPrototype; }
namespace RPG::Client::CrowdAnimator { class CrowdVariant; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_BBHBPOKBFGO_OFFSET UNITYSDK_OFFSET(0xCBC29D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xCBC3770)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GETCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xCBC3340)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CURRENTPLAYINGCLIPINDEX_OFFSET UNITYSDK_OFFSET(0xCBC33F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CURRENTPLAYINGCLIPLENGTH_OFFSET UNITYSDK_OFFSET(0xCBC35D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xCBC1D10)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_INSTANCED_OFFSET UNITYSDK_OFFSET(0xCBC18D0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_VISIBLESTATE_OFFSET UNITYSDK_OFFSET(0xCBC17F0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GOJOANMAEHE_OFFSET UNITYSDK_OFFSET(0xCBC1F90)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_JAPNHNLEKOF_OFFSET UNITYSDK_OFFSET(0xCBC1F10)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_JBMDMBAFCEB_OFFSET UNITYSDK_OFFSET(0xCBC2A70)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_MBNPFPCOHHD_OFFSET UNITYSDK_OFFSET(0xCBC2A20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xCBC1F50)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCBC2980)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xCBC2AC0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_REGISTER_OFFSET UNITYSDK_OFFSET(0xCBC1FE0)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_SET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0xCBC1D20)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_SET_VISIBLESTATE_OFFSET UNITYSDK_OFFSET(0xCBC1800)
#define RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_UNREGISTER_OFFSET UNITYSDK_OFFSET(0xCBC2400)

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdInstance_TypeDefinitionIndex = 73717;

	class CrowdInstance : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::CrowdAnimator::CrowdVariant* Variant; // 0x18
		::RPG::Client::CrowdAnimator::CrowdPrototype* Prototype; // 0x20
		::System::Int32 DefaultClipIndex; // 0x28
		::System::Byte _padding0[0x4];
		::OEIPELDMAAE* MFGAHMAGBGH; // 0x30
		::System::Int32 JGGDKOCIEGH; // 0x38
		::System::Boolean OFEPHLEKKCD; // 0x3C
		::System::Boolean OJPFPJGMIFM; // 0x3D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector4 HIJOAMLICNE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_VisibleState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_VISIBLESTATE_OFFSET))(this);
		}

		::System::Void set_VisibleState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_SET_VISIBLESTATE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_CustomData()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::Void set_CustomData(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_SET_CUSTOMDATA_OFFSET))(this, a1);
		}

		::System::Boolean get_Instanced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_INSTANCED_OFFSET))(this);
		}

		::OEIPELDMAAE* JAPNHNLEKOF()
		{
			return ((::OEIPELDMAAE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_JAPNHNLEKOF_OFFSET))(this);
		}

		::System::Int32 OEIIDHFBKHG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_OEIIDHFBKHG_OFFSET))(this);
		}

		::UnityEngine::Transform* GOJOANMAEHE()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GOJOANMAEHE_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_REGISTER_OFFSET))(this);
		}

		::System::Void Unregister()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_UNREGISTER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_ONDESTROY_OFFSET))(this);
		}

		::System::Void BBHBPOKBFGO(::OEIPELDMAAE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEIPELDMAAE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_BBHBPOKBFGO_OFFSET))(this, a1);
		}

		::System::Void MBNPFPCOHHD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_MBNPFPCOHHD_OFFSET))(this, a1);
		}

		::System::Void JBMDMBAFCEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_JBMDMBAFCEB_OFFSET))(this);
		}

		::System::Void PlayAnimation(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_PLAYANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetClipLength(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GETCLIPLENGTH_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentPlayingClipIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CURRENTPLAYINGCLIPINDEX_OFFSET))(this);
		}

		::System::Single get_CurrentPlayingClipLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CROWDANIMATOR_CROWDINSTANCE_GET_CURRENTPLAYINGCLIPLENGTH_OFFSET))(this);
		}

	};
}
