#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/DestroyRootPuzzleChessType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KFCMGNCLHMD;
namespace RPG::Client::Prop { class DestroyRootPuzzleBoard; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_AHKNNDBJPOE_OFFSET UNITYSDK_OFFSET(0xDC8F740)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ALGBFIAIMDJ_OFFSET UNITYSDK_OFFSET(0xDC8F400)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_BEPAHGMGJEJ_OFFSET UNITYSDK_OFFSET(0xDC90180)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC90240)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_CTOR_OFFSET UNITYSDK_OFFSET(0xDC90230)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDC8F840)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC8E140)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_EAFBBOAAMPL_OFFSET UNITYSDK_OFFSET(0xDC8E380)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_EALBBCMIDFC_OFFSET UNITYSDK_OFFSET(0xDC8F5F0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET UNITYSDK_OFFSET(0xDC8F8D0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_GLBNGOCGOGG_OFFSET UNITYSDK_OFFSET(0xDC8FED0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_IIDGGNIKLNG_OFFSET UNITYSDK_OFFSET(0xDC8E770)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_IIDLMBHEDMI_OFFSET UNITYSDK_OFFSET(0xDC90000)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET UNITYSDK_OFFSET(0xDC8B650)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_JKMIFOEOIMO_OFFSET UNITYSDK_OFFSET(0xDC8F970)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_JNNPLDGFPFM_OFFSET UNITYSDK_OFFSET(0xDC8FE20)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_KLIOPAMDIMF_OFFSET UNITYSDK_OFFSET(0xDC8FF50)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_OHNPFFFFDLP_OFFSET UNITYSDK_OFFSET(0xDC900C0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET UNITYSDK_OFFSET(0xDC8EDB0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET UNITYSDK_OFFSET(0xDC8EE10)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET UNITYSDK_OFFSET(0xDC8F6B0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET UNITYSDK_OFFSET(0xDC8F800)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_OOADABOCJOF_OFFSET UNITYSDK_OFFSET(0xDC8FD90)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET UNITYSDK_OFFSET(0xDC8EAA0)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET UNITYSDK_OFFSET(0xDC8D980)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET UNITYSDK_OFFSET(0xDC8EE60)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET UNITYSDK_OFFSET(0xDC8D040)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET UNITYSDK_OFFSET(0xDC8F490)
#define RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET UNITYSDK_OFFSET(0xDC8F540)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DestroyRootPuzzleChess_TypeDefinitionIndex = 78545;

	class DestroyRootPuzzleChess : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Prop::DestroyRootPuzzleChessType ChessType; // 0x18
		::UnityEngine::Vector2Int Position; // 0x1C
		::RPG::Client::Prop::ChessDirection Direction; // 0x24
		::UnityEngine::GameObject* Center; // 0x28
		::UnityEngine::GameObject* AnimObject; // 0x30
		::UnityEngine::GameObject* AnimObject2; // 0x38
		::System::String* AnimEventPath; // 0x40
		::System::String* AnimEventPath2; // 0x48
		::UnityEngine::Transform* CenterTransform; // 0x50
		::System::Int32 ChessID; // 0x58
		::System::Int32 GFBMBPMHBID; // 0x5C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GKKIAEMIDDP; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* CMMOCANLFDC; // 0x68
		::System::Single PEBDLEECBEE; // 0x70
		::UnityEngine::Vector3 DEOPLHLBDHO; // 0x74
		::System::Int32 FLHOEGBFPJB; // 0x80
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* BFOMGPHKBMA; // 0x88
		::System::Single EJGDNPHNEHG; // 0x90
		::System::Single LBDIOHKGBCM; // 0x94
		::System::Boolean MEKAIIEIDHC; // 0x98
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 LLGMDMOOJJN; // 0x9C
		::UnityEngine::Quaternion PCJHIDGGJGL; // 0xA8
		::UnityEngine::Quaternion GFGCJMPMAFO; // 0xB8
		::UnityEngine::Quaternion KNEHKCIAOMC; // 0xC8
		::System::Single BCGHNNBGMCM; // 0xD8
		::System::Single AEADLPOLBMO; // 0xDC
		::RPG::Client::Prop::ChessDirection JEPNAFFPNOH; // 0xE0
		::UnityEngine::Vector2Int ODNBPHHFFJN; // 0xE4
		::System::Boolean PPJFOGPPGPH; // 0xEC
		::System::Byte _padding2[0x3];
		::UnityEngine::Animator* APPGGMLEPLN; // 0xF0
		::UnityEngine::Animator* HMFGKOPOKPE; // 0xF8
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x100
		::RPG::Client::Prop::DestroyRootPuzzleBoard* COAMCKILKPH; // 0x108
		::KFCMGNCLHMD* BCALOKFAJFH; // 0x110
		::KFCMGNCLHMD* BIFKFAKLJAA; // 0x118
		::UnityEngine::Coroutine* NBHDAIOKOMP; // 0x120
		::UnityEngine::Coroutine* IPDJIJLNDMM; // 0x128
		static ::System::Int32* StaticGet_InteractivePos()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE8F0);
		}

		static ::System::Int32* StaticGet_OHPEADIPOCP()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE8F4);
		}

		static ::System::Int32* StaticGet_OHAOCMMMJKJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE8F8);
		}

		static ::System::Int32* StaticGet_GJKILAGNCNM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE8FC);
		}

		static ::System::Int32* StaticGet_JBANDPFHHCO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE900);
		}

		static ::System::Int32* StaticGet_DBEOKDCFLME()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "DestroyRootPuzzleChess")->GetStaticField(0xE904);
		}

		// static const ::System::Object DGLGPLADDFB; // 0x0
		// static const ::System::String* NDCCCKDCEOK; // 0x0
		// static const ::System::String* AHMBBPHFEML; // 0x0
		// static const ::System::String* GEFOCIFADBD; // 0x0
		// static const ::System::String* FELEBNOJPCL; // 0x0
		// static const ::System::String* OGAHKJKEHHL; // 0x0
		// static const ::System::String* FGPOLMPLLPK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISPOSE_OFFSET))(this);
		}

		::System::Void InitChess(::RPG::Client::Prop::DestroyRootPuzzleBoard* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3, ::UnityEngine::AnimationCurve* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DestroyRootPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_INITCHESS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ResetChess(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_RESETCHESS_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_TICK_OFFSET))(this, a1);
		}

		::System::Void StartMove(::Il2CppArray<::UnityEngine::GameObject*>* a1, ::UnityEngine::GameObject* a2, ::System::Boolean a3, ::UnityEngine::Vector2Int a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*, ::UnityEngine::GameObject*, ::System::Boolean, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_STARTMOVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SetRefactorHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__SETREFACTORHIT_OFFSET))(this);
		}

		::System::Void _TriggerRootBroken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS__TRIGGERROOTBROKEN_OFFSET))(this);
		}

		::System::Void OnChessViewRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWREFRESH_OFFSET))(this);
		}

		::System::Void OnChessViewReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONCHESSVIEWRESET_OFFSET))(this);
		}

		::System::Void OnLaserHit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONLASERHIT_OFFSET))(this, a1);
		}

		::System::Void OnStartShootPerform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ONSTARTSHOOTPERFORM_OFFSET))(this);
		}

		::System::Void DisableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_DISABLETRIGGER_OFFSET))(this);
		}

		::System::Void EnableTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ENABLETRIGGER_OFFSET))(this);
		}

		::System::Void SetRefactorLaunch(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_SETREFACTORLAUNCH_OFFSET))(this, a1);
		}

		::System::Void IIDGGNIKLNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_IIDGGNIKLNG_OFFSET))(this);
		}

		::System::Void AHKNNDBJPOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_AHKNNDBJPOE_OFFSET))(this);
		}

		::System::Void EALBBCMIDFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_EALBBCMIDFC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* ALGBFIAIMDJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_ALGBFIAIMDJ_OFFSET))(this, a1);
		}

		::System::Void JKMIFOEOIMO(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_JKMIFOEOIMO_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OOADABOCJOF()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_OOADABOCJOF_OFFSET))(this);
		}

		::System::Void EAFBBOAAMPL(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_EAFBBOAAMPL_OFFSET))(this, a1, a2);
		}

		::System::Void GLBNGOCGOGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_GLBNGOCGOGG_OFFSET))(this);
		}

		::System::Void JNNPLDGFPFM(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::Action*>* a2, ::System::String* a3, ::System::Action* a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::Action*>*, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_JNNPLDGFPFM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KLIOPAMDIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_KLIOPAMDIMF_OFFSET))(this);
		}

		::System::Void IIDLMBHEDMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_IIDLMBHEDMI_OFFSET))(this);
		}

		::System::Void OHNPFFFFDLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_OHNPFFFFDLP_OFFSET))(this);
		}

		::System::Void BEPAHGMGJEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DESTROYROOTPUZZLECHESS_BEPAHGMGJEJ_OFFSET))(this);
		}

	};
}
