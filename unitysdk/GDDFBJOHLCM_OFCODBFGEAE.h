#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffect; }
namespace MoleMole::Config { class ConfigEntityPaniniProjectionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDDFBJOHLCM_OFCODBFGEAE_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x165EB300)
#define GDDFBJOHLCM_OFCODBFGEAE__CTOR_OFFSET UNITYSDK_OFFSET(0x165EB2F0)

inline static constexpr unsigned int GDDFBJOHLCM_OFCODBFGEAE_TypeDefinitionIndex = 69651;

class GDDFBJOHLCM_OFCODBFGEAE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDFBJOHLCM_OFCODBFGEAE__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityPaniniProjectionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPaniniProjectionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityPaniniProjectionEffects*>*))((::PBYTE)hIl2Cpp + GDDFBJOHLCM_OFCODBFGEAE_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
