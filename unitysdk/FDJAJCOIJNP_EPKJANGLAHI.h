#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffect; }
namespace MoleMole::Config { class ConfigEntityWhiteBalanceEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDJAJCOIJNP_EPKJANGLAHI_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1617BB40)
#define FDJAJCOIJNP_EPKJANGLAHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1617BB30)

inline static constexpr unsigned int FDJAJCOIJNP_EPKJANGLAHI_TypeDefinitionIndex = 65316;

class FDJAJCOIJNP_EPKJANGLAHI : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJAJCOIJNP_EPKJANGLAHI__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityWhiteBalanceEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityWhiteBalanceEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityWhiteBalanceEffects*>*))((::PBYTE)hIl2Cpp + FDJAJCOIJNP_EPKJANGLAHI_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
