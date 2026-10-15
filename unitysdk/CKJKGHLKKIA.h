#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CKJKGHLKKIA_CTOR_OFFSET UNITYSDK_OFFSET(0xD75FB10)
#define CKJKGHLKKIA_DOKCLHGDCMP_OFFSET UNITYSDK_OFFSET(0xD75F8B0)
#define CKJKGHLKKIA_FDFMEDHBOIA_OFFSET UNITYSDK_OFFSET(0xD75F6D0)
#define CKJKGHLKKIA_FHJAKFDIMJM_OFFSET UNITYSDK_OFFSET(0xD75F500)
#define CKJKGHLKKIA_IEDOJGCLPJM_OFFSET UNITYSDK_OFFSET(0xD75FA80)
#define CKJKGHLKKIA_JIAALNOLBKG_OFFSET UNITYSDK_OFFSET(0xD75F0F0)
#define CKJKGHLKKIA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xD75F2E0)
#define CKJKGHLKKIA_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xD75EF10)
#define CKJKGHLKKIA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xD75F040)

	class CKJKGHLKKIA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* OCMJKGEDMGD; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* NNKFEIJGFNE; // 0x18
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void FHJAKFDIMJM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_FHJAKFDIMJM_OFFSET))(this, a1);
		}

		::System::Void FDFMEDHBOIA(::System::UInt32 a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_FDFMEDHBOIA_OFFSET))(this, a1, a2);
		}

		::System::Void DOKCLHGDCMP(::System::UInt32 a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_DOKCLHGDCMP_OFFSET))(this, a1, a2);
		}

		::System::Void IEDOJGCLPJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_IEDOJGCLPJM_OFFSET))(this, a1);
		}

		::System::Void JIAALNOLBKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJKGHLKKIA_JIAALNOLBKG_OFFSET))(this);
		}

	};
