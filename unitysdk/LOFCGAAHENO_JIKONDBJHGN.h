#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffect; }
namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOFCGAAHENO_JIKONDBJHGN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x11F258E0)
#define LOFCGAAHENO_JIKONDBJHGN__CTOR_OFFSET UNITYSDK_OFFSET(0x11F258D0)

inline static constexpr unsigned int LOFCGAAHENO_JIKONDBJHGN_TypeDefinitionIndex = 76096;

class LOFCGAAHENO_JIKONDBJHGN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOFCGAAHENO_JIKONDBJHGN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityDistortionEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityDistortionEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityDistortionEffects*>*))((::PBYTE)hIl2Cpp + LOFCGAAHENO_JIKONDBJHGN_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
