#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FEMCEEMPMGH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16180B30)
#define FEMCEEMPMGH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16180AA0)
#define FEMCEEMPMGH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16180970)
#define FEMCEEMPMGH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16180A00)
#define FEMCEEMPMGH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x161807C0)
#define FEMCEEMPMGH__CCTOR_OFFSET UNITYSDK_OFFSET(0x161808F0)
#define FEMCEEMPMGH__CTOR_OFFSET UNITYSDK_OFFSET(0x16180960)

inline static constexpr unsigned int FEMCEEMPMGH_TypeDefinitionIndex = 48929;

class FEMCEEMPMGH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x1C; // 0x0
	::MoleMole::EntityHandle BLJOGLHLAOH; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* FNFGBCIDJPE; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEMCEEMPMGH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEEMPMGH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEEMPMGH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEEMPMGH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEEMPMGH_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEMCEEMPMGH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::EntityHandle AAOHHDDFGAJ, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* OFIJMADOFAE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + FEMCEEMPMGH_CNHBDOMKKDE_OFFSET))(this, AAOHHDDFGAJ, OFIJMADOFAE);
	}
};
