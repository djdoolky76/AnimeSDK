#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNOPGKADCGK;
namespace MoleMole { class MainCityPhotoPopContext; }
namespace MoleMole { class UIMainCityPhotoPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDLNPEBNNMB_CKBNCJMPFOC_OFFSET UNITYSDK_OFFSET(0x14D66720)
#define MDLNPEBNNMB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D66710)

inline static constexpr unsigned int MDLNPEBNNMB_TypeDefinitionIndex = 81917;

class MDLNPEBNNMB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLNPEBNNMB__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::GNOPGKADCGK*>* CKBNCJMPFOC(::MoleMole::UIMainCityPhotoPopWindowController* GMOJGCJKPBB, ::MoleMole::MainCityPhotoPopContext* ICGFNADKNEP)
	{
		return ((::System::Collections::Generic::List_1<::GNOPGKADCGK*>*(*)(::MoleMole::UIMainCityPhotoPopWindowController*, ::MoleMole::MainCityPhotoPopContext*))((::PBYTE)hIl2Cpp + MDLNPEBNNMB_CKBNCJMPFOC_OFFSET))(GMOJGCJKPBB, ICGFNADKNEP);
	}
};
