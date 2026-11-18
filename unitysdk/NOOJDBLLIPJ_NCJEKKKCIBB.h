#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffect; }
namespace MoleMole::Config { class ConfigEntityFXFogEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NOOJDBLLIPJ_NCJEKKKCIBB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x16B97600)
#define NOOJDBLLIPJ_NCJEKKKCIBB__CTOR_OFFSET UNITYSDK_OFFSET(0x16B975F0)

inline static constexpr unsigned int NOOJDBLLIPJ_NCJEKKKCIBB_TypeDefinitionIndex = 66966;

class NOOJDBLLIPJ_NCJEKKKCIBB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ_NCJEKKKCIBB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXFogEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFXFogEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFXFogEffects*>*))((::PBYTE)hIl2Cpp + NOOJDBLLIPJ_NCJEKKKCIBB_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
