#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CKJKGHLKKIA_CTOR_OFFSET UNITYSDK_OFFSET(0xE099D60)
#define CKJKGHLKKIA_DOKCLHGDCMP_OFFSET UNITYSDK_OFFSET(0xE099B00)
#define CKJKGHLKKIA_FDFMEDHBOIA_OFFSET UNITYSDK_OFFSET(0xE099920)
#define CKJKGHLKKIA_FHJAKFDIMJM_OFFSET UNITYSDK_OFFSET(0xE099750)
#define CKJKGHLKKIA_IEDOJGCLPJM_OFFSET UNITYSDK_OFFSET(0xE099CD0)
#define CKJKGHLKKIA_JIAALNOLBKG_OFFSET UNITYSDK_OFFSET(0xE099340)
#define CKJKGHLKKIA_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0xE099530)
#define CKJKGHLKKIA_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xE099160)
#define CKJKGHLKKIA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xE099290)

inline static constexpr unsigned int CKJKGHLKKIA_TypeDefinitionIndex = 49892;

	class CKJKGHLKKIA : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* OPNHINPCKOJ; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* OCMJKGEDMGD; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* NNKFEIJGFNE; // 0x20
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
