#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOEKHJCLDA.h"
#include "unitysdk/MINHKOEANBP.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCGLAJJBMCI_POAAPBJLFGN_OFFSET UNITYSDK_OFFSET(0x1C188A40)
#define NCGLAJJBMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C188A30)

inline static constexpr unsigned int NCGLAJJBMCI_TypeDefinitionIndex = 9819;

class NCGLAJJBMCI : public ::BFOEKHJCLDA
{
public:
	::System::Void _ctor(::MINHKOEANBP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MINHKOEANBP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCGLAJJBMCI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void POAAPBJLFGN(::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* EFAKMFGCICB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*))((::PBYTE)hIl2Cpp + NCGLAJJBMCI_POAAPBJLFGN_OFFSET))(this, EFAKMFGCICB);
	}
};
