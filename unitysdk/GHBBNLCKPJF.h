#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define GHBBNLCKPJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A08E30)
#define GHBBNLCKPJF_CTOR_OFFSET UNITYSDK_OFFSET(0x15A08520)
#define GHBBNLCKPJF_MHLLCNCOMOL_OFFSET UNITYSDK_OFFSET(0x15A08DD0)
#define GHBBNLCKPJF_MKFMCMKILOB_OFFSET UNITYSDK_OFFSET(0x15A08580)

inline static constexpr unsigned int GHBBNLCKPJF_TypeDefinitionIndex = 78485;

	class GHBBNLCKPJF : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraEntranceAnchorConfig* IGHAHBNLIJA; // 0x10
		::UnityEngine::GameObject* MIDIOOAFHDM; // 0x18
		::UnityEngine::GameObject* INCICLMMBFL; // 0x20
		::UnityEngine::Transform* KJMDDAHEODL; // 0x28
		::UnityEngine::Animator* APPGGMLEPLN; // 0x30
		::RPG::Client::Prop::ChimeraGameObjectBuilder* LIOJKFIGGIJ; // 0x38
		static ::System::Int32* StaticGet_FCBMOJDECKL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHBBNLCKPJF")->GetStaticField(0x14A10);
		}

		static ::System::Int32* StaticGet_EKKFGDBABLD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHBBNLCKPJF")->GetStaticField(0x14A14);
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
