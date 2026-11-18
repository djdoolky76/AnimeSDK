#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKPHPPJMJDI_HMLEHMEHEJK.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKPHPPJMJDI_CNHBDOMKKDE_1_OFFSET UNITYSDK_OFFSET(0x17125BA0)
#define EKPHPPJMJDI_CNHBDOMKKDE_2_OFFSET UNITYSDK_OFFSET(0x17125BF0)
#define EKPHPPJMJDI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x17125B40)
#define EKPHPPJMJDI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x17125CE0)
#define EKPHPPJMJDI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x17125AB0)
#define EKPHPPJMJDI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x17125C40)
#define EKPHPPJMJDI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17125960)
#define EKPHPPJMJDI__CCTOR_OFFSET UNITYSDK_OFFSET(0x171259E0)
#define EKPHPPJMJDI__CTOR_OFFSET UNITYSDK_OFFSET(0x17125A50)

inline static constexpr unsigned int EKPHPPJMJDI_TypeDefinitionIndex = 82624;

class EKPHPPJMJDI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x124; // 0x0
	::System::Collections::Generic::HashSet_1<::MoleMole::GameplayTag>* AELLPLBJELA; // 0x20
	::EKPHPPJMJDI_HMLEHMEHEJK AGEFPKLIFGB; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKPHPPJMJDI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHPPJMJDI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::EKPHPPJMJDI_HMLEHMEHEJK OBNIAHNMHPF, ::MoleMole::GameplayTag FIKOPMJCIGN)
	{
		return ((::System::Void(*)(::PVOID, ::EKPHPPJMJDI_HMLEHMEHEJK, ::MoleMole::GameplayTag))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_CNHBDOMKKDE_OFFSET))(this, OBNIAHNMHPF, FIKOPMJCIGN);
	}

	::System::Void CNHBDOMKKDE_1(::EKPHPPJMJDI_HMLEHMEHEJK OBNIAHNMHPF, ::System::Collections::Generic::IList_1<::System::String*>* FIKOPMJCIGN)
	{
		return ((::System::Void(*)(::PVOID, ::EKPHPPJMJDI_HMLEHMEHEJK, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_CNHBDOMKKDE_1_OFFSET))(this, OBNIAHNMHPF, FIKOPMJCIGN);
	}

	::System::Void CNHBDOMKKDE_2(::EKPHPPJMJDI_HMLEHMEHEJK OBNIAHNMHPF, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* FIKOPMJCIGN)
	{
		return ((::System::Void(*)(::PVOID, ::EKPHPPJMJDI_HMLEHMEHEJK, ::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_CNHBDOMKKDE_2_OFFSET))(this, OBNIAHNMHPF, FIKOPMJCIGN);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPHPPJMJDI_FIGPAOKNJLN_OFFSET))(this);
	}
};
