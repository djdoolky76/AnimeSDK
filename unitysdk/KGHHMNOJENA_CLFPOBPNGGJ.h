#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityMotionBlurEffect; }
namespace MoleMole::Config { class ConfigEntityMotionBlurEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KGHHMNOJENA_CLFPOBPNGGJ_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x168022A0)
#define KGHHMNOJENA_CLFPOBPNGGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16802290)

inline static constexpr unsigned int KGHHMNOJENA_CLFPOBPNGGJ_TypeDefinitionIndex = 62967;

class KGHHMNOJENA_CLFPOBPNGGJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHHMNOJENA_CLFPOBPNGGJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityMotionBlurEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityMotionBlurEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityMotionBlurEffects*>*))((::PBYTE)hIl2Cpp + KGHHMNOJENA_CLFPOBPNGGJ_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
