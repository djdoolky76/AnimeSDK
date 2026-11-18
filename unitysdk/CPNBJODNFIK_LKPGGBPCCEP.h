#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPNBJODNFIK_LKPGGBPCCEP_LJEGFEPGALL_OFFSET UNITYSDK_OFFSET(0x193EEA80)
#define CPNBJODNFIK_LKPGGBPCCEP__CTOR_OFFSET UNITYSDK_OFFSET(0x193EEA70)

inline static constexpr unsigned int CPNBJODNFIK_LKPGGBPCCEP_TypeDefinitionIndex = 49703;

class CPNBJODNFIK_LKPGGBPCCEP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CPLGCIBONJG; // 0x10
	::System::Action* PABLEDCGDGM; // 0x18
	::System::Boolean HAAJFAGFMEA; // 0x20
	::System::Boolean IGAAKDOIPNN; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_LKPGGBPCCEP__CTOR_OFFSET))(this);
	}

	::System::Void LJEGFEPGALL(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPNBJODNFIK_LKPGGBPCCEP_LJEGFEPGALL_OFFSET))(this, ABHBKFJKINO);
	}
};
