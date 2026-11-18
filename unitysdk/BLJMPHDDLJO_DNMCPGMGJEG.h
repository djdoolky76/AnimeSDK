#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffect; }
namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLJMPHDDLJO_DNMCPGMGJEG_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1692BD60)
#define BLJMPHDDLJO_DNMCPGMGJEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1692BD50)

inline static constexpr unsigned int BLJMPHDDLJO_DNMCPGMGJEG_TypeDefinitionIndex = 39604;

class BLJMPHDDLJO_DNMCPGMGJEG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJMPHDDLJO_DNMCPGMGJEG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*>*))((::PBYTE)hIl2Cpp + BLJMPHDDLJO_DNMCPGMGJEG_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
