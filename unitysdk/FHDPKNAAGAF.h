#pragma once
#include "unitysdk/unitysdk.h"
class IOGNBKGNPFD;
namespace Entitas { class IEntity; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class LittleGameAbilityTaskFireMonoEffectConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FHDPKNAAGAF_CTOR_OFFSET UNITYSDK_OFFSET(0x15776620)
#define FHDPKNAAGAF_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0x15777710)
#define FHDPKNAAGAF_IJEPAJIMDPA_1_OFFSET UNITYSDK_OFFSET(0x15777290)
#define FHDPKNAAGAF_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0x157766A0)
#define FHDPKNAAGAF_JEKDPJHEMKG_OFFSET UNITYSDK_OFFSET(0x15776980)
#define FHDPKNAAGAF_MELHIAFPIJF_OFFSET UNITYSDK_OFFSET(0x157777A0)
#define FHDPKNAAGAF_MNONPFEGMPH_OFFSET UNITYSDK_OFFSET(0x15777C20)
#define FHDPKNAAGAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15776650)

	class FHDPKNAAGAF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityTaskFireMonoEffectConfig*))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void IJEPAJIMDPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_IJEPAJIMDPA_OFFSET))(this);
		}

		::System::Boolean JEKDPJHEMKG(::Entitas::IEntity* a1, ::System::String* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Entitas::IEntity*, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_JEKDPJHEMKG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJEPAJIMDPA_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_IJEPAJIMDPA_1_OFFSET))(this, a1);
		}

		static ::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_ENJMMHDCAPH_OFFSET))(a1);
		}

		static ::System::Void MELHIAFPIJF(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_MELHIAFPIJF_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* MNONPFEGMPH(::IOGNBKGNPFD* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::IOGNBKGNPFD*))((::PBYTE)hIl2Cpp + FHDPKNAAGAF_MNONPFEGMPH_OFFSET))(this, a1);
		}

	};
