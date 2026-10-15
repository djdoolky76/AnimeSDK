#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Expression/TokenType.h"
#include "unitysdk/System/Object.h"
class HEFMJGIINFM;
namespace System { class String; }

#define CIKDHKHDCHK_AHNCLDFCGAL_OFFSET UNITYSDK_OFFSET(0x1DBE9BB0)
#define CIKDHKHDCHK_AJFHEGLKLPE_OFFSET UNITYSDK_OFFSET(0x1DBE9ED0)
#define CIKDHKHDCHK_BCEEECJEBJA_OFFSET UNITYSDK_OFFSET(0x1DBE9F30)
#define CIKDHKHDCHK_CCHFLJGGDGL_OFFSET UNITYSDK_OFFSET(0x1DBE9AA0)
#define CIKDHKHDCHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE96D0)
#define CIKDHKHDCHK_DLKPFMBLMHM_OFFSET UNITYSDK_OFFSET(0x1DBE9B30)
#define CIKDHKHDCHK_EGOBBJJCCJF_OFFSET UNITYSDK_OFFSET(0x1DBE9CD0)
#define CIKDHKHDCHK_FLHAMDCGJJN_OFFSET UNITYSDK_OFFSET(0x1DBE96E0)
#define CIKDHKHDCHK_LOGFIONBAGO_OFFSET UNITYSDK_OFFSET(0x1DBE9AD0)
#define CIKDHKHDCHK_MOBDJPFFFID_OFFSET UNITYSDK_OFFSET(0x1DBE9E70)
#define CIKDHKHDCHK_NMNOOCNLJNL_OFFSET UNITYSDK_OFFSET(0x1DBE9A10)
#define CIKDHKHDCHK_OLCABJODKHN_OFFSET UNITYSDK_OFFSET(0x1DBE9CE0)
#define CIKDHKHDCHK_PCIDGLJOGAP_OFFSET UNITYSDK_OFFSET(0x1DBE9B90)

inline static constexpr unsigned int CIKDHKHDCHK_TypeDefinitionIndex = 10379;

	class CIKDHKHDCHK : public ::System::Object
	{
	public:
		::System::String* BBEBFJLHMKG; // 0x10
		::System::Int32 ELEGHCFHEMA; // 0x18
		::System::Int32 KCFPFKNIBDG; // 0x1C
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_CTOR_OFFSET))(this, a1);
		}

		::HEFMJGIINFM* FLHAMDCGJJN()
		{
			return ((::HEFMJGIINFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_FLHAMDCGJJN_OFFSET))(this);
		}

		::HEFMJGIINFM* LOGFIONBAGO(::RPG::Expression::TokenType a1)
		{
			return ((::HEFMJGIINFM*(*)(::PVOID, ::RPG::Expression::TokenType))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_LOGFIONBAGO_OFFSET))(this, a1);
		}

		::System::Void NMNOOCNLJNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_NMNOOCNLJNL_OFFSET))(this);
		}

		::HEFMJGIINFM* OLCABJODKHN()
		{
			return ((::HEFMJGIINFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_OLCABJODKHN_OFFSET))(this);
		}

		::HEFMJGIINFM* AHNCLDFCGAL()
		{
			return ((::HEFMJGIINFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_AHNCLDFCGAL_OFFSET))(this);
		}

		::System::Boolean EGOBBJJCCJF(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_EGOBBJJCCJF_OFFSET))(this, a1);
		}

		::System::Boolean CCHFLJGGDGL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_CCHFLJGGDGL_OFFSET))(this);
		}

		::System::Char DLKPFMBLMHM()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_DLKPFMBLMHM_OFFSET))(this);
		}

		::System::Char MOBDJPFFFID()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_MOBDJPFFFID_OFFSET))(this);
		}

		::System::Char AJFHEGLKLPE()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_AJFHEGLKLPE_OFFSET))(this);
		}

		::System::Boolean PCIDGLJOGAP(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_PCIDGLJOGAP_OFFSET))(this, a1);
		}

		::System::Boolean BCEEECJEBJA(::System::Char a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + CIKDHKHDCHK_BCEEECJEBJA_OFFSET))(this, a1);
		}

	};
