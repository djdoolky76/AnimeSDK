#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBGNNAMFJDL.h"
#include "unitysdk/System/Object.h"

class BHFJMFOPOIF;
class KEABHJADMEK;
class MIFCLIKMJFB;
class MJFAOJPCCLO;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define OKNLLLIOBAA_DEAPLILJLJD_OFFSET UNITYSDK_OFFSET(0xFD8E5C0)
#define OKNLLLIOBAA_EJNDFOGINMN_OFFSET UNITYSDK_OFFSET(0xFD8E460)
#define OKNLLLIOBAA_GGHLODLDBAO_OFFSET UNITYSDK_OFFSET(0xFD8E510)
#define OKNLLLIOBAA_GHDLNHOMMOG_OFFSET UNITYSDK_OFFSET(0xFD8E350)
#define OKNLLLIOBAA_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0xFD8DF20)
#define OKNLLLIOBAA_LIMEJNBGAJE_OFFSET UNITYSDK_OFFSET(0xFD8E010)
#define OKNLLLIOBAA_ODPPBBAIGLF_OFFSET UNITYSDK_OFFSET(0xFD8E1B0)
#define OKNLLLIOBAA_OHGLMOCMCPJ_OFFSET UNITYSDK_OFFSET(0xFD8E620)
#define OKNLLLIOBAA__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8DDF0)

inline static constexpr unsigned int OKNLLLIOBAA_TypeDefinitionIndex = 81102;

class OKNLLLIOBAA : public ::System::Object
{
public:
	::MIFCLIKMJFB* KHIJAFEFIPN; // 0x10
	::BHFJMFOPOIF* BFHOHDMDGBK; // 0x18
	::MoleMole::UIBaseController* NCIMBHDKIJM; // 0x20
	::KEABHJADMEK* ALADMADNIPE; // 0x28
	::MJFAOJPCCLO* KMMKMGDHCOI; // 0x30
	::System::Int32 JDDKAGGPDCF; // 0x38
	::System::Int32 FFJGPKNMBBP; // 0x3C
	::System::Int32 ABHBKFJKINO; // 0x40
	::DBGNNAMFJDL BBDHPBAPPPI; // 0x44

	::System::Void _ctor(::MJFAOJPCCLO* AEJAMJDBHAM, ::BHFJMFOPOIF* NCIMBHDKIJM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::MJFAOJPCCLO*, ::BHFJMFOPOIF*, ::System::Int32))((::PBYTE)hIl2Cpp + OKNLLLIOBAA__CTOR_OFFSET))(this, AEJAMJDBHAM, NCIMBHDKIJM, ABHBKFJKINO);
	}

	::System::Void LIMEJNBGAJE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_LIMEJNBGAJE_OFFSET))(this);
	}

	::System::Void ODPPBBAIGLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_ODPPBBAIGLF_OFFSET))(this);
	}

	::System::Void HJNJLKMIJPH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_HJNJLKMIJPH_OFFSET))(this);
	}

	::System::Void GHDLNHOMMOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_GHDLNHOMMOG_OFFSET))(this);
	}

	::System::String* EJNDFOGINMN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_EJNDFOGINMN_OFFSET))(this);
	}

	::System::String* GGHLODLDBAO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_GGHLODLDBAO_OFFSET))(this);
	}

	::System::String* DEAPLILJLJD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_DEAPLILJLJD_OFFSET))(this);
	}

	::System::Void OHGLMOCMCPJ(::System::Int32 DMBMOMEKJFO, ::DBGNNAMFJDL BBDHPBAPPPI, ::System::Int32 JDDKAGGPDCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DBGNNAMFJDL, ::System::Int32))((::PBYTE)hIl2Cpp + OKNLLLIOBAA_OHGLMOCMCPJ_OFFSET))(this, DMBMOMEKJFO, BBDHPBAPPPI, JDDKAGGPDCF);
	}
};
