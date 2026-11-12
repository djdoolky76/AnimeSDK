#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Nullable_1.h"
class LOMPCFJNJBP;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BKPEADLKFGJ_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC12E890)
#define BKPEADLKFGJ_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC12EAF0)
#define BKPEADLKFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC12ED10)
#define BKPEADLKFGJ_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xC12E800)
#define BKPEADLKFGJ_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xC12E5C0)
#define BKPEADLKFGJ_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC12E230)
#define BKPEADLKFGJ_GECINDNCLNM_OFFSET UNITYSDK_OFFSET(0xC12DE80)
#define BKPEADLKFGJ_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xC12E530)
#define BKPEADLKFGJ_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xC12E680)
#define BKPEADLKFGJ_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xC12E740)
#define BKPEADLKFGJ_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xC12E2E0)
#define BKPEADLKFGJ_NDHJKKDPGMO_1_OFFSET UNITYSDK_OFFSET(0xC12DEF0)
#define BKPEADLKFGJ_NDHJKKDPGMO_OFFSET UNITYSDK_OFFSET(0xC12DD90)
#define BKPEADLKFGJ__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xC12D950)
#define BKPEADLKFGJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xC12D830)
#define BKPEADLKFGJ__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC12E4C0)
#define BKPEADLKFGJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC12DB90)

inline static constexpr unsigned int BKPEADLKFGJ_TypeDefinitionIndex = 74422;

	class BKPEADLKFGJ : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x68
		::UnityEngine::GameObject* DHBGJLDMMON; // 0x70
		::RPG::Client::PrefabLoadMeta* HKONEDKHNMM; // 0x78
		::System::Collections::Generic::List_1<::LOMPCFJNJBP*>* DHANFADKGGI; // 0x80
		::RPG::GameCore::StageType OIELIKANMGI; // 0x88
		// static const ::System::String* KOKEDMHKMEJ; // 0x0
		// static const ::System::String* PEHAOAMFILC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ__ONBIND_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NDHJKKDPGMO(::System::Nullable_1<::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_NDHJKKDPGMO_OFFSET))(this, a1);
		}

		::System::UInt32 GECINDNCLNM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_GECINDNCLNM_OFFSET))(this);
		}

		::System::Void NDHJKKDPGMO_1(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_NDHJKKDPGMO_1_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ__ONDISPOSE_OFFSET))(this);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPEADLKFGJ_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
