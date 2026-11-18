#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapContactShadowEffect; }
namespace MoleMole::Config { class ConfigEntityNapContactShadowEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOOEONACANL_IBIICOPCDDM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x11F29030)
#define LOOEONACANL_IBIICOPCDDM__CTOR_OFFSET UNITYSDK_OFFSET(0x11F29020)

inline static constexpr unsigned int LOOEONACANL_IBIICOPCDDM_TypeDefinitionIndex = 41624;

class LOOEONACANL_IBIICOPCDDM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEONACANL_IBIICOPCDDM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityNapContactShadowEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityNapContactShadowEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityNapContactShadowEffects*>*))((::PBYTE)hIl2Cpp + LOOEONACANL_IBIICOPCDDM_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
