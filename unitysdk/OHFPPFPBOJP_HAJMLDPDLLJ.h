#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrection; }
namespace MoleMole::Config { class ConfigEntityAvatarColorCorrections; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHFPPFPBOJP_HAJMLDPDLLJ_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0xE14F7A0)
#define OHFPPFPBOJP_HAJMLDPDLLJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE14F790)

inline static constexpr unsigned int OHFPPFPBOJP_HAJMLDPDLLJ_TypeDefinitionIndex = 65382;

class OHFPPFPBOJP_HAJMLDPDLLJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHFPPFPBOJP_HAJMLDPDLLJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAvatarColorCorrections*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAvatarColorCorrection*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAvatarColorCorrections*>*))((::PBYTE)hIl2Cpp + OHFPPFPBOJP_HAJMLDPDLLJ_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
