#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityTonemappingEffect; }
namespace MoleMole::Config { class ConfigEntityTonemappingEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DALJDMCDGAE_LLMNCGCGLGO_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x193F57B0)
#define DALJDMCDGAE_LLMNCGCGLGO__CTOR_OFFSET UNITYSDK_OFFSET(0x193F57A0)

inline static constexpr unsigned int DALJDMCDGAE_LLMNCGCGLGO_TypeDefinitionIndex = 58536;

class DALJDMCDGAE_LLMNCGCGLGO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DALJDMCDGAE_LLMNCGCGLGO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTonemappingEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityTonemappingEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityTonemappingEffects*>*))((::PBYTE)hIl2Cpp + DALJDMCDGAE_LLMNCGCGLGO_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
