#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define AKABMJABOHP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15504E50)
#define AKABMJABOHP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15504D20)
#define AKABMJABOHP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15504C90)
#define AKABMJABOHP_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x15504DB0)
#define AKABMJABOHP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15504BA0)
#define AKABMJABOHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15504C10)
#define AKABMJABOHP__CTOR_OFFSET UNITYSDK_OFFSET(0x15504C80)

inline static constexpr unsigned int AKABMJABOHP_TypeDefinitionIndex = 45502;

class AKABMJABOHP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6B; // 0x0
	::System::String* LJAGPIMPFMC; // 0x20
	::System::Int32 BHFMPAHKMDD; // 0x28
	::System::Single FFFMEAIFMKJ; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKABMJABOHP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKABMJABOHP__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKABMJABOHP_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKABMJABOHP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKABMJABOHP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKABMJABOHP_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 LONODJEPPGL, ::System::String* GOFEGJNOEHK, ::System::Single GBAFKOEFAIE, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AKABMJABOHP_CNHBDOMKKDE_OFFSET))(this, LONODJEPPGL, GOFEGJNOEHK, GBAFKOEFAIE, DKOFFFNEFJC);
	}
};
