#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class BDEFDJLPBHM;
namespace System { class String; }

#define BGPODCNDMFE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x139654A0)
#define BGPODCNDMFE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13965410)
#define BGPODCNDMFE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13965380)
#define BGPODCNDMFE_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x13965500)
#define BGPODCNDMFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13965270)
#define BGPODCNDMFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x13965300)
#define BGPODCNDMFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13965370)

inline static constexpr unsigned int BGPODCNDMFE_TypeDefinitionIndex = 77718;

class BGPODCNDMFE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x9; // 0x0
	::System::String* DCJCHGOGLMF; // 0x20
	::BDEFDJLPBHM* LGFFMNDEEBM; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGPODCNDMFE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPODCNDMFE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPODCNDMFE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPODCNDMFE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPODCNDMFE_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::String* MCOHLHMKLIP, ::BDEFDJLPBHM* HIAKILJIOPA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::BDEFDJLPBHM*))((::PBYTE)hIl2Cpp + BGPODCNDMFE_CNHBDOMKKDE_OFFSET))(this, MCOHLHMKLIP, HIAKILJIOPA);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPODCNDMFE_OHFHFOHMBJH_OFFSET))(this);
	}
};
