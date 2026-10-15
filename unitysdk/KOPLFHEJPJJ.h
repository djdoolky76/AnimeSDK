#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNAKIBHJLFN.h"
namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define KOPLFHEJPJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB59D4A0)
#define KOPLFHEJPJJ_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0xB59D690)
#define KOPLFHEJPJJ_HGAMLCFBAHL_OFFSET UNITYSDK_OFFSET(0xB59D650)
#define KOPLFHEJPJJ_KGDLMPEABGG_OFFSET UNITYSDK_OFFSET(0xB59D4E0)

inline static constexpr unsigned int KOPLFHEJPJJ_TypeDefinitionIndex = 73110;

	class KOPLFHEJPJJ : public ::KNAKIBHJLFN
	{
	public:
		::RPG::Client::UIController* HKJLKMCDMGB; // 0x28
		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + KOPLFHEJPJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void KGDLMPEABGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLFHEJPJJ_KGDLMPEABGG_OFFSET))(this);
		}

		::System::Boolean HGAMLCFBAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KOPLFHEJPJJ_HGAMLCFBAHL_OFFSET))(this);
		}

		::System::Void DMJOKNMPLHJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + KOPLFHEJPJJ_DMJOKNMPLHJ_OFFSET))(this, a1);
		}

	};
