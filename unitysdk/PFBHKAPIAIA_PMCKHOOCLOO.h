#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffect; }
namespace MoleMole::Config { class ConfigEntityDirectionalBlurEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PFBHKAPIAIA_PMCKHOOCLOO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x17324FF0)
#define PFBHKAPIAIA_PMCKHOOCLOO__CTOR_OFFSET UNITYSDK_OFFSET(0x17324FE0)

inline static constexpr unsigned int PFBHKAPIAIA_PMCKHOOCLOO_TypeDefinitionIndex = 79169;

class PFBHKAPIAIA_PMCKHOOCLOO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBHKAPIAIA_PMCKHOOCLOO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityDirectionalBlurEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDirectionalBlurEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityDirectionalBlurEffects*>*))((::PBYTE)hIl2Cpp + PFBHKAPIAIA_PMCKHOOCLOO_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
