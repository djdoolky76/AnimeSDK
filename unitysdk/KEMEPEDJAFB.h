#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MMCAKIMPPOI;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define KEMEPEDJAFB_BGGKJGFICCO_OFFSET UNITYSDK_OFFSET(0x18A66230)
#define KEMEPEDJAFB_GCPDPBAMNGC_1_OFFSET UNITYSDK_OFFSET(0x18A66870)
#define KEMEPEDJAFB_GCPDPBAMNGC_OFFSET UNITYSDK_OFFSET(0x18A662D0)
#define KEMEPEDJAFB_IONLDAGAIGL_OFFSET UNITYSDK_OFFSET(0x18A66900)
#define KEMEPEDJAFB_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x18A66020)
#define KEMEPEDJAFB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18A66430)
#define KEMEPEDJAFB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A65EF0)

inline static constexpr unsigned int KEMEPEDJAFB_TypeDefinitionIndex = 61613;

class KEMEPEDJAFB : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::MMCAKIMPPOI*>* GJHNHBJPAAL; // 0x10
	::System::Collections::Generic::List_1<::MMCAKIMPPOI*>* IBINICOKBPG; // 0x18
	::System::Collections::Generic::List_1<::MMCAKIMPPOI*>* MEEOBGHNEKB; // 0x20
	::System::Collections::Generic::List_1<::MMCAKIMPPOI*>* GEFPMPGAEFP; // 0x28
	::System::Boolean JIEFDIANKAH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMEPEDJAFB__CTOR_OFFSET))(this);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_JNBGBKMJGAG_OFFSET))(this);
	}

	::MMCAKIMPPOI* BGGKJGFICCO()
	{
		return ((::MMCAKIMPPOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_BGGKJGFICCO_OFFSET))(this);
	}

	::MMCAKIMPPOI* GCPDPBAMNGC(::System::Single HPCILAJBBHH, ::System::Int32 ANHMGGKIMME, ::System::Action* HFJADAPAJJA, ::System::Action* KEEHLCFNHIL)
	{
		return ((::MMCAKIMPPOI*(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_GCPDPBAMNGC_OFFSET))(this, HPCILAJBBHH, ANHMGGKIMME, HFJADAPAJJA, KEEHLCFNHIL);
	}

	::System::Void PLPONJAKNEB(::System::Int32 GCMEBAIINGO, ::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_PLPONJAKNEB_OFFSET))(this, GCMEBAIINGO, PBCAAADNEPK);
	}

	::MMCAKIMPPOI* GCPDPBAMNGC_1()
	{
		return ((::MMCAKIMPPOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_GCPDPBAMNGC_1_OFFSET))(this);
	}

	::System::Void IONLDAGAIGL(::MMCAKIMPPOI* HACJFKBLODH)
	{
		return ((::System::Void(*)(::PVOID, ::MMCAKIMPPOI*))((::PBYTE)hIl2Cpp + KEMEPEDJAFB_IONLDAGAIGL_OFFSET))(this, HACJFKBLODH);
	}
};
