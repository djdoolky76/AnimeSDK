#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGFLNMEGCGD.h"
#include "unitysdk/DBAHPGDJDFA.h"
#include "unitysdk/FHPEOALHKDM.h"
#include "unitysdk/NMILKOJNFFF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANHBKMILIDH_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x135F88F0)
#define ANHBKMILIDH_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135F70F0)
#define ANHBKMILIDH_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x135F8950)
#define ANHBKMILIDH_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x135F7170)
#define ANHBKMILIDH__CTOR_OFFSET UNITYSDK_OFFSET(0x135F8FD0)

inline static constexpr unsigned int ANHBKMILIDH_TypeDefinitionIndex = 76174;

class ANHBKMILIDH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* HNCKJHFEOKD; // 0x10
	::System::Collections::Generic::List_1<::FHPEOALHKDM>* JHBIFEKMKLM; // 0x18
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* PCHHIKELCCI; // 0x20
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* LGFCDFDEJLM; // 0x28
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* HOCEFAEAELF; // 0x30
	::System::Collections::Generic::List_1<::NMILKOJNFFF>* PPALEJNONOB; // 0x38
	::System::String* EPHDJFHFKBK; // 0x40
	::System::Collections::Generic::List_1<::DBAHPGDJDFA>* GOMMMJFJGOK; // 0x48
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* PAHMAFMEBEK; // 0x50
	::System::Collections::Generic::List_1<::System::String*>* NFPCPCIONLF; // 0x58
	::System::Collections::Generic::List_1<::CGFLNMEGCGD>* BIBMBFLBLHA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHBKMILIDH__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + ANHBKMILIDH_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANHBKMILIDH_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}

	::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + ANHBKMILIDH_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + ANHBKMILIDH_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
	}
};
