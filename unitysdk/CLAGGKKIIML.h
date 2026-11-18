#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LLLOKPMOCAC.h"
#include "unitysdk/EEKGPKLGJJJ.h"

class GLFHKJAPKHO;
class KGBFLHNJHHN;
class PALILLBOGLN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLAGGKKIIML_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1E874600)
#define CLAGGKKIIML_KKPPACBHLID_OFFSET UNITYSDK_OFFSET(0x1E874E20)
#define CLAGGKKIIML_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E8743C0)
#define CLAGGKKIIML_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1E874560)
#define CLAGGKKIIML__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8742C0)

inline static constexpr unsigned int CLAGGKKIIML_TypeDefinitionIndex = 94630;

class CLAGGKKIIML : public ::LLLOKPMOCAC
{
public:
	::System::Collections::Generic::List_1<::PALILLBOGLN*>* AIHGHIIFKJH; // 0x148
	::System::Collections::Generic::List_1<::PALILLBOGLN*>* HKJOLKAHOEO; // 0x150

	::System::Void _ctor(::EEKGPKLGJJJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EEKGPKLGJJJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CLAGGKKIIML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::GLFHKJAPKHO* NCGPDIPFFGJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLFHKJAPKHO*))((::PBYTE)hIl2Cpp + CLAGGKKIIML_MDGCOKBMLFG_OFFSET))(this, NCGPDIPFFGJ);
	}

	::System::Collections::Generic::List_1<::PALILLBOGLN*>* KKPPACBHLID(::System::UInt32 JGDOIBLCMCL)
	{
		return ((::System::Collections::Generic::List_1<::PALILLBOGLN*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLAGGKKIIML_KKPPACBHLID_OFFSET))(this, JGDOIBLCMCL);
	}

	::System::Boolean ANPBCLAFCJB(::GLFHKJAPKHO* NCGPDIPFFGJ, ::Il2CppArray<::System::String*>* ABKIGHMEKOA, ::System::Collections::Generic::List_1<::PALILLBOGLN*>* OCCKCHKIPHP)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLFHKJAPKHO*, ::Il2CppArray<::System::String*>*, ::System::Collections::Generic::List_1<::PALILLBOGLN*>*))((::PBYTE)hIl2Cpp + CLAGGKKIIML_ANPBCLAFCJB_OFFSET))(this, NCGPDIPFFGJ, ABKIGHMEKOA, OCCKCHKIPHP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAGGKKIIML_NPOLNFDBOOD_OFFSET))(this);
	}
};
