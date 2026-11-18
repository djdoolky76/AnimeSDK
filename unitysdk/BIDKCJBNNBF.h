#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHCAHMCCPML.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIDKCJBNNBF_KBLIFPLNLCO_OFFSET UNITYSDK_OFFSET(0x115066C0)
#define BIDKCJBNNBF_MLLDEICEDEP_OFFSET UNITYSDK_OFFSET(0x11506390)
#define BIDKCJBNNBF_MPIOOKEPIAF_OFFSET UNITYSDK_OFFSET(0x115064F0)

inline static constexpr unsigned int BIDKCJBNNBF_TypeDefinitionIndex = 91768;

class BIDKCJBNNBF : public ::System::Object
{
public:
	static ::System::Void MLLDEICEDEP(::GHCAHMCCPML KLFPKMCKLNG, ::System::String* KKIAHJODOIA)
	{
		return ((::System::Void(*)(::GHCAHMCCPML, ::System::String*))((::PBYTE)hIl2Cpp + BIDKCJBNNBF_MLLDEICEDEP_OFFSET))(KLFPKMCKLNG, KKIAHJODOIA);
	}

	static ::System::Void KBLIFPLNLCO(::System::String* KKIAHJODOIA, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NFCFJIEHJAJ)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + BIDKCJBNNBF_KBLIFPLNLCO_OFFSET))(KKIAHJODOIA, NFCFJIEHJAJ);
	}

	static ::System::String* MPIOOKEPIAF(::GHCAHMCCPML KLFPKMCKLNG)
	{
		return ((::System::String*(*)(::GHCAHMCCPML))((::PBYTE)hIl2Cpp + BIDKCJBNNBF_MPIOOKEPIAF_OFFSET))(KLFPKMCKLNG);
	}
};
