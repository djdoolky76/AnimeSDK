#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CALIGLPABNP;
class GDNDDHBKJJB;
class IOOIHHOJOPI;
class JINIMMNEHBF;
class LGINJIKKBJA;
namespace MoleMole::Project::Config { class TurnBasedEntityTemplateExt; }
namespace System { class String; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class LJHFMILANJA_1;

#define LJHCEKCBLJE_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x12A604E0)
#define LJHCEKCBLJE_FPILDPJJNAL_OFFSET UNITYSDK_OFFSET(0x12A618A0)
#define LJHCEKCBLJE_GBHNCEECJKM_OFFSET UNITYSDK_OFFSET(0x12A61370)
#define LJHCEKCBLJE_IBIKKADEEMD_OFFSET UNITYSDK_OFFSET(0x12A61740)
#define LJHCEKCBLJE_JBHLGDIGOKO_OFFSET UNITYSDK_OFFSET(0x12A61A50)
#define LJHCEKCBLJE_JKKAAHEBJPC_OFFSET UNITYSDK_OFFSET(0x12A61BF0)
#define LJHCEKCBLJE_KFGFIPGNNNO_OFFSET UNITYSDK_OFFSET(0x12A61280)
#define LJHCEKCBLJE_MHPJAOMKDNH_OFFSET UNITYSDK_OFFSET(0x12A61010)
#define LJHCEKCBLJE_OKLNKGIKAIE_OFFSET UNITYSDK_OFFSET(0x12A61310)
#define LJHCEKCBLJE_OOBDNMFCPCE_OFFSET UNITYSDK_OFFSET(0x12A60C10)
#define LJHCEKCBLJE_PAHCOLNGAID_OFFSET UNITYSDK_OFFSET(0x12A614D0)
#define LJHCEKCBLJE_PEPDPCGBKIB_OFFSET UNITYSDK_OFFSET(0x12A60DB0)
#define LJHCEKCBLJE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A60BC0)

inline static constexpr unsigned int LJHCEKCBLJE_TypeDefinitionIndex = 89181;

class LJHCEKCBLJE : public ::PBJOCICFNGK
{
public:
	::BFMLEHMAGAK_1<::MoleMole::Project::Config::TurnBasedEntityTemplateExt*>* LMGEDDLKANG; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::LJHFMILANJA_1<::GDNDDHBKJJB*>* IHHNBPBIKFK; // 0x60
	::BFMLEHMAGAK_1<::CALIGLPABNP*>* LCCODAPBEAD; // 0x68
	::BFMLEHMAGAK_1<::JINIMMNEHBF*>* JJFGGIGIGNE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean OOBDNMFCPCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_OOBDNMFCPCE_OFFSET))(this);
	}

	::System::Boolean PEPDPCGBKIB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_PEPDPCGBKIB_OFFSET))(this);
	}

	::System::Boolean MHPJAOMKDNH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_MHPJAOMKDNH_OFFSET))(this);
	}

	::System::String* KFGFIPGNNNO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_KFGFIPGNNNO_OFFSET))(this);
	}

	::System::Boolean OKLNKGIKAIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_OKLNKGIKAIE_OFFSET))(this);
	}

	::JINIMMNEHBF* GBHNCEECJKM()
	{
		return ((::JINIMMNEHBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_GBHNCEECJKM_OFFSET))(this);
	}

	::System::Boolean PAHCOLNGAID()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_PAHCOLNGAID_OFFSET))(this);
	}

	::CALIGLPABNP* IBIKKADEEMD()
	{
		return ((::CALIGLPABNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_IBIKKADEEMD_OFFSET))(this);
	}

	::System::String* FPILDPJJNAL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_FPILDPJJNAL_OFFSET))(this);
	}

	::System::Boolean JBHLGDIGOKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_JBHLGDIGOKO_OFFSET))(this);
	}

	::MoleMole::Project::Config::TurnBasedEntityTemplateExt* JKKAAHEBJPC()
	{
		return ((::MoleMole::Project::Config::TurnBasedEntityTemplateExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJHCEKCBLJE_JKKAAHEBJPC_OFFSET))(this);
	}
};
