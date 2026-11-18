#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVignette; }
namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLMIBIBPFDD_CICCLOEAENC_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x152AD120)
#define JLMIBIBPFDD_CICCLOEAENC__CTOR_OFFSET UNITYSDK_OFFSET(0x152AD110)

inline static constexpr unsigned int JLMIBIBPFDD_CICCLOEAENC_TypeDefinitionIndex = 60388;

class JLMIBIBPFDD_CICCLOEAENC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMIBIBPFDD_CICCLOEAENC__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityVignettes*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVignette*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityVignettes*>*))((::PBYTE)hIl2Cpp + JLMIBIBPFDD_CICCLOEAENC_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
