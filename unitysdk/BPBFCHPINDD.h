#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BPBFCHPINDD_FadingDoneActionType.h"
#include "unitysdk/System/Object.h"
class CHLIAIJFBJF;
class DEBEAKKOHLN;
class FCFMMAEAFCH;
class RenderItemPolymerConfig;
namespace RPG::Client { class RPGProfilerMarker; }
namespace UnityEngine { class GameObject; }

#define BPBFCHPINDD_ANCBMMFJGKN_OFFSET UNITYSDK_OFFSET(0xC19CA00)
#define BPBFCHPINDD_BCIOLAJLHLF_OFFSET UNITYSDK_OFFSET(0xC19CF30)
#define BPBFCHPINDD_CCTOR_OFFSET UNITYSDK_OFFSET(0xC19DA00)
#define BPBFCHPINDD_CDOEKFCMCGM_OFFSET UNITYSDK_OFFSET(0xC19CEC0)
#define BPBFCHPINDD_CEDMFLIHMBJ_OFFSET UNITYSDK_OFFSET(0xC19BB40)
#define BPBFCHPINDD_CPFCFLGALEO_OFFSET UNITYSDK_OFFSET(0xC19D720)
#define BPBFCHPINDD_CTOR_OFFSET UNITYSDK_OFFSET(0xC19BAE0)
#define BPBFCHPINDD_DHANPENBBPO_OFFSET UNITYSDK_OFFSET(0xC19C070)
#define BPBFCHPINDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC19BAF0)
#define BPBFCHPINDD_FCMLNAEGIDL_OFFSET UNITYSDK_OFFSET(0xC19D670)
#define BPBFCHPINDD_GCNNCLLEDOC_OFFSET UNITYSDK_OFFSET(0xC19D7D0)
#define BPBFCHPINDD_JGACMHLOJCM_OFFSET UNITYSDK_OFFSET(0xC19CED0)
#define BPBFCHPINDD_MIBGFHBGLDG_OFFSET UNITYSDK_OFFSET(0xC19BD00)
#define BPBFCHPINDD_OKCEIMPAPHD_OFFSET UNITYSDK_OFFSET(0xC19C4F0)
#define BPBFCHPINDD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC19CA70)

	class BPBFCHPINDD : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* FEGGKFOOFLI; // 0x10
		::DEBEAKKOHLN* KDFPNFHHNGA; // 0x18
		::UnityEngine::GameObject* JPPLFKBLHAJ; // 0x20
		::CHLIAIJFBJF* BHHAMGJHDON; // 0x28
		::DEBEAKKOHLN* HLIGDBAEAEG; // 0x30
		::FCFMMAEAFCH* EIHPDMPGPFB; // 0x38
		::FCFMMAEAFCH* FCMGMJJCHCI; // 0x40
		::System::Boolean CMHPBKHKFMG; // 0x48
		::System::Byte _padding0[0x3];
		::BPBFCHPINDD_FadingDoneActionType LNJBHEFKJCH; // 0x4C
		::System::Single IEHPFADHJFD; // 0x50
		::System::Single DPFLANOOHBE; // 0x54
		static ::RPG::Client::RPGProfilerMarker** StaticGet_FHHAJNDGNDB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "BPBFCHPINDD")->GetStaticField(0x3200);
		}

		// static const ::System::Object GFKKHBLMMIJ; // 0x0
		// static const ::System::Object BDJOILKJHEJ; // 0x0
		::System::Void _ctor(::CHLIAIJFBJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CHLIAIJFBJF*))((::PBYTE)hIl2Cpp + BPBFCHPINDD_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPBFCHPINDD_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_DISPOSE_OFFSET))(this);
		}

		::System::Void MIBGFHBGLDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_MIBGFHBGLDG_OFFSET))(this);
		}

		::System::Void DHANPENBBPO(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::BPBFCHPINDD_FadingDoneActionType a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::BPBFCHPINDD_FadingDoneActionType, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + BPBFCHPINDD_DHANPENBBPO_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OKCEIMPAPHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_OKCEIMPAPHD_OFFSET))(this);
		}

		::System::Void CEDMFLIHMBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_CEDMFLIHMBJ_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPBFCHPINDD_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BCIOLAJLHLF(::RenderItemPolymerConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RenderItemPolymerConfig*))((::PBYTE)hIl2Cpp + BPBFCHPINDD_BCIOLAJLHLF_OFFSET))(this, a1);
		}

		::System::Boolean CDOEKFCMCGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_CDOEKFCMCGM_OFFSET))(this);
		}

		::System::Boolean ANCBMMFJGKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_ANCBMMFJGKN_OFFSET))(this);
		}

		::System::Single JGACMHLOJCM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_JGACMHLOJCM_OFFSET))(this);
		}

		::DEBEAKKOHLN* FCMLNAEGIDL()
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_FCMLNAEGIDL_OFFSET))(this);
		}

		::DEBEAKKOHLN* CPFCFLGALEO()
		{
			return ((::DEBEAKKOHLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_CPFCFLGALEO_OFFSET))(this);
		}

		::System::Boolean GCNNCLLEDOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPBFCHPINDD_GCNNCLLEDOC_OFFSET))(this);
		}

	};
