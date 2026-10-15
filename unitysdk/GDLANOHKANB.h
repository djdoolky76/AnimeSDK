#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDLANOHKANB_MENFMLGGFGK;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define GDLANOHKANB_CTOR_OFFSET UNITYSDK_OFFSET(0x159997A0)
#define GDLANOHKANB_GAPPEFMDBAO_OFFSET UNITYSDK_OFFSET(0x159991C0)
#define GDLANOHKANB_KJCBFMEPOOA_OFFSET UNITYSDK_OFFSET(0x15999590)
#define GDLANOHKANB_OGJDJNFMMPA_OFFSET UNITYSDK_OFFSET(0x15999250)
#define GDLANOHKANB_OJNEOHIDMEE_OFFSET UNITYSDK_OFFSET(0x15999050)
#define GDLANOHKANB_OKOIMEGPMFM_OFFSET UNITYSDK_OFFSET(0x15999440)
#define GDLANOHKANB_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x15998E00)
#define GDLANOHKANB_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x15998FF0)

inline static constexpr unsigned int GDLANOHKANB_TypeDefinitionIndex = 47922;

	class GDLANOHKANB : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Object*>* PADLHNOJLNG; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLANOHKANB_CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GDLANOHKANB_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GDLANOHKANB_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void GAPPEFMDBAO(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDLANOHKANB_GAPPEFMDBAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OJNEOHIDMEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLANOHKANB_OJNEOHIDMEE_OFFSET))(this);
		}

		::System::Void OGJDJNFMMPA(::System::String* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GDLANOHKANB_OGJDJNFMMPA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KJCBFMEPOOA(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + GDLANOHKANB_KJCBFMEPOOA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OKOIMEGPMFM(::GDLANOHKANB_MENFMLGGFGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLANOHKANB_MENFMLGGFGK*))((::PBYTE)hIl2Cpp + GDLANOHKANB_OKOIMEGPMFM_OFFSET))(this, a1);
		}

	};
