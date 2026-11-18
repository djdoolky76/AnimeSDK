#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLensDistortion; }
namespace MoleMole::Config { class ConfigLensDistortions; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDJAMKOIPEK_CBCOHHKLADM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x11580AA0)
#define NDJAMKOIPEK_CBCOHHKLADM__CTOR_OFFSET UNITYSDK_OFFSET(0x11580A90)

inline static constexpr unsigned int NDJAMKOIPEK_CBCOHHKLADM_TypeDefinitionIndex = 69517;

class NDJAMKOIPEK_CBCOHHKLADM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDJAMKOIPEK_CBCOHHKLADM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLensDistortions*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigLensDistortion*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigLensDistortions*>*))((::PBYTE)hIl2Cpp + NDJAMKOIPEK_CBCOHHKLADM_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
