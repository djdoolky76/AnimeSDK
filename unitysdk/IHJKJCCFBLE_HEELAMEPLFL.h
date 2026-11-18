#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffect; }
namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHJKJCCFBLE_HEELAMEPLFL_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x12EB1AB0)
#define IHJKJCCFBLE_HEELAMEPLFL__CTOR_OFFSET UNITYSDK_OFFSET(0x12EB1AA0)

inline static constexpr unsigned int IHJKJCCFBLE_HEELAMEPLFL_TypeDefinitionIndex = 84991;

class IHJKJCCFBLE_HEELAMEPLFL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHJKJCCFBLE_HEELAMEPLFL__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects*>*))((::PBYTE)hIl2Cpp + IHJKJCCFBLE_HEELAMEPLFL_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
