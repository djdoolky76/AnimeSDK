#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorCurvesEffect; }
namespace MoleMole::Config { class ConfigEntityColorCurvesEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBDFAALPFDI_NCKBKCBCAMB_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x11953EF0)
#define PBDFAALPFDI_NCKBKCBCAMB__CTOR_OFFSET UNITYSDK_OFFSET(0x11953EE0)

inline static constexpr unsigned int PBDFAALPFDI_NCKBKCBCAMB_TypeDefinitionIndex = 84788;

class PBDFAALPFDI_NCKBKCBCAMB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDFAALPFDI_NCKBKCBCAMB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorCurvesEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorCurvesEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorCurvesEffects*>*))((::PBYTE)hIl2Cpp + PBDFAALPFDI_NCKBKCBCAMB_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
