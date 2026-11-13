#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IEHGPFIGKOB_NPHKIPDJODH.h"
class BBDFGMBNDGD;
class IEHGPFIGKOB;
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define CNNDFIIBOJC_ACJKACAOJBN_OFFSET UNITYSDK_OFFSET(0x19151250)
#define CNNDFIIBOJC_AEHLKBPHKOD_OFFSET UNITYSDK_OFFSET(0x19150D70)
#define CNNDFIIBOJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19151C40)
#define CNNDFIIBOJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19151D30)
#define CNNDFIIBOJC_CNCOPPBKEBH_OFFSET UNITYSDK_OFFSET(0x191518F0)
#define CNNDFIIBOJC_CTOR_OFFSET UNITYSDK_OFFSET(0x19151E00)
#define CNNDFIIBOJC_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x19151410)
#define CNNDFIIBOJC_FOPDCOJAKKG_OFFSET UNITYSDK_OFFSET(0x19151B40)
#define CNNDFIIBOJC_HDGDHIPKJJF_OFFSET UNITYSDK_OFFSET(0x191513C0)
#define CNNDFIIBOJC_KPDPAHKJNHM_OFFSET UNITYSDK_OFFSET(0x19151A20)
#define CNNDFIIBOJC_MCGEPCIAAFC_OFFSET UNITYSDK_OFFSET(0x19151570)
#define CNNDFIIBOJC_ODPKLMLFKMN_OFFSET UNITYSDK_OFFSET(0x19151740)
#define CNNDFIIBOJC__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19150DD0)
#define CNNDFIIBOJC__ONBIND_OFFSET UNITYSDK_OFFSET(0x19150BF0)
#define CNNDFIIBOJC__ONTICK_OFFSET UNITYSDK_OFFSET(0x19151AC0)
#define CNNDFIIBOJC__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19151000)

inline static constexpr unsigned int CNNDFIIBOJC_TypeDefinitionIndex = 74286;

	class CNNDFIIBOJC : public ::FMPCODLIOLG
	{
	public:
		::System::String* EDCJDGIIKCM; // 0x60
		::UnityEngine::UI::Image* OEMOPFJKKKK; // 0x68
		::UnityEngine::UI::Image* BPMCHOJLFAG; // 0x70
		::IEHGPFIGKOB* LBOKAKKCMBD; // 0x78
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x80
		::System::Boolean JLFOHMHDMHM; // 0x88
		::System::Boolean FNECNBDADDJ; // 0x89
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC__ONBIND_OFFSET))(this);
		}

		::System::Void AEHLKBPHKOD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_AEHLKBPHKOD_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC__SETUPVIEW_OFFSET))(this);
		}

		::System::Void HDGDHIPKJJF(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_HDGDHIPKJJF_OFFSET))(this, a1);
		}

		::System::Void ACJKACAOJBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_ACJKACAOJBN_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void MCGEPCIAAFC(::BBDFGMBNDGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BBDFGMBNDGD*))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_MCGEPCIAAFC_OFFSET))(this, a1);
		}

		::System::Void ODPKLMLFKMN(::IEHGPFIGKOB_NPHKIPDJODH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEHGPFIGKOB_NPHKIPDJODH))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_ODPKLMLFKMN_OFFSET))(this, a1);
		}

		::System::Void KPDPAHKJNHM(::IEHGPFIGKOB_NPHKIPDJODH a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEHGPFIGKOB_NPHKIPDJODH))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_KPDPAHKJNHM_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNNDFIIBOJC__ONTICK_OFFSET))(this, a1);
		}

		::System::Void CNCOPPBKEBH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_CNCOPPBKEBH_OFFSET))(this, a1);
		}

		::System::Void FOPDCOJAKKG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_FOPDCOJAKKG_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
