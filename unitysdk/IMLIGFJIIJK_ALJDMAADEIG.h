#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffect; }
namespace MoleMole::Config { class ConfigEntityCharacterVolumeProxyEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IMLIGFJIIJK_ALJDMAADEIG_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1381E800)
#define IMLIGFJIIJK_ALJDMAADEIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1381E7F0)

inline static constexpr unsigned int IMLIGFJIIJK_ALJDMAADEIG_TypeDefinitionIndex = 49612;

class IMLIGFJIIJK_ALJDMAADEIG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLIGFJIIJK_ALJDMAADEIG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCharacterVolumeProxyEffects*>*))((::PBYTE)hIl2Cpp + IMLIGFJIIJK_ALJDMAADEIG_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
