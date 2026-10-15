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

#define CNNDFIIBOJC_ACJKACAOJBN_OFFSET UNITYSDK_OFFSET(0xDA53790)
#define CNNDFIIBOJC_AEHLKBPHKOD_OFFSET UNITYSDK_OFFSET(0xDA532A0)
#define CNNDFIIBOJC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xDA54170)
#define CNNDFIIBOJC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xDA54260)
#define CNNDFIIBOJC_CNCOPPBKEBH_OFFSET UNITYSDK_OFFSET(0xDA53E20)
#define CNNDFIIBOJC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA54330)
#define CNNDFIIBOJC_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xDA53950)
#define CNNDFIIBOJC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xDA53530)
#define CNNDFIIBOJC_FOPDCOJAKKG_OFFSET UNITYSDK_OFFSET(0xDA54070)
#define CNNDFIIBOJC_HDGDHIPKJJF_OFFSET UNITYSDK_OFFSET(0xDA53900)
#define CNNDFIIBOJC_KPDPAHKJNHM_OFFSET UNITYSDK_OFFSET(0xDA53F50)
#define CNNDFIIBOJC_MCGEPCIAAFC_OFFSET UNITYSDK_OFFSET(0xDA53AA0)
#define CNNDFIIBOJC_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xDA53300)
#define CNNDFIIBOJC_ODPKLMLFKMN_OFFSET UNITYSDK_OFFSET(0xDA53C70)
#define CNNDFIIBOJC__ONBIND_OFFSET UNITYSDK_OFFSET(0xDA531F0)
#define CNNDFIIBOJC__ONTICK_OFFSET UNITYSDK_OFFSET(0xDA53FF0)

inline static constexpr unsigned int CNNDFIIBOJC_TypeDefinitionIndex = 72219;

	class CNNDFIIBOJC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* BPMCHOJLFAG; // 0x60
		::UnityEngine::UI::Image* OEMOPFJKKKK; // 0x68
		::System::String* EDCJDGIIKCM; // 0x70
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNNDFIIBOJC_EKGCGIDIFJJ_OFFSET))(this);
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
