#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NCAIMKJIOIJ;
class PPJEOLNBABF;
namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace RPG::Client::Prop { class HintConfigInfo; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_CKEIAFBFGPM_OFFSET UNITYSDK_OFFSET(0xDC94110)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC942B0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DALKFEOAHFJ_OFFSET UNITYSDK_OFFSET(0xDC93EC0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DRAWHINTCONNECTION_OFFSET UNITYSDK_OFFSET(0xDC8F2A0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONINIT_OFFSET UNITYSDK_OFFSET(0xDC8D230)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONPUZZLEDESTROY_OFFSET UNITYSDK_OFFSET(0xDC913D0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ROTATESUBOBJECT_OFFSET UNITYSDK_OFFSET(0xDC92280)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_TRIGGERHINTLINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0xDC92A40)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC93E60)

namespace RPG::Client::Prop
{
	class DeployPuzzleHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* FBBAFAEDBFL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Transform*>* BGIGOGIHBON; // 0x20
		::RPG::Client::Prop::DeployPuzzleBoard* MIPPNCGOJNM; // 0x28
		::RPG::Client::Prop::HintConfigInfo* PHLBPINNAKH; // 0x30
		::UnityEngine::Transform* BAPGEGKBLIE; // 0x38
		::UnityEngine::Transform* PODLIODJFLJ; // 0x40
		::UnityEngine::Quaternion POLIJKHBFJM; // 0x48
		::System::Collections::Generic::List_1<::PPJEOLNBABF*>* GNBNCNDMEGP; // 0x58
		::System::Collections::Generic::Queue_1<::NCAIMKJIOIJ*>* EEOAJODBOHM; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_CTOR_OFFSET))(this);
		}

		::System::Void OnInit(::RPG::Client::Prop::DeployPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DeployPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONINIT_OFFSET))(this, a1);
		}

		::System::Void DrawHintConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DRAWHINTCONNECTION_OFFSET))(this);
		}

		::System::Void OnPuzzleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONPUZZLEDESTROY_OFFSET))(this);
		}

		::System::Void RotateSubObject(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ROTATESUBOBJECT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_UPDATE_OFFSET))(this);
		}

		::System::Void CKEIAFBFGPM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_CKEIAFBFGPM_OFFSET))(this, a1);
		}

		::System::Void DALKFEOAHFJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DALKFEOAHFJ_OFFSET))(this, a1);
		}

		::System::Void TriggerHintLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_TRIGGERHINTLINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}

	};
}
