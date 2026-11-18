#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDepthOfFieldEffects; }
namespace MoleMole::Config { class ConfigEntityDepthOfFieldEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOEPOGMMFKD_LPJLFOGPGMK_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x125B7630)
#define FOEPOGMMFKD_LPJLFOGPGMK__CTOR_OFFSET UNITYSDK_OFFSET(0x125B7620)

inline static constexpr unsigned int FOEPOGMMFKD_LPJLFOGPGMK_TypeDefinitionIndex = 57661;

class FOEPOGMMFKD_LPJLFOGPGMK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEPOGMMFKD_LPJLFOGPGMK__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDepthOfFieldEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDepthOfFieldEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDepthOfFieldEffects*>*))((::PBYTE)hIl2Cpp + FOEPOGMMFKD_LPJLFOGPGMK_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
