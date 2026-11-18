#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DADDMJKNNFP_BCHAMILBBNN_OFFSET UNITYSDK_OFFSET(0x132845C0)
#define DADDMJKNNFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13284830)
#define DADDMJKNNFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132847A0)
#define DADDMJKNNFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13284440)
#define DADDMJKNNFP__CTOR_OFFSET UNITYSDK_OFFSET(0x13284820)

inline static constexpr unsigned int DADDMJKNNFP_TypeDefinitionIndex = 89389;

class DADDMJKNNFP : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* FOJFPCDCODF; // 0x18
	::FILNFMCNCFE* OFOCCHIGAOL; // 0x20
	::UnityEngine::Transform* MDJAHDEJNCK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADDMJKNNFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DADDMJKNNFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::FGCOIBFFCHB*>* BCHAMILBBNN(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::FGCOIBFFCHB*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DADDMJKNNFP_BCHAMILBBNN_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DADDMJKNNFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADDMJKNNFP_KGEBDLGBGNM_OFFSET))(this);
	}
};
