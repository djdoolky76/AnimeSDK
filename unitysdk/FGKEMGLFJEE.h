#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGKEMGLFJEE_GJLFDFGPKMP.h"
#include "unitysdk/System/Object.h"

class GONBJHEODOK;
namespace MoleMole::Config { class EffectTimeSegmentConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGKEMGLFJEE_BOGDKLKIEOB_OFFSET UNITYSDK_OFFSET(0x14ACAB20)
#define FGKEMGLFJEE_CPINJFNAHEK_OFFSET UNITYSDK_OFFSET(0x14ACA8B0)
#define FGKEMGLFJEE_DOOILPIEDMB_OFFSET UNITYSDK_OFFSET(0x14ACA7D0)
#define FGKEMGLFJEE_EAAKIPANDAG_OFFSET UNITYSDK_OFFSET(0x14ACA6D0)
#define FGKEMGLFJEE_GMFGAPLOANG_OFFSET UNITYSDK_OFFSET(0x14ACAE10)
#define FGKEMGLFJEE_KMAANHFIOKG_OFFSET UNITYSDK_OFFSET(0x14ACA3C0)
#define FGKEMGLFJEE_LCDIGOHOFEN_OFFSET UNITYSDK_OFFSET(0x14ACAA90)
#define FGKEMGLFJEE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14ACA3B0)
#define FGKEMGLFJEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACA3A0)

inline static constexpr unsigned int FGKEMGLFJEE_TypeDefinitionIndex = 89305;

class FGKEMGLFJEE : public ::System::Object
{
public:
	::GONBJHEODOK* CAKFLIOHMKF; // 0x10
	::System::Int32 IIFMJFJOOCK; // 0x18
	::System::Single AAIOHPJMMEK; // 0x1C
	::FGKEMGLFJEE_GJLFDFGPKMP JKBLDFBGBPK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKEMGLFJEE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::GONBJHEODOK* DMPEOJCCCLO)
	{
		return ((::System::Void(*)(::PVOID, ::GONBJHEODOK*))((::PBYTE)hIl2Cpp + FGKEMGLFJEE__CTOR_1_OFFSET))(this, DMPEOJCCCLO);
	}

	::System::Void KMAANHFIOKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_KMAANHFIOKG_OFFSET))(this);
	}

	::System::Void EAAKIPANDAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_EAAKIPANDAG_OFFSET))(this);
	}

	::System::Boolean LCDIGOHOFEN(::FGKEMGLFJEE_GJLFDFGPKMP EEMJAKOJHBG)
	{
		return ((::System::Boolean(*)(::PVOID, ::FGKEMGLFJEE_GJLFDFGPKMP))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_LCDIGOHOFEN_OFFSET))(this, EEMJAKOJHBG);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>* DOOILPIEDMB()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::EffectTimeSegmentConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_DOOILPIEDMB_OFFSET))(this);
	}

	::System::Void BOGDKLKIEOB(::FGKEMGLFJEE_GJLFDFGPKMP JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::FGKEMGLFJEE_GJLFDFGPKMP))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_BOGDKLKIEOB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void CPINJFNAHEK(::MoleMole::Config::EffectTimeSegmentConfig* AAAANCGELDI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EffectTimeSegmentConfig*))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_CPINJFNAHEK_OFFSET))(this, AAAANCGELDI);
	}

	::System::Void GMFGAPLOANG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKEMGLFJEE_GMFGAPLOANG_OFFSET))(this);
	}
};
