#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKKPMDKOJML.h"
#include "unitysdk/MDGJCMNACED.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/OLPPOJJADDO.h"

class CFHOEGBMPKN;
class KOIDMLPJGML;
class MLOCDLKJHKK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class DBMAHDDGMHM_1;

#define MBDAEEFAGKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D5AAD0)
#define MBDAEEFAGKB_HLOKCOKHMBL_OFFSET UNITYSDK_OFFSET(0x14D5B830)
#define MBDAEEFAGKB_HMPFAMKGFKP_OFFSET UNITYSDK_OFFSET(0x14D5C370)
#define MBDAEEFAGKB_IJPHLDCJKJH_OFFSET UNITYSDK_OFFSET(0x14D5AE70)
#define MBDAEEFAGKB_JHBHFFPFLBP_OFFSET UNITYSDK_OFFSET(0x14D5B3F0)
#define MBDAEEFAGKB_PGKDINGDONO_OFFSET UNITYSDK_OFFSET(0x14D5BA00)
#define MBDAEEFAGKB_PJEBDDHFANP_OFFSET UNITYSDK_OFFSET(0x14D5B6F0)
#define MBDAEEFAGKB_PKAIDCBEECI_OFFSET UNITYSDK_OFFSET(0x14D5B890)
#define MBDAEEFAGKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D5AE60)
#define MBDAEEFAGKB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D5A900)

inline static constexpr unsigned int MBDAEEFAGKB_TypeDefinitionIndex = 78872;

class MBDAEEFAGKB : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_IKHGHHHIFMO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MBDAEEFAGKB_TypeDefinitionIndex)->GetStaticField(0xFD50);
	}
	::DBMAHDDGMHM_1<::System::Boolean>* MNAEBKNEBIB; // 0x10
	::MLOCDLKJHKK* JPDKPGLKOKJ; // 0x18
	::DBMAHDDGMHM_1<::MDGJCMNACED>* CFMJNFGGOBM; // 0x20
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HEIAEFIDLAK; // 0x28
	::DBMAHDDGMHM_1<::FKKPMDKOJML>* NKKADOEFBKE; // 0x30
	::CFHOEGBMPKN* EDKGMLLKLJM; // 0x38
	::DBMAHDDGMHM_1<::System::Boolean>* AIILDPHKNMF; // 0x40
	::System::Int32 PNABLGODLPP; // 0x48
	::System::Int32 EJFCPLJBLGD; // 0x4C
	::System::Int32 JPOMAJACLNA; // 0x50
	::System::Int32 LODLLGMDDKO; // 0x54
	::System::Int32 DHAJLFMHDNG; // 0x58

	::System::Void _ctor(::FKKPMDKOJML EFACMLGGAJE, ::System::Boolean OBHMKGOLGEN, ::System::Boolean OPKONMPIIEM, ::MDGJCMNACED MAAMLKFKLOD)
	{
		return ((::System::Void(*)(::PVOID, ::FKKPMDKOJML, ::System::Boolean, ::System::Boolean, ::MDGJCMNACED))((::PBYTE)hIl2Cpp + MBDAEEFAGKB__CTOR_OFFSET))(this, EFACMLGGAJE, OBHMKGOLGEN, OPKONMPIIEM, MAAMLKFKLOD);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDAEEFAGKB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean IJPHLDCJKJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_IJPHLDCJKJH_OFFSET))(this);
	}

	::System::Boolean JHBHFFPFLBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_JHBHFFPFLBP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* HLOKCOKHMBL()
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_HLOKCOKHMBL_OFFSET))(this);
	}

	::DJCHCMEFPIF PKAIDCBEECI()
	{
		return ((::DJCHCMEFPIF(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_PKAIDCBEECI_OFFSET))(this);
	}

	::OLPPOJJADDO PGKDINGDONO()
	{
		return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_PGKDINGDONO_OFFSET))(this);
	}

	::System::Int32 PJEBDDHFANP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_PJEBDDHFANP_OFFSET))(this);
	}

	::System::String* HMPFAMKGFKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAEEFAGKB_HMPFAMKGFKP_OFFSET))(this);
	}
};
