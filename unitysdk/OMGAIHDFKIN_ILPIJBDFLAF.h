#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMGAIHDFKIN;
namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OMGAIHDFKIN_ILPIJBDFLAF_NACKALJALPE_OFFSET UNITYSDK_OFFSET(0x13A724A0)
#define OMGAIHDFKIN_ILPIJBDFLAF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A726D0)

inline static constexpr unsigned int OMGAIHDFKIN_ILPIJBDFLAF_TypeDefinitionIndex = 89337;

class OMGAIHDFKIN_ILPIJBDFLAF : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* CPLGCIBONJG; // 0x18
	::OMGAIHDFKIN* KLHPEBKNIFB; // 0x20
	::MoleMole::UIBaseController* DBEGNAMMHKA; // 0x28
	::System::Boolean IGAAKDOIPNN; // 0x30
	::System::Boolean HAAJFAGFMEA; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_ILPIJBDFLAF__CTOR_OFFSET))(this);
	}

	::System::Void NACKALJALPE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_ILPIJBDFLAF_NACKALJALPE_OFFSET))(this, ABHBKFJKINO);
	}
};
