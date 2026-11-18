#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXComicDotEffect; }
namespace MoleMole::Config { class ConfigEntityFXComicDotEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FPLCBMOHADD_CJIJOGMBBCD_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x10ED6CB0)
#define FPLCBMOHADD_CJIJOGMBBCD__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED6CA0)

inline static constexpr unsigned int FPLCBMOHADD_CJIJOGMBBCD_TypeDefinitionIndex = 73377;

class FPLCBMOHADD_CJIJOGMBBCD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPLCBMOHADD_CJIJOGMBBCD__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXComicDotEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXComicDotEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXComicDotEffects*>*))((::PBYTE)hIl2Cpp + FPLCBMOHADD_CJIJOGMBBCD_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
