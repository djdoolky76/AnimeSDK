#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigChromaticAberration; }
namespace MoleMole::Config { class ConfigChromaticAberrations; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLCBFJGMADM_OLKPDINFIHF_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x105C97D0)
#define NLCBFJGMADM_OLKPDINFIHF__CTOR_OFFSET UNITYSDK_OFFSET(0x105C97C0)

inline static constexpr unsigned int NLCBFJGMADM_OLKPDINFIHF_TypeDefinitionIndex = 74687;

class NLCBFJGMADM_OLKPDINFIHF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLCBFJGMADM_OLKPDINFIHF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigChromaticAberrations*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigChromaticAberration*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigChromaticAberrations*>*))((::PBYTE)hIl2Cpp + NLCBFJGMADM_OLKPDINFIHF_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
