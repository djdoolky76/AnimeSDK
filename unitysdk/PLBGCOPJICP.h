#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPNHHGBPCGM.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PLBGCOPJICP_DMEIEIFABHG_OFFSET UNITYSDK_OFFSET(0x11991E70)
#define PLBGCOPJICP_GNAPOGPGOFB_OFFSET UNITYSDK_OFFSET(0x11991F60)

inline static constexpr unsigned int PLBGCOPJICP_TypeDefinitionIndex = 59026;

class PLBGCOPJICP : public ::System::Object
{
public:
	static ::System::String** StaticGet_ELCHPGIMMNL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PLBGCOPJICP_TypeDefinitionIndex)->GetStaticField(0x42A10);
	}

	static ::System::String* DMEIEIFABHG()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PLBGCOPJICP_DMEIEIFABHG_OFFSET))();
	}

	static ::System::Boolean GNAPOGPGOFB(::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* DJFHNKOEEBD, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>* DJBOJFBNFFG)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*, ::System::Collections::Generic::IEnumerable_1<::GPNHHGBPCGM>*))((::PBYTE)hIl2Cpp + PLBGCOPJICP_GNAPOGPGOFB_OFFSET))(DJFHNKOEEBD, DJBOJFBNFFG);
	}
};
