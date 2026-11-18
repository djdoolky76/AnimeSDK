#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OMGAIHDFKIN;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define OMGAIHDFKIN_GNEGOGBNKKA_LHBGIANKPKE_OFFSET UNITYSDK_OFFSET(0x11B46910)
#define OMGAIHDFKIN_GNEGOGBNKKA__CTOR_OFFSET UNITYSDK_OFFSET(0x11B46900)

inline static constexpr unsigned int OMGAIHDFKIN_GNEGOGBNKKA_TypeDefinitionIndex = 89334;

class OMGAIHDFKIN_GNEGOGBNKKA : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10
	::OMGAIHDFKIN* KLHPEBKNIFB; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* CPLGCIBONJG; // 0x20
	::System::Boolean HAAJFAGFMEA; // 0x28
	::System::Boolean IGAAKDOIPNN; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_GNEGOGBNKKA__CTOR_OFFSET))(this);
	}

	::System::Void LHBGIANKPKE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_GNEGOGBNKKA_LHBGIANKPKE_OFFSET))(this, ABHBKFJKINO);
	}
};
