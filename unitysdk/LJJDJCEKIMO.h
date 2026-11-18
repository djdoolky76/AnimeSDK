#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJJDJCEKIMO_LDKABKAFLIB.h"
#include "unitysdk/LJJDJCEKIMO_PDPEMEGBMLD.h"
#include "unitysdk/PKIKKFOMCEP.h"
#include "unitysdk/PKIKKFOMCEP_EEKHGOHHMBF.h"

class GDGBPCOGIEN;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJJDJCEKIMO_AKGCPMCBOKK_OFFSET UNITYSDK_OFFSET(0x158EE430)
#define LJJDJCEKIMO_BICCBEEMNJJ_OFFSET UNITYSDK_OFFSET(0x158EDBF0)
#define LJJDJCEKIMO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x158EE360)
#define LJJDJCEKIMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x158EE830)
#define LJJDJCEKIMO_FEMHBNKAPHD_OFFSET UNITYSDK_OFFSET(0x158EE5F0)
#define LJJDJCEKIMO_IAHPLEHJFGB_OFFSET UNITYSDK_OFFSET(0x158EE1C0)
#define LJJDJCEKIMO_JELEMNGBFDG_OFFSET UNITYSDK_OFFSET(0x158EDD00)
#define LJJDJCEKIMO_JFNIMFIBFHA_OFFSET UNITYSDK_OFFSET(0x158EE7A0)
#define LJJDJCEKIMO_NIHOLHLLHIF_OFFSET UNITYSDK_OFFSET(0x158EDBE0)
#define LJJDJCEKIMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x158EDF20)
#define LJJDJCEKIMO_OPEONAKDFGF_OFFSET UNITYSDK_OFFSET(0x158EE630)
#define LJJDJCEKIMO__CTOR_OFFSET UNITYSDK_OFFSET(0x158EE350)

inline static constexpr unsigned int LJJDJCEKIMO_TypeDefinitionIndex = 41157;

class LJJDJCEKIMO : public ::PKIKKFOMCEP
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* AFABDAFAHOC; // 0x20
	::System::Int32 LLFKOOKDOLP; // 0x28
	::LJJDJCEKIMO_LDKABKAFLIB JPAEPOBBDNI; // 0x2C
	::System::Single ECPIAGACEPD; // 0x30
	::LJJDJCEKIMO_PDPEMEGBMLD BELLCOCEPMB; // 0x34
	::System::Boolean JCDAPBNJNIE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO__CTOR_OFFSET))(this);
	}

	::PKIKKFOMCEP_EEKHGOHHMBF NIHOLHLLHIF()
	{
		return ((::PKIKKFOMCEP_EEKHGOHHMBF(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_NIHOLHLLHIF_OFFSET))(this);
	}

	::System::Single BICCBEEMNJJ(::GDGBPCOGIEN* JIJFBNLHFGK, ::System::Single HLFFCMIFFIB)
	{
		return ((::System::Single(*)(::PVOID, ::GDGBPCOGIEN*, ::System::Single))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_BICCBEEMNJJ_OFFSET))(this, JIJFBNLHFGK, HLFFCMIFFIB);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void IAHPLEHJFGB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_IAHPLEHJFGB_OFFSET))(this);
	}

	static ::LJJDJCEKIMO* COKNIICCODC(::System::Int32 FGGJMGFPDFK, ::System::Int32 CLJAAJKAINN, ::System::Int32 CDPJBCNKOAM)
	{
		return ((::LJJDJCEKIMO*(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_COKNIICCODC_OFFSET))(FGGJMGFPDFK, CLJAAJKAINN, CDPJBCNKOAM);
	}

	::System::Void AKGCPMCBOKK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_AKGCPMCBOKK_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void OPEONAKDFGF(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_OPEONAKDFGF_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void JFNIMFIBFHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_JFNIMFIBFHA_OFFSET))(this);
	}

	::System::Int32 JELEMNGBFDG(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* IMDPMICDFKI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_JELEMNGBFDG_OFFSET))(this, IMDPMICDFKI);
	}

	::System::Void FEMHBNKAPHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_FEMHBNKAPHD_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJDJCEKIMO_ECNOGHHOPPF_OFFSET))(this);
	}
};
