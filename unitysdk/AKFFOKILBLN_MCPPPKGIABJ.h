#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityPartialBlurEffect; }
namespace MoleMole::Config { class ConfigEntityPartialBlurEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKFFOKILBLN_MCPPPKGIABJ_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x12664580)
#define AKFFOKILBLN_MCPPPKGIABJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12664570)

inline static constexpr unsigned int AKFFOKILBLN_MCPPPKGIABJ_TypeDefinitionIndex = 63893;

class AKFFOKILBLN_MCPPPKGIABJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFFOKILBLN_MCPPPKGIABJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityPartialBlurEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityPartialBlurEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityPartialBlurEffects*>*))((::PBYTE)hIl2Cpp + AKFFOKILBLN_MCPPPKGIABJ_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
