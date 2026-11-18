#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityColorLookupEffect; }
namespace MoleMole::Config { class ConfigEntityColorLookupEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGNOCBIKJOD_NCOIOGACJPN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x14DAB960)
#define LGNOCBIKJOD_NCOIOGACJPN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAB950)

inline static constexpr unsigned int LGNOCBIKJOD_NCOIOGACJPN_TypeDefinitionIndex = 53488;

class LGNOCBIKJOD_NCOIOGACJPN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGNOCBIKJOD_NCOIOGACJPN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorLookupEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityColorLookupEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityColorLookupEffects*>*))((::PBYTE)hIl2Cpp + LGNOCBIKJOD_NCOIOGACJPN_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
