#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffect; }
namespace MoleMole::Config { class ConfigEntityAmplifyOcclusionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENKFLJCMCJN_AOGLAFKHCBJ_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x12376AE0)
#define ENKFLJCMCJN_AOGLAFKHCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12376AD0)

inline static constexpr unsigned int ENKFLJCMCJN_AOGLAFKHCBJ_TypeDefinitionIndex = 66394;

class ENKFLJCMCJN_AOGLAFKHCBJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKFLJCMCJN_AOGLAFKHCBJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAmplifyOcclusionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAmplifyOcclusionEffects*>*))((::PBYTE)hIl2Cpp + ENKFLJCMCJN_AOGLAFKHCBJ_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
