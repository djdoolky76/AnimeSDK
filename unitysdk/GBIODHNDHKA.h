#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class MCLNHLPAAOH;
class PGMLOLJCFEE;
namespace System { class Action; }

#define GBIODHNDHKA_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5B7440)
#define GBIODHNDHKA_EHPNMMENNLP_OFFSET UNITYSDK_OFFSET(0x1A5B7470)
#define GBIODHNDHKA_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5B7360)
#define GBIODHNDHKA_HFDPOICBAJD_OFFSET UNITYSDK_OFFSET(0x1A5B74B0)
#define GBIODHNDHKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5B7300)
#define GBIODHNDHKA_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5B72F0)
#define GBIODHNDHKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5B7450)
#define GBIODHNDHKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B7460)

inline static constexpr unsigned int GBIODHNDHKA_TypeDefinitionIndex = 17170;

class GBIODHNDHKA : public ::System::Object
{
public:
	::MCLNHLPAAOH* HINGHNEMJNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIODHNDHKA__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIODHNDHKA_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIODHNDHKA_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GBIODHNDHKA_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GBIODHNDHKA_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIODHNDHKA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean EHPNMMENNLP(::Foundation::AssetPath GKBFENNFCDH, ::PGMLOLJCFEE*& DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*&))((::PBYTE)hIl2Cpp + GBIODHNDHKA_EHPNMMENNLP_OFFSET))(this, GKBFENNFCDH, DEKJDEPKKLH);
	}

	::System::Boolean HFDPOICBAJD(::Foundation::AssetPath GKBFENNFCDH, ::PGMLOLJCFEE*& DEKJDEPKKLH)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::PGMLOLJCFEE*&))((::PBYTE)hIl2Cpp + GBIODHNDHKA_HFDPOICBAJD_OFFSET))(this, GKBFENNFCDH, DEKJDEPKKLH);
	}
};
