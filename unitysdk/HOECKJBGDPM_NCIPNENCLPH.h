#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityChannelMixerEffect; }
namespace MoleMole::Config { class ConfigEntityChannelMixerEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HOECKJBGDPM_NCIPNENCLPH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16F50BC0)
#define HOECKJBGDPM_NCIPNENCLPH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F50BB0)

inline static constexpr unsigned int HOECKJBGDPM_NCIPNENCLPH_TypeDefinitionIndex = 87026;

class HOECKJBGDPM_NCIPNENCLPH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOECKJBGDPM_NCIPNENCLPH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityChannelMixerEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityChannelMixerEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityChannelMixerEffects*>*))((::PBYTE)hIl2Cpp + HOECKJBGDPM_NCIPNENCLPH_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
