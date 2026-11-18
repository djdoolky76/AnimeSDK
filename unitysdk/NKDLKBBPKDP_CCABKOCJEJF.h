#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityVREffectsEffect; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKDLKBBPKDP_CCABKOCJEJF_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0xE7618B0)
#define NKDLKBBPKDP_CCABKOCJEJF__CTOR_OFFSET UNITYSDK_OFFSET(0xE7618A0)

inline static constexpr unsigned int NKDLKBBPKDP_CCABKOCJEJF_TypeDefinitionIndex = 73662;

class NKDLKBBPKDP_CCABKOCJEJF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDLKBBPKDP_CCABKOCJEJF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityVREffectsEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityVREffectsEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityVREffectsEffects*>*))((::PBYTE)hIl2Cpp + NKDLKBBPKDP_CCABKOCJEJF_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
