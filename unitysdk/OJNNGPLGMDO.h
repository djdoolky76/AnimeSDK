#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJNNGPLGMDO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16C1B710)
#define OJNNGPLGMDO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16C1BA60)
#define OJNNGPLGMDO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16C1B680)
#define OJNNGPLGMDO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16C1B9C0)
#define OJNNGPLGMDO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16C1B520)
#define OJNNGPLGMDO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C1B600)
#define OJNNGPLGMDO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1B670)

inline static constexpr unsigned int OJNNGPLGMDO_TypeDefinitionIndex = 50110;

class OJNNGPLGMDO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xCC; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* ALEOJPJGBAG; // 0x20
	::System::String* KIHGNGKBADE; // 0x28
	::System::Int32 GOMOCBAJBEM; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJNNGPLGMDO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNNGPLGMDO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNNGPLGMDO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNNGPLGMDO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* AELLPLBJELA, ::System::Int32 KDDKDHBELOC, ::System::Collections::Generic::List_1<::System::String*>* OHJBODKHDOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + OJNNGPLGMDO_CNHBDOMKKDE_OFFSET))(this, AELLPLBJELA, KDDKDHBELOC, OHJBODKHDOM);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNNGPLGMDO_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNNGPLGMDO_FIGPAOKNJLN_OFFSET))(this);
	}
};
