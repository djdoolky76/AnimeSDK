#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/KFNMABCCOEB.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJLPDKFBNDE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12D005B0)
#define AJLPDKFBNDE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12D00710)
#define AJLPDKFBNDE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12D00520)
#define AJLPDKFBNDE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12D00670)
#define AJLPDKFBNDE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12D00410)
#define AJLPDKFBNDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D004A0)
#define AJLPDKFBNDE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00510)

inline static constexpr unsigned int AJLPDKFBNDE_TypeDefinitionIndex = 42546;

class AJLPDKFBNDE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x13; // 0x0
	::System::String* PLAAMNBJHFN; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* BIIOMNBENNJ; // 0x28
	::KFNMABCCOEB ABBEPNCLJGN; // 0x30
	::System::Boolean DGEPCGOIJLP; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJLPDKFBNDE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLPDKFBNDE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLPDKFBNDE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLPDKFBNDE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 DKBGLBIECBN, ::KFNMABCCOEB DAJBJNIKEGO, ::System::String* LKLKNPHBNOC, ::System::Boolean ABFKKBNMEDJ, ::System::Collections::Generic::List_1<::System::String*>* HFCIDKBCLLL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::KFNMABCCOEB, ::System::String*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + AJLPDKFBNDE_CNHBDOMKKDE_OFFSET))(this, DKBGLBIECBN, DAJBJNIKEGO, LKLKNPHBNOC, ABFKKBNMEDJ, HFCIDKBCLLL);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLPDKFBNDE_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLPDKFBNDE_FIGPAOKNJLN_OFFSET))(this);
	}
};
