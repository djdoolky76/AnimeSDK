#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBFNJNBLNEM.h"
#include "unitysdk/GCOLLFHMIGF.h"

namespace MoleMole::ChessStateMachine { class LayerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NKOGNHFECAJ_FEOHGLAOKGO_OFFSET UNITYSDK_OFFSET(0xE1A8A00)
#define NKOGNHFECAJ_GHNAOHJOKEP_OFFSET UNITYSDK_OFFSET(0xE1A8A20)
#define NKOGNHFECAJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A89B0)

inline static constexpr unsigned int NKOGNHFECAJ_TypeDefinitionIndex = 83273;

class NKOGNHFECAJ : public ::EBFNJNBLNEM
{
public:
	::MoleMole::ChessStateMachine::LayerConfig* CMIIFAPFEJP; // 0x48
	::GCOLLFHMIGF BDMCPCOGFBG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOGNHFECAJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* FEOHGLAOKGO()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOGNHFECAJ_FEOHGLAOKGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* GHNAOHJOKEP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOGNHFECAJ_GHNAOHJOKEP_OFFSET))(this);
	}
};
