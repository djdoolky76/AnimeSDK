#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityGlitchEffect; }
namespace MoleMole::Config { class ConfigEntityGlitchEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POOJJNIHFOM_JDCHJEBJJHG_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1374A9F0)
#define POOJJNIHFOM_JDCHJEBJJHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1374A9E0)

inline static constexpr unsigned int POOJJNIHFOM_JDCHJEBJJHG_TypeDefinitionIndex = 55594;

class POOJJNIHFOM_JDCHJEBJJHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POOJJNIHFOM_JDCHJEBJJHG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityGlitchEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityGlitchEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityGlitchEffects*>*))((::PBYTE)hIl2Cpp + POOJJNIHFOM_JDCHJEBJJHG_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
