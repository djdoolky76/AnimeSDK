#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define FELOEPNOOCJ_FNMBPKKLPCI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x132088C0)
#define FELOEPNOOCJ_FNMBPKKLPCI__CTOR_OFFSET UNITYSDK_OFFSET(0x132088B0)

inline static constexpr unsigned int FELOEPNOOCJ_FNMBPKKLPCI_TypeDefinitionIndex = 63573;

class FELOEPNOOCJ_FNMBPKKLPCI : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_FNMBPKKLPCI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELOEPNOOCJ_FNMBPKKLPCI_PNGOHNLELDJ_OFFSET))(this);
	}
};
