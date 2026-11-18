#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJIPPKJMLFG_GPGHICINHCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1657B290)

inline static constexpr unsigned int IJIPPKJMLFG_GPGHICINHCI_TypeDefinitionIndex = 71607;

class IJIPPKJMLFG_GPGHICINHCI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIWindowController*>* FLEONIMKKGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPPKJMLFG_GPGHICINHCI__CTOR_OFFSET))(this);
	}
};
