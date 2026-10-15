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

#define KPOHCHFBABO_ADEOOPHNMEA_OFFSET UNITYSDK_OFFSET(0xB5CAC60)
#define KPOHCHFBABO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB5CB080)
#define KPOHCHFBABO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5CB340)
#define KPOHCHFBABO_BIOBBNGDGDF_OFFSET UNITYSDK_OFFSET(0xB5CAE10)
#define KPOHCHFBABO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5CB5D0)
#define KPOHCHFBABO_DOEDECKEMEF_OFFSET UNITYSDK_OFFSET(0xB5CA7D0)
#define KPOHCHFBABO_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB5CA360)
#define KPOHCHFBABO_FLFHNAPIDJD_OFFSET UNITYSDK_OFFSET(0xB5CAF00)
#define KPOHCHFBABO_FPJBHJAKBJL_OFFSET UNITYSDK_OFFSET(0xB5CAB00)
#define KPOHCHFBABO_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB5CA510)
#define KPOHCHFBABO_JKDKFHAPNBJ_OFFSET UNITYSDK_OFFSET(0xB5CAA00)
#define KPOHCHFBABO_JPIABGPFEGD_OFFSET UNITYSDK_OFFSET(0xB5CAAB0)
#define KPOHCHFBABO_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB5CA3B0)
#define KPOHCHFBABO_KBGNFAKDHEH_OFFSET UNITYSDK_OFFSET(0xB5CADB0)
#define KPOHCHFBABO_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB5CA600)
#define KPOHCHFBABO_LKOLIIDIBKI_OFFSET UNITYSDK_OFFSET(0xB5CA8E0)
#define KPOHCHFBABO_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB5CA590)
#define KPOHCHFBABO_NNEKDONGAHH_OFFSET UNITYSDK_OFFSET(0xB5CAFC0)
#define KPOHCHFBABO_ODKDBHMADCD_1_OFFSET UNITYSDK_OFFSET(0xB5CACC0)
#define KPOHCHFBABO_ODKDBHMADCD_OFFSET UNITYSDK_OFFSET(0xB5CAD50)
#define KPOHCHFBABO_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xB5CA650)
#define KPOHCHFBABO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5CA290)

inline static constexpr unsigned int KPOHCHFBABO_TypeDefinitionIndex = 71286;

	class KPOHCHFBABO : public ::CAOEEDDAPIK
	{
	public:
		::UnityEngine::Animation* MGCCGHLDMML; // 0xE0
		::UnityEngine::UI::Text* BLFFIGLEJOD; // 0xE8
		::UnityEngine::Animation* JPHOOFFIAAH; // 0xF0
		::UnityEngine::UI::Text* JBLFGKJBLFI; // 0xF8
		::System::String* DIDHOFMKIFH; // 0x100
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOHCHFBABO_EKGCGIDIFJJ_OFFSET))(this);
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
