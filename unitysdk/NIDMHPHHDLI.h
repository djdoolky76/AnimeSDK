#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFDOCCOFLJ_2.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/KMFCIFDAHDO.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/OJEABMGNEDJ.h"
#include "unitysdk/OLAGMJFCDLG.h"
#include "unitysdk/PDODOIAGGBA.h"

class AGJFDPBLDDF;
class CHDFDOGABHI;
class IAAHLMADFNL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIDMHPHHDLI_AHKIKJAOAGM_OFFSET UNITYSDK_OFFSET(0x12895D90)
#define NIDMHPHHDLI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12895A20)
#define NIDMHPHHDLI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12895D10)
#define NIDMHPHHDLI_KBONGNAOMDC_OFFSET UNITYSDK_OFFSET(0x12895DB0)
#define NIDMHPHHDLI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12895C80)
#define NIDMHPHHDLI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12895830)
#define NIDMHPHHDLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x12895A70)
#define NIDMHPHHDLI__CTOR_OFFSET UNITYSDK_OFFSET(0x12895AF0)

inline static constexpr unsigned int NIDMHPHHDLI_TypeDefinitionIndex = 61569;

class NIDMHPHHDLI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x89; // 0x0
	::System::Collections::Generic::List_1<::PDODOIAGGBA>* JDJCFOLHMHO; // 0x48
	::System::Collections::Generic::List_1<::IAAHLMADFNL*>* AMKELGPHFGB; // 0x50
	::System::Collections::Generic::List_1<::KMFCIFDAHDO>* FEGJOLJOFLD; // 0x58
	::Foundation::AssetPath KDHIPMPCJKO; // 0x60
	::System::Collections::Generic::List_1<::IAAHLMADFNL*>* GAHAIAJINKG; // 0x70
	::AGJFDPBLDDF* DKNLBKEKGIC; // 0x78
	::CHDFDOGABHI* LJCOPIJLNAB; // 0x80
	::ELFDOCCOFLJ_2<::System::UInt32, ::System::String*> JLNDJPLFPCN; // 0x88
	::System::Byte _padding0[0x8];
	::Foundation::AssetPath ABPHBKOONOO; // 0x98
	::OLAGMJFCDLG LEJHFIJNPDE; // 0xA8
	::OJEABMGNEDJ INHFADDKMGH; // 0xAC
	::Foundation::ViewObject::SuiteInfo HAMCIKDLBAE; // 0xB0
	::System::Boolean HCHLKKDGIFC; // 0xB8
	::System::Boolean NBPDKFLLAAD; // 0xB9

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIDMHPHHDLI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::NIDMHPHHDLI* JFDOOELFAOA()
	{
		return ((::NIDMHPHHDLI*(*)())((::PBYTE)hIl2Cpp + NIDMHPHHDLI_JFDOOELFAOA_OFFSET))();
	}

	::System::Boolean AHKIKJAOAGM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI_AHKIKJAOAGM_OFFSET))(this);
	}

	::System::Boolean KBONGNAOMDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIDMHPHHDLI_KBONGNAOMDC_OFFSET))(this);
	}
};
