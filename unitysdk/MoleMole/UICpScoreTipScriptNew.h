#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UICpScoreTipScriptNew_FLMELHIGJLN.h"
#include "unitysdk/MoleMole/UICpScoreTipScriptNew_NAPLKAGDFFH.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1FF96B80)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_INITDATA_OFFSET UNITYSDK_OFFSET(0x1FF980B0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_JJPMOINJALK_OFFSET UNITYSDK_OFFSET(0x1FF96BD0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x1FF97C50)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETEXCLAMATIONMARK_OFFSET UNITYSDK_OFFSET(0x1FF98500)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETGLODMARK_OFFSET UNITYSDK_OFFSET(0x1FF98410)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETLOADER_OFFSET UNITYSDK_OFFSET(0x1FF98060)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETNUM_OFFSET UNITYSDK_OFFSET(0x1FF98760)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETPROPSPRITE_OFFSET UNITYSDK_OFFSET(0x1FF98220)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETRIGHTROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x1FF98700)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETSYMBOL_OFFSET UNITYSDK_OFFSET(0x1FF985E0)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FF98870)
#define MOLEMOLE_UICPSCORETIPSCRIPTNEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF98970)

namespace MoleMole
{
	inline static constexpr unsigned int UICpScoreTipScriptNew_TypeDefinitionIndex = 96410;

	class UICpScoreTipScriptNew : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single flowDuration; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* images; // 0x20
		::System::Boolean hideHeadZero; // 0x28
		::System::Byte _padding1[0x7];
		::System::Action* HBJCCJCILAF; // 0x30
		::System::Action* HOEDHKLENHP; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* CNMPDAGEGOD; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Nums; // 0x48
		::System::Int32 num; // 0x50
		::MoleMole::UICpScoreTipScriptNew_NAPLKAGDFFH numType; // 0x54
		::Il2CppArray<::System::Int32>* MCAEPBJDNAC; // 0x58
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* loadFunc; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* BHMLIFIKCEL; // 0x68
		::System::Boolean JBJFINAFFKO; // 0x70
		::System::Byte _padding2[0x7];
		::Il2CppArray<::UnityEngine::UI::Image*>* symbols; // 0x78
		::UnityEngine::UI::Image* exclamationMark; // 0x80
		::UnityEngine::Canvas* exclamationCanvas; // 0x88
		::UnityEngine::UI::Image* goldMark; // 0x90
		::UnityEngine::GameObject* goldMarkRoot; // 0x98
		::UnityEngine::UI::Image* propSprite; // 0xA0
		::System::Boolean GIAEPMKCBIB; // 0xA8
		::System::Byte _padding3[0x3];
		::System::Single EKGMLLJEJHM; // 0xAC
		::System::Int32 BMNOOECPNEJ; // 0xB0
		::System::Int32 BMIHIHKLHOI; // 0xB4
		::System::Int32 GELJOLCCNID; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_AWAKE_OFFSET))(this);
		}

		::System::Void Refresh(::System::Int32 GELJOLCCNID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_REFRESH_OFFSET))(this, GELJOLCCNID);
		}

		::MoleMole::UICpScoreTipScriptNew* SetLoader(::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* LDPKKONLKKK)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETLOADER_OFFSET))(this, LDPKKONLKKK);
		}

		::MoleMole::UICpScoreTipScriptNew* InitData(::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* LDPKKONLKKK)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_INITDATA_OFFSET))(this, LDPKKONLKKK);
		}

		::MoleMole::UICpScoreTipScriptNew* SetRightRootActive(::System::Boolean EGEGIMGMJHN)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETRIGHTROOTACTIVE_OFFSET))(this, EGEGIMGMJHN);
		}

		::MoleMole::UICpScoreTipScriptNew* SetPropSprite(::System::String* AOOLNBKIHAG)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETPROPSPRITE_OFFSET))(this, AOOLNBKIHAG);
		}

		::MoleMole::UICpScoreTipScriptNew* SetGlodMark(::System::Boolean AMGAAHMANDM)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETGLODMARK_OFFSET))(this, AMGAAHMANDM);
		}

		::MoleMole::UICpScoreTipScriptNew* SetExclamationMark(::System::Boolean AMGAAHMANDM)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETEXCLAMATIONMARK_OFFSET))(this, AMGAAHMANDM);
		}

		::MoleMole::UICpScoreTipScriptNew* SetSymbol(::MoleMole::UICpScoreTipScriptNew_FLMELHIGJLN PDDKHHMPGPA)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::MoleMole::UICpScoreTipScriptNew_FLMELHIGJLN))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETSYMBOL_OFFSET))(this, PDDKHHMPGPA);
		}

		::MoleMole::UICpScoreTipScriptNew* SetNum(::MoleMole::UICpScoreTipScriptNew_NAPLKAGDFFH CPLIIBLMDAO, ::System::Int32 BIOGEIHKABE)
		{
			return ((::MoleMole::UICpScoreTipScriptNew*(*)(::PVOID, ::MoleMole::UICpScoreTipScriptNew_NAPLKAGDFFH, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_SETNUM_OFFSET))(this, CPLIIBLMDAO, BIOGEIHKABE);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_UPDATE_OFFSET))(this);
		}

		::System::Void JJPMOINJALK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICPSCORETIPSCRIPTNEW_JJPMOINJALK_OFFSET))(this);
		}
	};
}
