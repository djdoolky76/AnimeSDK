#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/V470CurveAliasSpeed.h"
#include "unitysdk/RPG/Client/Prop/V470CurveMovePuzzlePhase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class DBMDNNBIOAI;
class GHFJNJBJMBH;
class KGNMHBFIJEI;
class NOHKOODINEJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_BNNHJKOMLBK_OFFSET UNITYSDK_OFFSET(0x18704810)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x18704C20)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18702E40)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_ENDCURVEMOVE_OFFSET UNITYSDK_OFFSET(0x18703110)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_FENHAPDODBG_OFFSET UNITYSDK_OFFSET(0x18703FD0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GETCURVEMOVEPERCENT_OFFSET UNITYSDK_OFFSET(0x187049D0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_ISCURVEMOVEFINISHED_OFFSET UNITYSDK_OFFSET(0x187049C0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_ISENTERFINISHED_OFFSET UNITYSDK_OFFSET(0x187049B0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x187049A0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HDCFBLIKIFM_OFFSET UNITYSDK_OFFSET(0x18704A60)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HHBAJPKDJHK_OFFSET UNITYSDK_OFFSET(0x187040E0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HJPMJLCENFP_OFFSET UNITYSDK_OFFSET(0x18704470)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HOKJNIMIENP_OFFSET UNITYSDK_OFFSET(0x18704040)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HPKEPICLPBO_OFFSET UNITYSDK_OFFSET(0x18704B90)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_IKACAKGLBBM_OFFSET UNITYSDK_OFFSET(0x18704860)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0x18702CA0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0x18704BE0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_KHDIPEIIFMD_OFFSET UNITYSDK_OFFSET(0x18703410)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_KNEAKOPBLBP_OFFSET UNITYSDK_OFFSET(0x18704730)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_MHGCDHPBPOD_OFFSET UNITYSDK_OFFSET(0x18703EC0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_MNEBLGGMLAG_OFFSET UNITYSDK_OFFSET(0x18702DA0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_STARTENTERMOVE_OFFSET UNITYSDK_OFFSET(0x187035C0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_STARTLEVELCURVEMOVE_OFFSET UNITYSDK_OFFSET(0x187042D0)
#define RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0x18703330)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int V470CurveMovePuzzle_TypeDefinitionIndex = 81684;

	class V470CurveMovePuzzle : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::UInt32 CurveID; // 0x48
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* CurveControlPoints; // 0x50
		::System::Single MoveDelay; // 0x58
		::System::Single MoveDuration; // 0x5C
		::System::Single HidePlayerDelay; // 0x60
		::System::Single DefaultCurveSpeed; // 0x64
		::Il2CppArray<::RPG::Client::Prop::V470CurveAliasSpeed>* AliasSpeeds; // 0x68
		::System::String* SwitchInEffectPath; // 0x70
		::System::String* FollowEffectPath; // 0x78
		::KGNMHBFIJEI* FCNGFGHNFKJ; // 0x80
		::GHFJNJBJMBH* OECKBKJLPEB; // 0x88
		::NOHKOODINEJ* NMHINBKPOFN; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BNLNNKBFJAL; // 0x98
		::DBMDNNBIOAI* HCHNGAMNMOB; // 0xA0
		::DBMDNNBIOAI* CIOPAEPCPED; // 0xA8
		::RPG::GameCore::LevelCurveInstance* KLDHNODMBCM; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* PMHEJNIHIFG; // 0xB8
		::RPG::Client::Prop::V470CurveMovePuzzlePhase NOHNKAIALPJ; // 0xC0
		::System::Single NLMEKONDDNJ; // 0xC4
		::System::Single DLLKLHBJOJE; // 0xC8
		// static const ::System::String* AHANHNDHGGG; // 0x0
		// static const ::System::String* LOAGLGKPKNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_DISPOSE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean StartEnterMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_STARTENTERMOVE_OFFSET))(this);
		}

		::System::Boolean StartLevelCurveMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_STARTLEVELCURVEMOVE_OFFSET))(this);
		}

		::System::Void EndCurveMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_ENDCURVEMOVE_OFFSET))(this);
		}

		::RPG::Client::Prop::V470CurveMovePuzzlePhase get_Phase()
		{
			return ((::RPG::Client::Prop::V470CurveMovePuzzlePhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_PHASE_OFFSET))(this);
		}

		::System::Boolean get_IsEnterFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_ISENTERFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsCurveMoveFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GET_ISCURVEMOVEFINISHED_OFFSET))(this);
		}

		::System::Single GetCurveMovePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_GETCURVEMOVEPERCENT_OFFSET))(this);
		}

		::System::Void HDCFBLIKIFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HDCFBLIKIFM_OFFSET))(this);
		}

		::System::Void HPKEPICLPBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HPKEPICLPBO_OFFSET))(this);
		}

		::System::Void HOKJNIMIENP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HOKJNIMIENP_OFFSET))(this, a1);
		}

		::System::Void IKACAKGLBBM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_IKACAKGLBBM_OFFSET))(this, a1, a2);
		}

		::System::Void FENHAPDODBG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_FENHAPDODBG_OFFSET))(this, a1);
		}

		::System::Void MHGCDHPBPOD(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_MHGCDHPBPOD_OFFSET))(this, a1);
		}

		::System::Void HHBAJPKDJHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HHBAJPKDJHK_OFFSET))(this, a1);
		}

		::System::Boolean MNEBLGGMLAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_MNEBLGGMLAG_OFFSET))(this);
		}

		::System::Void HJPMJLCENFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_HJPMJLCENFP_OFFSET))(this);
		}

		::System::Void KHDIPEIIFMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_KHDIPEIIFMD_OFFSET))(this, a1);
		}

		::System::Void KNEAKOPBLBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_KNEAKOPBLBP_OFFSET))(this);
		}

		::System::Void BNNHJKOMLBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_BNNHJKOMLBK_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_V470CURVEMOVEPUZZLE_ISPUZZLEFINISH_OFFSET))(this);
		}

	};
}
