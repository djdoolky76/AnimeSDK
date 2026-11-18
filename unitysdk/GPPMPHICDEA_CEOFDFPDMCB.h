#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPPMPHICDEA_CEOFDFPDMCB_EJKGOHJOCEH_OFFSET UNITYSDK_OFFSET(0x15D913F0)
#define GPPMPHICDEA_CEOFDFPDMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x15D913E0)

inline static constexpr unsigned int GPPMPHICDEA_CEOFDFPDMCB_TypeDefinitionIndex = 42630;

class GPPMPHICDEA_CEOFDFPDMCB : public ::System::Object
{
public:
	::System::Action* GGJBIIKEHMD; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* EJPPOOPAJNP; // 0x18
	::System::Int32 EOGLMAEPALE; // 0x20
	::System::Int32 BABIHDEGHAB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CEOFDFPDMCB__CTOR_OFFSET))(this);
	}

	::System::Void EJKGOHJOCEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_CEOFDFPDMCB_EJKGOHJOCEH_OFFSET))(this);
	}
};
