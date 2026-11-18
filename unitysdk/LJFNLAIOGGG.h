#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define LJFNLAIOGGG_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x12A60320)
#define LJFNLAIOGGG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x12A60450)
#define LJFNLAIOGGG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x12A60290)
#define LJFNLAIOGGG_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x12A603B0)
#define LJFNLAIOGGG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12A601A0)
#define LJFNLAIOGGG__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A60210)
#define LJFNLAIOGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x12A60280)

inline static constexpr unsigned int LJFNLAIOGGG_TypeDefinitionIndex = 83679;

class LJFNLAIOGGG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xF6; // 0x0
	::System::UInt32 HDBIHPJHLKA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJFNLAIOGGG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFNLAIOGGG__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFNLAIOGGG_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFNLAIOGGG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 PKMFBJMJCOO, ::System::UInt32 HPCEGDHNDML)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LJFNLAIOGGG_CNHBDOMKKDE_OFFSET))(this, PKMFBJMJCOO, HPCEGDHNDML);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFNLAIOGGG_OHFHFOHMBJH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFNLAIOGGG_FIGPAOKNJLN_OFFSET))(this);
	}
};
