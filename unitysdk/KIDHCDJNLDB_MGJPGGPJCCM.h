#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLightingEffect; }
namespace MoleMole::Config { class ConfigEntityLightingEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIDHCDJNLDB_MGJPGGPJCCM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16809710)
#define KIDHCDJNLDB_MGJPGGPJCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16809700)

inline static constexpr unsigned int KIDHCDJNLDB_MGJPGGPJCCM_TypeDefinitionIndex = 41585;

class KIDHCDJNLDB_MGJPGGPJCCM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDHCDJNLDB_MGJPGGPJCCM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLightingEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLightingEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLightingEffects*>*))((::PBYTE)hIl2Cpp + KIDHCDJNLDB_MGJPGGPJCCM_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
