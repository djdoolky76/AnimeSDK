#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameFullScreenTranslateEffect_FadeState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FDPALAEIHPB;
class NFPPGOFECMH;
class OAFCCICMILM;
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xD477C40)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_INITIALIZEVIEW_OFFSET UNITYSDK_OFFSET(0xD4771D0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD4776B0)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIMEREMOVED_OFFSET UNITYSDK_OFFSET(0xD477630)
#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIME_OFFSET UNITYSDK_OFFSET(0xD4775A0)

namespace RPG::Client::LittleGame
{
	class MovieGameFullScreenTranslateEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Width; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* MoveBoard; // 0x20
		::FDPALAEIHPB* FKINCGODJEP; // 0x28
		::OAFCCICMILM* PDENFEFCAGN; // 0x30
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect_FadeState JBGFIMKKNFP; // 0x38
		::System::Single OKFMABJGOPI; // 0x3C
		::UnityEngine::Vector3 ILGDMEDGFBF; // 0x40
		::UnityEngine::Vector3 FMHADELJKLI; // 0x4C
		::UnityEngine::Vector3 ALPBOLCJGPP; // 0x58
		::System::Byte _padding1[0x4];
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_CTOR_OFFSET))(this);
		}

		::System::Void InitializeView(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_INITIALIZEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void OnFeverTime(::NFPPGOFECMH* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::NFPPGOFECMH*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIME_OFFSET))(this, a1, a2);
		}

		::System::Void OnFeverTimeRemoved(::NFPPGOFECMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFPPGOFECMH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_ONFEVERTIMEREMOVED_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEFULLSCREENTRANSLATEEFFECT_LATEUPDATE_OFFSET))(this);
		}

	};
}
