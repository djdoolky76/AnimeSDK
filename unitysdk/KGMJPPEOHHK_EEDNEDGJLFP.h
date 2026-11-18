#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffect; }
namespace MoleMole::Config { class ConfigEntityMonsterIgnisFatuusEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGMJPPEOHHK_EEDNEDGJLFP_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1633E320)
#define KGMJPPEOHHK_EEDNEDGJLFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1633E310)

inline static constexpr unsigned int KGMJPPEOHHK_EEDNEDGJLFP_TypeDefinitionIndex = 50962;

class KGMJPPEOHHK_EEDNEDGJLFP : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGMJPPEOHHK_EEDNEDGJLFP__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityMonsterIgnisFatuusEffects*>*))((::PBYTE)hIl2Cpp + KGMJPPEOHHK_EEDNEDGJLFP_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
