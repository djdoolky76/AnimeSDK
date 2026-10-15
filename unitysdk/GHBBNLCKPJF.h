#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GHBBNLCKPJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A14740)
#define GHBBNLCKPJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A13E20)
#define GHBBNLCKPJF_MHLLCNCOMOL_OFFSET UNITYSDK_OFFSET(0x15A146D0)
#define GHBBNLCKPJF_MKFMCMKILOB_OFFSET UNITYSDK_OFFSET(0x15A13E80)

inline static constexpr unsigned int GHBBNLCKPJF_TypeDefinitionIndex = 78486;

	class GHBBNLCKPJF : public ::System::Object
	{
	public:
		::UnityEngine::Animator* APPGGMLEPLN; // 0x10
		::RPG::Client::Prop::ChimeraEntranceAnchorConfig* IGHAHBNLIJA; // 0x18
		::UnityEngine::GameObject* INCICLMMBFL; // 0x20
		::RPG::Client::Prop::ChimeraGameObjectBuilder* LIOJKFIGGIJ; // 0x28
		::UnityEngine::Transform* KJMDDAHEODL; // 0x30
		::UnityEngine::GameObject* MIDIOOAFHDM; // 0x38
		static ::System::Int32* StaticGet_EKKFGDBABLD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHBBNLCKPJF")->GetStaticField(0x13EB0);
		}

		static ::System::Int32* StaticGet_FCBMOJDECKL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHBBNLCKPJF")->GetStaticField(0x13EB4);
		}

		// static const ::System::String* OGPHPKMGMKG; // 0x0
		::System::Void _ctor(::RPG::Client::Prop::ChimeraEntranceAnchorConfig* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraEntranceAnchorConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + GHBBNLCKPJF_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBBNLCKPJF_CCTOR_OFFSET))();
		}

		::System::Void MKFMCMKILOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBBNLCKPJF_MKFMCMKILOB_OFFSET))(this);
		}

		::System::Void MHLLCNCOMOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBBNLCKPJF_MHLLCNCOMOL_OFFSET))(this);
		}

	};
