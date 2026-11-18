#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAutoExposureEffect; }
namespace MoleMole::Config { class ConfigEntityAutoExposureEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KIAFFEDAMOA_ILHHIOLMJBL_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1862B120)
#define KIAFFEDAMOA_ILHHIOLMJBL__CTOR_OFFSET UNITYSDK_OFFSET(0x1862B110)

inline static constexpr unsigned int KIAFFEDAMOA_ILHHIOLMJBL_TypeDefinitionIndex = 72461;

class KIAFFEDAMOA_ILHHIOLMJBL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIAFFEDAMOA_ILHHIOLMJBL__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAutoExposureEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAutoExposureEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAutoExposureEffects*>*))((::PBYTE)hIl2Cpp + KIAFFEDAMOA_ILHHIOLMJBL_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
