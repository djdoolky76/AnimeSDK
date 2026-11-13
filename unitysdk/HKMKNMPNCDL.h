#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class GAHPNAEGACM;
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define HKMKNMPNCDL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1988E0B0)
#define HKMKNMPNCDL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1988E330)
#define HKMKNMPNCDL_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0x1988DD60)
#define HKMKNMPNCDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1988E570)
#define HKMKNMPNCDL_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0x1988D7F0)
#define HKMKNMPNCDL_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0x1988DE50)
#define HKMKNMPNCDL_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x1988D480)
#define HKMKNMPNCDL_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0x1988DB30)
#define HKMKNMPNCDL_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0x1988DBB0)
#define HKMKNMPNCDL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x1988D350)
#define HKMKNMPNCDL_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0x1988DCE0)
#define HKMKNMPNCDL_KMIEEJEHMIC_OFFSET UNITYSDK_OFFSET(0x1988DC20)
#define HKMKNMPNCDL_LJEJDOBCBAM_OFFSET UNITYSDK_OFFSET(0x1988DF10)
#define HKMKNMPNCDL_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0x1988D9F0)
#define HKMKNMPNCDL_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1988D590)
#define HKMKNMPNCDL_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0x1988D630)
#define HKMKNMPNCDL__ONBIND_OFFSET UNITYSDK_OFFSET(0x1988D030)
#define HKMKNMPNCDL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1988D500)
#define HKMKNMPNCDL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1988D220)
#define HKMKNMPNCDL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1988D2D0)

inline static constexpr unsigned int HKMKNMPNCDL_TypeDefinitionIndex = 73261;

	class HKMKNMPNCDL : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::UI::Text* OCEEDFPJEOK; // 0xE0
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE8
		::CAOEEDDAPIK_NNBFMHKHMKO* APPIHABBCGK; // 0xF0
		::UnityEngine::UI::Text* LALMKOAFHGI; // 0xF8
		::System::String* DIDHOFMKIFH; // 0x100
		::System::Int32 CNICLEDFLFF; // 0x108
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JKKLHPGLHOI; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void KMIEEJEHMIC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KMIEEJEHMIC_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void LJEJDOBCBAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_LJEJDOBCBAM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMKNMPNCDL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
