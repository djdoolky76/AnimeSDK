#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffect; }
namespace MoleMole::Config { class ConfigEntityLiftGammaGainEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLNJAOHHJLH_DEGEEDDAENM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15EF6DA0)
#define FLNJAOHHJLH_DEGEEDDAENM__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6D90)

inline static constexpr unsigned int FLNJAOHHJLH_DEGEEDDAENM_TypeDefinitionIndex = 59860;

class FLNJAOHHJLH_DEGEEDDAENM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLNJAOHHJLH_DEGEEDDAENM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLiftGammaGainEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityLiftGammaGainEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityLiftGammaGainEffects*>*))((::PBYTE)hIl2Cpp + FLNJAOHHJLH_DEGEEDDAENM_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
