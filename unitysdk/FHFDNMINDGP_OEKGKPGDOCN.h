#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FHFDNMINDGP_OEKGKPGDOCN_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x10EB3EA0)
#define FHFDNMINDGP_OEKGKPGDOCN__CTOR_OFFSET UNITYSDK_OFFSET(0x10EB3E90)

inline static constexpr unsigned int FHFDNMINDGP_OEKGKPGDOCN_TypeDefinitionIndex = 66934;

class FHFDNMINDGP_OEKGKPGDOCN : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDNMINDGP_OEKGKPGDOCN__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFilmGrains*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityFilmGrains*>*))((::PBYTE)hIl2Cpp + FHFDNMINDGP_OEKGKPGDOCN_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
