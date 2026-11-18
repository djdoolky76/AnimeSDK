#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntitySplitToningEffect; }
namespace MoleMole::Config { class ConfigEntitySplitToningEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLBABKCNCAJ_BCBFFOCALPM_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16CF9A10)
#define HLBABKCNCAJ_BCBFFOCALPM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF9A00)

inline static constexpr unsigned int HLBABKCNCAJ_BCBFFOCALPM_TypeDefinitionIndex = 82285;

class HLBABKCNCAJ_BCBFFOCALPM : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBABKCNCAJ_BCBFFOCALPM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySplitToningEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntitySplitToningEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntitySplitToningEffects*>*))((::PBYTE)hIl2Cpp + HLBABKCNCAJ_BCBFFOCALPM_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
