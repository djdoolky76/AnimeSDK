#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJFKHEKOPBD.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"

class ANAPNFPOMNG;
class KCCDJGBJGLD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BAHELCDJCBE_ALNIFGCMINJ_OFFSET UNITYSDK_OFFSET(0x12D14AA0)
#define BAHELCDJCBE_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12D14C40)
#define BAHELCDJCBE_BAEOMKCHECF_OFFSET UNITYSDK_OFFSET(0x12D14100)
#define BAHELCDJCBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D14D60)
#define BAHELCDJCBE_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x12D143B0)
#define BAHELCDJCBE_NFIDCGGFFCB_OFFSET UNITYSDK_OFFSET(0x12D14740)
#define BAHELCDJCBE_NIPIMHAKAAM_OFFSET UNITYSDK_OFFSET(0x12D149D0)
#define BAHELCDJCBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D13BC0)
#define BAHELCDJCBE_OMEIBIPJGDH_OFFSET UNITYSDK_OFFSET(0x12D14CD0)
#define BAHELCDJCBE_POPPOGDNFNF_OFFSET UNITYSDK_OFFSET(0x12D14A30)
#define BAHELCDJCBE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D146E0)

inline static constexpr unsigned int BAHELCDJCBE_TypeDefinitionIndex = 76017;

class BAHELCDJCBE : public ::HJFKHEKOPBD
{
public:
	::System::String* BKGFGJLEMDP; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* IFGEDAMKMLK; // 0x68
	::System::Int32 KKJCMIGPKBN; // 0x70
	::System::Int32 KHLGLLEFGKI; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BAEOMKCHECF(::ANAPNFPOMNG* DACKALLJNNF)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + BAHELCDJCBE_BAEOMKCHECF_OFFSET))(this, DACKALLJNNF);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_FCMNHLDLJCI_OFFSET))(this);
	}

	::KCCDJGBJGLD* NFIDCGGFFCB()
	{
		return ((::KCCDJGBJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_NFIDCGGFFCB_OFFSET))(this);
	}

	::System::Boolean NIPIMHAKAAM(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAHELCDJCBE_NIPIMHAKAAM_OFFSET))(this, COMDNFILAIC);
	}

	::System::Void POPPOGDNFNF(::System::Int32 COMDNFILAIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAHELCDJCBE_POPPOGDNFNF_OFFSET))(this, COMDNFILAIC);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void OMEIBIPJGDH(::ANAPNFPOMNG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::ANAPNFPOMNG*))((::PBYTE)hIl2Cpp + BAHELCDJCBE_OMEIBIPJGDH_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ALNIFGCMINJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_ALNIFGCMINJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHELCDJCBE_ECNOGHHOPPF_OFFSET))(this);
	}
};
