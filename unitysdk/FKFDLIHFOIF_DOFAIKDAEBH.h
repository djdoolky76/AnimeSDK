#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffect; }
namespace MoleMole::Config { class ConfigEntityScreenSpaceAmbientOcclusionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKFDLIHFOIF_DOFAIKDAEBH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x15E69080)
#define FKFDLIHFOIF_DOFAIKDAEBH__CTOR_OFFSET UNITYSDK_OFFSET(0x15E69070)

inline static constexpr unsigned int FKFDLIHFOIF_DOFAIKDAEBH_TypeDefinitionIndex = 91387;

class FKFDLIHFOIF_DOFAIKDAEBH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFDLIHFOIF_DOFAIKDAEBH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityScreenSpaceAmbientOcclusionEffects*>*))((::PBYTE)hIl2Cpp + FKFDLIHFOIF_DOFAIKDAEBH_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
