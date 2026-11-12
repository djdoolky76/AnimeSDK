#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAOEEDDAPIK.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GAHPNAEGACM;
namespace RPG::GameCore { class LevelEntityActionDelayChanged; }
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Text; }

#define KPOHCHFBABO_ADEOOPHNMEA_OFFSET UNITYSDK_OFFSET(0xBE62820)
#define KPOHCHFBABO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBE62C60)
#define KPOHCHFBABO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBE62F30)
#define KPOHCHFBABO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xBE629F0)
#define KPOHCHFBABO_CTOR_OFFSET UNITYSDK_OFFSET(0xBE631C0)
#define KPOHCHFBABO_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xBE62360)
#define KPOHCHFBABO_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0xBE62AE0)
#define KPOHCHFBABO_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xBE626B0)
#define KPOHCHFBABO_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xBE620A0)
#define KPOHCHFBABO_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xBE625B0)
#define KPOHCHFBABO_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xBE62660)
#define KPOHCHFBABO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBE61F30)
#define KPOHCHFBABO_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xBE62970)
#define KPOHCHFBABO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xBE62190)
#define KPOHCHFBABO_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0xBE62490)
#define KPOHCHFBABO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBE62120)
#define KPOHCHFBABO_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0xBE62BA0)
#define KPOHCHFBABO_ODKDBHMADCD_1_OFFSET UNITYSDK_OFFSET(0xBE62880)
#define KPOHCHFBABO_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0xBE62910)
#define KPOHCHFBABO_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xBE621E0)
#define KPOHCHFBABO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBE61C90)
#define KPOHCHFBABO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBE61EE0)

inline static constexpr unsigned int KPOHCHFBABO_TypeDefinitionIndex = 73264;

	class KPOHCHFBABO : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xE0
		::UnityEngine::UI::Text* JBLFGKJBLFI; // 0xE8
		::UnityEngine::Animation* MGCCGHLDMML; // 0xF0
		::System::String* DIDHOFMKIFH; // 0xF8
		::UnityEngine::UI::Text* BLFFIGLEJOD; // 0x100
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* JLGFFHBGCLL; // 0x0
		// static const ::System::String* LADCKPBPCCL; // 0x0
		// static const ::System::String* LPHDCKLJOHB; // 0x0
		// static const ::System::String* FMNMOLEFGDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPOHCHFBABO_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KPOHCHFBABO_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void LKOLIIDIBKI(::RPG::GameCore::LevelTurnLimitChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_LKOLIIDIBKI_OFFSET))(this, a1);
		}

		::System::Void FPJBHJAKBJL(::RPG::GameCore::LevelEntityActionDelayChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityActionDelayChanged*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_FPJBHJAKBJL_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void DOEDECKEMEF(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_DOEDECKEMEF_OFFSET))(this, a1);
		}

		::System::Void BIOBBNGDGDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_BIOBBNGDGDF_OFFSET))(this, a1);
		}

		::System::Void JKDKFHAPNBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_JKDKFHAPNBJ_OFFSET))(this);
		}

		::System::Boolean ADEOOPHNMEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_ADEOOPHNMEA_OFFSET))(this);
		}

		::System::Void ODKDBHMADCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_ODKDBHMADCD_OFFSET))(this);
		}

		::System::Void ODKDBHMADCD_1(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KPOHCHFBABO_ODKDBHMADCD_1_OFFSET))(this, a1);
		}

		::System::Void JPIABGPFEGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_JPIABGPFEGD_OFFSET))(this);
		}

		::System::Void KBGNFAKDHEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_KBGNFAKDHEH_OFFSET))(this);
		}

		::System::Void FLFHNAPIDJD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_FLFHNAPIDJD_OFFSET))(this, a1);
		}

		::System::Void NNEKDONGAHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPOHCHFBABO_NNEKDONGAHH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
